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
//  FILE:        mewtwo.cpp
//
//  DESCRIPTION: mewtwo function definitions
//
****************************************************************/

#include <iostream>
#include <string>
using namespace std;
#include "Pokemon.h"
#include "mewtwo.h"

/*****************************************************************
//
//  Function name:  mewtwo
//
//  DESCRIPTION:    Constructor for mewtwo
//
//  Parameters:     Pokemon *this: pointer to mewtwo pokemon
//                  string type: stores type of mewtwo
//                  float height: stores height of mewtwo
//
****************************************************************/
mewtwo::mewtwo()
{
    cout << "Mewtwo Constructor" << endl;
    this->type = "Psychic";
    this->height = 200.66;
}

/*****************************************************************
//
//  Function name:  ~mewtwo
//
//  DESCRIPTION:    Destructor for mewtwo
//
//  Parameters:     Pokemon *this: pointer to mewtwo pokemon
//
****************************************************************/
mewtwo::~mewtwo()
{
    cout << "Mewtwo Destructor" << endl;
}

/*****************************************************************
//
//  Function name:  printData
//
//  DESCRIPTION:    Prints data of mewtwo
//
//  Parameters:     Pokemon *this: pointer to mewtwo pokemon
//                  string type: stores type of mewtwo
//                  float height: stores height of mewtwo
//
****************************************************************/
void mewtwo::printData()
{
    cout << "Pokemon: Mewtwo\nType: " << this->type << endl;
    cout << "Height: " << this->height << endl;
}
