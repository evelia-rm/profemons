/*
  Evelia Romero Marin
  CS 135 
  Professor Maryash 
  Project 3B: Trainer class
  Program contains a Trainer class and creates its associated functions. 
*/


#include <iostream> 
#include <vector>
using namespace std; 

#include "skill.hpp" 
#include "profemon.hpp"

#pragma once
#ifndef TRAINER_H
#define TRAINER_H

class Trainer{
protected:
    vector<Profemon> profedex; 
    Profemon equipo[3]; 
    Profemon *selected; 

public: 
    Trainer(); //constructor 
    Trainer(std::vector <Profemon> profemons); //calling function trainer and its attribute parameters 


    bool contains (std::string name); 
    bool addProfemon(Profemon Profemon); 
    bool removeProfemon(std::string name); 
    void setTeamMember(int slot, std::string name);
    bool chooseProfemon(int slot);
    Profemon getCurrent();
    void printProfedex();
    void printTeam();

};

#endif