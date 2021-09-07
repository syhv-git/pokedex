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
//  FILE:        main.cpp
//
//  DESCRIPTION: Main function to create the Pokedex.
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
#include <map>
#include <string>
#include <vector>
using namespace std;
#include "arceus.h"
#include "charizard.h"
#include "mewtwo.h"

void checkPokedex(Pokemon*);

/*****************************************************************
//
//  Function name:  main
//
//  DESCRIPTION:    Utilize vector data structure to create the pokedex
//
//  Parameters:     int x: loop variable
//                  string pm1, pm2, pm3: name of pokemon
//                  Pokemon *pokemon1: pointer to create pokemon arceus
//                          *pokemon2: pointer to create pokemon charizard
//                          *pokemon3: pointer to create pokemon mewtwo
//                  vector vect: vector to hold pokemon
//                  map mymap: map holding pokemon passed from vectors
//
//  Return:         0
//
****************************************************************/
int main(int argc, char* argv[])
{
	int x;
	string pm1, pm2, pm3;
	Pokemon *pokemon1, *pokemon2, *pokemon3;
	vector <Pokemon*> vect;
	map <string, Pokemon*> mymap;

	pm1 = "arceus";
	pm2 = "charizard";
	pm3 = "mewtwo";
	pokemon1 = new arceus;
	pokemon2 = new charizard;
	pokemon3 = new mewtwo;
	vect.push_back(pokemon1);
	vect.push_back(pokemon2);
	vect.push_back(pokemon3);
	mymap[pm1] = vect[0];
	mymap[pm2] = vect[1];
	mymap[pm3] = vect[2];

	for (x = 0; x < 3; x++)
	{
		switch (x)
		{
		case 0:
			cout << "printing map contents" << endl;
			checkPokedex(mymap[pm1]);
			break;
		case 1:
			checkPokedex(mymap[pm2]);
			break;
		case 2:
			checkPokedex(mymap[pm3]);
			break;
		default:
			cout << "Error. Out of bounds. Map size: " << mymap.size() << endl;
			break;
		}
	}
	for (x = 0; x < 3; x++)
	{
		if (x == 0)
		{
			cout << "printing vector contents" << endl;
		}
		checkPokedex(vect[x]);
	}
	delete pokemon1;
	delete pokemon2;
	delete pokemon3;
	return 0;
}

/*****************************************************************
//
//  Function name:  checkPokedex
//
//  DESCRIPTION:    Calls printdata function for Pokemon
//
//  Parameters:     Pokemon* pokemon: the pokemon to print
//
****************************************************************/
void checkPokedex(Pokemon *pokemon)
{
	pokemon->printData();
}
