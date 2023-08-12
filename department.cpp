/*
  Evelia Romero Marin
  CS 135 
  Professor Maryash 
  Project 3B: Department classes
  Program contains implements department classes. 
*/

#include "skill.hpp" 
#include "profemon.hpp" 
#include "trainer.hpp"
#include "department.hpp"

#include <iostream> 
#include <vector> 
using namespace std; 

//constuctor function with ML specialty profemons
MLDepartment::MLDepartment(std::vector<Profemon> profemons){
    for(int i = 0; i < profemons.size(); i++){
        if(profemons[i].getSpecialty() == ML){
            Trainer::addProfemon(profemons[i]);
        }
    }
}

//adding ML specialty profemons
bool MLDepartment::addProfemon(Profemon profemon){
    if(profemon.getSpecialty() == ML){
        //return addProfemon(profemon); //side note: addProfemon is bool function
        profedex.push_back(profemon); 
        return true; 
    }
    return false; 
}


//constuctor function with SOFTWARE specialty profemons
SoftwareDepartment:: SoftwareDepartment(std::vector<Profemon> profemons){
    for(int i = 0; i < profemons.size(); i++){
        if(profemons[i].getSpecialty() == SOFTWARE){
            Trainer::addProfemon(profemons[i]);
        }
    }
}

//adding SOFTWARE specialty profemons 
bool SoftwareDepartment::addProfemon(Profemon profemon){
    if(profemon.getSpecialty() == SOFTWARE){
        //return addProfemon(profemon); //side note: addProfemon is bool function
        profedex.push_back(profemon); 
        return true; 
    }
    return false;
}

//constuctor function with HARDWARE specialty profemons
HardwareDepartment::HardwareDepartment(std::vector<Profemon> profemons){
    for(int i = 0; i < profemons.size(); i++){
        if(profemons[i].getSpecialty() == HARDWARE){
            Trainer::addProfemon(profemons[i]);
        }
    }
}

//adding HARDWARE specialty profemons
bool HardwareDepartment::addProfemon(Profemon profemon){
    if(profemon.getSpecialty() == HARDWARE){
        //return addProfemon(profemon); //side note: addProfemon is bool function
        profedex.push_back(profemon); 
        return true; 
    }
    return false;
}





