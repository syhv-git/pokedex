homework9: Pokemon.o arceus.o charizard.o mewtwo.o main.o
	g++ -o pokedex Pokemon.o arceus.o charizard.o mewtwo.o main.o

clear:
	rm -f --preserve-root homework9 main.o Pokemon.o arceus.o charizard.o mewtwo.o

Pokemon.o: Pokemon.cpp Pokemon.h
	g++ -ansi -pedantic-errors -Wall -c Pokemon.cpp

arceus.o: arceus.cpp arceus.h Pokemon.h
	g++ -ansi -pedantic-errors -Wall -c arceus.cpp

charizard.o: charizard.cpp charizard.h Pokemon.h
	g++ -ansi -pedantic-errors -Wall -c charizard.cpp

mewtwo.o: mewtwo.cpp mewtwo.h Pokemon.h
	g++ -ansi -pedantic-errors -Wall -c mewtwo.cpp

main.o: main.cpp arceus.h charizard.h mewtwo.h
	g++ -ansi -pedantic-errors -Wall -c main.cpp
