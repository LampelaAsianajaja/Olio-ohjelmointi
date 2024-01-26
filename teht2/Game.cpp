#include "Game.h"
#include <ctime>
#include <iostream>
#include <cstdlib>

Game::Game(int s)
{
    setMaxnumber(s);
   setRandomNumbers();
}

void Game::setMaxnumber(const int s){
    maxNumber=s;
    std::cout<< "GAME CONSTRUCTOR: Object initialized whit "<<maxNumber<<" as maximum value"<<std::endl;
    //setRandomNumbers();
}
void Game::setRandomNumbers(){
    srand(time(0));
    do {
        randomNumbers = rand() % maxNumber;
    } while (randomNumbers == 0);
}


Game::~Game()
{
    std::cout<< "Game Destructor: object cleared from stack memory"<< std::endl ;
}
void Game::play(){


    while (playerGuess!=randomNumbers){
        std :: cout << "arvaa mika numero" << std::endl;
        std::cin>>playerGuess;
    if (playerGuess==randomNumbers){
    arvaustenMaara+=1;
    }
    else if (playerGuess<randomNumbers){
        std::cout<< "vaarin arvo on suurempi"<<std::endl;
       arvaustenMaara+=1;
    }
    else if (playerGuess>randomNumbers){
        std:: cout <<"vaarin arvo on pienempi"<< std::endl;
        arvaustenMaara+=1;

    }

    }
    printGameResult();

}
void Game::printGameResult() {
    std::cout << "Arvasit oikean. vastaus oli = "<< randomNumbers<< ". arvasit sen "<< arvaustenMaara<< " arvauksella!" <<std::endl;
}






