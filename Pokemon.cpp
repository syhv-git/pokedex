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
//  Copyright (C) 2021, Scott Vore
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.
//  Email: svore@hawaii.edu
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
