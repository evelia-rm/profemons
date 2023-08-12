/*
  Evelia Romero Marin
  CS 135 
  Professor Maryash 
  Project 3A: Profemon class
  Program constructs a Profemon class and creates its associated functions. 
*/


#include <iostream> 
using namespace std; 

#include "skill.hpp" 

#pragma once
#ifndef PROFEMON_H
#define PROFEMONL_H


enum Specialty{ML, SOFTWARE, HARDWARE}; 
class Profemon {
private:
    string player_nombre; 
    int player_level; 
    int required_exp; 
    int current_exp; 
    int max_salud; 
    Specialty especialidad; 
    Skill skills[3]; 
public:
    Profemon();  //constructor
    Profemon(std::string name, double max_health, Specialty specialty); //calling function Profemon and its attribute parameters 

    //getter functions 
    std::string getName();
    Specialty getSpecialty();
    int getLevel();
    double getMaxHealth();


    //setter functions
    void setName(std::string name);
    void levelUp(int exp);
    bool learnSkill(int slot, Skill skill);
    void printProfemon(bool print_skills);
    
};


#endif