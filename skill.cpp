/*
  Evelia Romero Marin
  CS 135 
  Professor Maryash 
  Project 3A: Skill class
  Program contains a skill class and implements its associated functions. 
*/

#include <iostream> 
using namespace std; 

#include "skill.hpp" 

Skill::Skill(){
    nombre = "Undefined"; 
    des = "Undefined"; 
    especialidad = -1; 
    usos = -1;
}

Skill::Skill(std::string name, std::string description, int specialty, int uses){
    nombre = name; 
    des = description; 
    especialidad = specialty; 
    usos = uses; 
}

//implementation of the getter functions 
string Skill::getName(){ //gets name 
    return nombre; 
}

string Skill::getDescription(){ //gets description
    return des; 
}

int Skill::getSpecialty(){ //get specialty 
    return especialidad; 
}


int Skill::getTotalUses(){
    return usos; 
}

void Skill::setName(std::string name){
    nombre = name; 
}

void Skill::setDescription(std::string description){
    des = description; 
}

void Skill::setTotalUses(int uses){
    usos = uses;
}


bool Skill::setSpecialty(int specialty){
   if(especialidad >= 0 && especialidad < 3){
        especialidad = specialty; 
        return true;
    }
    return false; 
}


