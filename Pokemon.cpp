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
//  FILE:        Pokemon.cpp
//
//  DESCRIPTION: pokemon function definitions
//
****************************************************************/

#include <iostream>
#include <string>
using namespace std;
#include "Pokemon.h"

/*****************************************************************
//
//  Function name:  Pokemon
//
//  DESCRIPTION:    Constructor for Pokemon
//
//  Parameters:     string type: protected string storing type of pokemon
//                  float height: protected float storing height of pokemon
//
****************************************************************/
Pokemon::Pokemon()
{
    cout << "Pokemon Constructor" << endl;
    type = "";
    height = 0.0;
}

/*****************************************************************
//
//  Function name:  ~Pokemon
//
//  DESCRIPTION:    Destructor for Pokemon
//
//  Parameters:     string type: protected string storing type of pokemon
//                  float height: protected float storing height of pokemon
//
****************************************************************/
Pokemon::~Pokemon()
{
    cout << "Pokemon Destructor" << endl;
}
