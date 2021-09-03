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
//  FILE:        charizard.h
//
//  DESCRIPTION: charizard child class of pokemon
//
****************************************************************/

#ifndef CHARIZARD_H
#define CHARIZARD_H
#include <string>
using namespace std;
#include "Pokemon.h"

class charizard : public Pokemon
{
public:
    charizard();
    virtual ~charizard();
    void printData();
protected:
    string type;
    float height; /* in cm */
};
#endif
