/*
  Evelia Romero Marin
  CS 135 
  Professor Maryash 
  Project 3A: Profemon class
  Program contains a Profemon class and implements its associated functions. 
*/


#include <iostream> 
using namespace std; 

#include "skill.hpp" 
#include "profemon.hpp" 


Profemon::Profemon(){
  player_nombre = "Undefined";  
}

Profemon::Profemon(std::string name, double max_health, Specialty specialty){
  player_nombre = name; 
  max_salud = max_health; 
  especialidad = specialty;  


  required_exp = 50;  
  current_exp = 0; 
  player_level = 0; 
  
}

std::string Profemon::getName(){
  return player_nombre; 
}

Specialty Profemon::getSpecialty(){
  return especialidad; 
}

int Profemon::getLevel(){
  return player_level; 
}

double Profemon::getMaxHealth(){
  return max_salud; 
}

void Profemon::setName(std::string name){
  player_nombre = name; 
}


void Profemon::levelUp(int exp){
  current_exp = current_exp + exp;
  
  while(current_exp >= required_exp){
    player_level++; 
    current_exp = current_exp - required_exp; 
    if(especialidad == ML){
     required_exp += 10; 
    }
    else if(especialidad == SOFTWARE){
      required_exp += 15; 
    }
    else if(especialidad == HARDWARE){
      required_exp += 20; 
    }
  }
  

  
}

bool Profemon::learnSkill(int slot, Skill skill){
  if(slot >= 0 && slot < 3 && (especialidad == skill.getSpecialty())){
    skills[slot] = skill;
    return true; 
  }
  else{
    return false; 
  }
}

void Profemon::printProfemon(bool print_skills){
  //format references
  //(ProfemonName) [(Specialty)] | lvl (Level) | exp (CurrentExp)/(RequiredExp) | hp (MaxHP)
  //(SkillNameSlot0) [(Uses)] : (description of skill in slot 0)

  string special[] = {"ML", "SOFTWARE" , "HARDWARE"}; 



  cout << player_nombre << " [" << special[especialidad] << "] | lvl " << player_level  << " | exp " << current_exp << "/" << required_exp << " | hp " << max_salud << endl;  

  if(print_skills){
    for(int i = 0; i < 3; i++){
      if(skills[i].getName() != "Undefined"){
        cout << "    " << skills[i].getName() << " [" << skills[i].getTotalUses() << "] : "<< skills[i].getDescription() << endl;  
      }
    }
  }

}