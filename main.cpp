#include <iostream>
#include "game.hpp"


int main(){

  Game myGame;
  int turn = 0;
  bool gameOver = false;
  int colIn;
  int rowIn;
  bool turnOver = false;
  std::cout << "OPENING G&B.EXE" << std::endl;
  std::cout << "START." << std::endl;
  std::cout << "." << std::endl;
  std::cout << "." << std::endl;
  std::cout << "." << std::endl;
  std::cout << "LOADING." << std::endl;
  std::cout << "." << std::endl;
  std::cout << "." << std::endl;
  std::cout << "." << std::endl;
std::cout << "WELCOME TO GHOULS AND BALLERINAS" << std::endl;

while(gameOver == false)
  {
    myGame.printBoard();
    if(turn == 0)
    {
      std::cout << "GHOUL'S TURN" << std::endl;
    }
    else
    {
      std::cout << "BALLERINA'S TURN" << std::endl;
    }
    while(turnOver == false)
    {
      std::cout << "PICK YOUR COLUMN";
      std::cin >> rowIn;
      std::cout << "PICK YOUR ROW";
      std::cin >> colIn;
      turnOver = myGame.makeMove(turn, rowIn, colIn);
    }

    turnOver = false;
    turn++;
    turn %= 2;



  }
}
