/*****************************************************************
//
//  NAME:        Scott Vore
//
//  CLASS:       ICS 212
//
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        December 10, 2020
//
//  FILE:        Pokemon.h
//
//  DESCRIPTION: Abstract parent class of Pokemon
//
//  Copyright (C) 2021, Scott Vore
//
****************************************************************/

#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std;

class Pokemon
{
public:
    Pokemon();
    virtual ~Pokemon();
    virtual void printData() = 0;
protected:
    string type;
    float height; /* in cm */
};
#endif
