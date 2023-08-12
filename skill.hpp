
/*
  Evelia Romero Marin
  CS 135 
  Professor Maryash 
  Project 3A: Skill class
  Program constructs a Skill class and creates its associated functions. 
*/

#include <iostream> 
using namespace std; 

#pragma once
#ifndef SKILL_H
#define SKILL_H



class Skill {
private:
    string nombre;
    string des;
    int especialidad; 
    int usos;
public:
    Skill(); //constructor 
    Skill(std::string name, std::string description, int specialty, int uses);   //calling function Skill with its attribute parameters 


    //getter functions 
    std::string getName();
    std::string getDescription();
    int getTotalUses();
    int getSpecialty(); 

    //setter functions 
    void setName(std::string name);
    void setDescription(std::string description);
    void setTotalUses(int uses); 
    bool setSpecialty(int specialty); 
};

#endif