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
//  FILE:        mewtwo.h
//
//  DESCRIPTION: mewtwo child class of pokemon
//
****************************************************************/

#ifndef MEWTWO_H
#define MEWTWO_H
#include <string>
using namespace std;
#include "Pokemon.h"

class mewtwo : public Pokemon
{
public:
    mewtwo();
    virtual ~mewtwo();
    void printData();
protected:
    string type;
    float height; /* in cm */
};
#endif
