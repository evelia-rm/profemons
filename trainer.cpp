/*
  Evelia Romero Marin
  CS 135 
  Professor Maryash 
  Project 3B: Trainer class
  Program contains a Trainer class and implements its associated functions. 
*/


#include <iostream> 
#include <vector> 

using namespace std; 

#include "skill.hpp" 
#include "profemon.hpp" 
#include "trainer.hpp"



Trainer::Trainer(){
    selected = nullptr; 
}


Trainer::Trainer(std::vector <Profemon> profemons){
    for(int i = 0; i < profemons.size(); i++){
        if(i < 3){
            equipo[i] = profemons[i]; 
        }
        else{
            profedex.push_back(profemons[i]);
        }

    }
    selected = &equipo[0]; 
} 


bool Trainer::contains(std::string name){ 
    for(int i = 0; i < profedex.size(); i++){
        if(profedex[i].getName() == name){
            return true; 
        }
    }

    for(int x = 0; x < 3; x++){
        if(equipo[x].getName() == name){
            return true;
        }
    }
    return false; 
}


bool Trainer::addProfemon(Profemon profemon){
    if(contains(profemon.getName())){ //checking to make sure profemon doesn't already exist 
        return false; 
    }
    else{
        for(int i = 0; i < 3; i++){
            if(equipo[i].getName() == "Undefined"){
                equipo[i] = profemon; 
                return true;
            }
        }
        profedex.push_back(profemon); 
        return true; 
    }
}

bool Trainer::removeProfemon(std::string name){
    for(int x = 0; x < 3; x++){
        if(equipo[x].getName() == name){
            equipo[x] = Profemon(); 
            return true;
        }
    }
    for(int i = 0; i < profedex.size(); i++){
        if(name == profedex[i].getName()){
            profedex.erase(profedex.begin() + i); 
            return true; 
        }
    }
    return false; 
}

void Trainer::setTeamMember(int slot,std::string name){
    if(slot < 3){
        for(int i = 0; i < profedex.size(); i++){
            if(profedex[i].getName() == name){
                if(equipo[slot].getName() == "Undefined"){
                    equipo[slot] = profedex[i]; 
                    profedex.erase(profedex.begin() + i);
                }
                else{
                    Profemon temp = equipo[slot]; 
                    equipo[slot] = profedex[i]; 
                    profedex[i] = temp; 
                }
                break; 
            }
        }
    }
}

bool Trainer::chooseProfemon(int slot){
    for(int i = 0; i < 3; i++){
        if(slot < 3 && equipo[slot].getName() != "Undefined"){
            selected = &equipo[slot];
            return true; 
        }
        return false;   
    }
}

Profemon Trainer::getCurrent(){
    if(selected != nullptr){
        return *selected; 
    }
}


void Trainer::printProfedex(){ 
    for(int i = 0; i < profedex.size(); i++){
        profedex[i].printProfemon(false); 
        cout << endl; 
    }

}


void Trainer::printTeam(){
    for(int i = 0; i < 3; i++){
        if(equipo[i].getName() != "Undefined"){
            equipo[i].printProfemon(true); 
            cout << endl; 
        }
    }
}

