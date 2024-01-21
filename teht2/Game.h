#ifndef GAME_H
#define GAME_H


class Game
{
public:
    Game(int s);
    void setMaxnumber( int s);
    void setRandomNumbers();
    ~Game();
    void play();



private:

    int maxNumber;
    int playerGuess;
    int randomNumbers;
    int arvaustenMaara;

    void printGameResult();

};





#endif // GAME_H
