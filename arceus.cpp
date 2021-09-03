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
//  FILE:        arceus.cpp
//
//  DESCRIPTION: Arceus function definitions
//
****************************************************************/

#include <iostream>
#include <string>
using namespace std;
#include "Pokemon.h"
#include "arceus.h"

/*****************************************************************
//
//  Function name:  arceus
//
//  DESCRIPTION:    Constructor for arceus
//
//  Parameters:     Pokemon *this: pointer to Arceus pokemon
//                  string type: stores type of arceus
//                  float height: stores height of arceus
//
****************************************************************/
arceus::arceus()
{
    cout << "Arceus Constructor" << endl;
    this->type = "Normal";
    this->height = 320.04;
}

/*****************************************************************
//
//  Function name:  ~arceus
//
//  DESCRIPTION:    Destructor for arceus
//
//  Parameters:     Pokemon *this: pointer to Arceus pokemon
//
****************************************************************/
arceus::~arceus()
{
    cout << "Arceus Destructor" << endl;
}

/*****************************************************************
//
//  Function name:  printData
//
//  DESCRIPTION:    Prints data of arceus
//
//  Parameters:     Pokemon *this: pointer to Arceus pokemon
//                  string type: stores type of arceus
//                  float height: stores height of arceus
//
****************************************************************/
void arceus::printData()
{
    cout << "Pokemon: Arceus\nType: " << this->type << endl;
    cout << "Height: " << this->height << endl;
}
