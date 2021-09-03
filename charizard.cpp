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
//  FILE:        charizard.cpp
//
//  DESCRIPTION: charizard function definitions
//
****************************************************************/

#include <iostream>
#include <string>
using namespace std;
#include "Pokemon.h"
#include "charizard.h"

/*****************************************************************
//
//  Function name:  charizard
//
//  DESCRIPTION:    Constructor for charizard
//
//  Parameters:     Pokemon *this: pointer to charizard pokemon
//                  string type: stores type of charizard
//                  float height: stores height of charizard
//
****************************************************************/
charizard::charizard()
{
    cout << "Charizard Constructor" << endl;
    this->type = "Fire;Flying";
    this->height = 170.18;
}

/*****************************************************************
//
//  Function name:  ~charizard
//
//  DESCRIPTION:    Destructor for charizard
//
//  Parameters:     Pokemon *this: pointer to charizard pokemon
//
****************************************************************/
charizard::~charizard()
{
    cout << "Charizard Destructor" << endl;
}

/*****************************************************************
//
//  Function name:  printData
//
//  DESCRIPTION:    Prints data of charizard
//
//  Parameters:     Pokemon *this: pointer to charizard pokemon
//                  string type: stores type of charizard
//                  float height: stores height of charizard
//
****************************************************************/
void charizard::printData()
{
    cout << "Pokemon: Charizard\nType: " << this->type << endl;
    cout << "Height: " << this->height << endl;
}
