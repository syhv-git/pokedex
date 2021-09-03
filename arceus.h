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
//  FILE:        arceus.h
//
//  DESCRIPTION: Arceus child class of pokemon
//
****************************************************************/

#ifndef ARCEUS_H
#define ARCEUS_H
#include <string>
using namespace std;
#include "Pokemon.h"

class arceus : public Pokemon
{
public:
    arceus();
    virtual ~arceus();
    void printData();
protected:
    string type;
    float height; /* in cm */
};
#endif
