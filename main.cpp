#include <iostream>



char board[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

void printBoard()
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
    std::cout << board[i][j];
      if(j < 2){
    std::cout << "||";
      }
    }
    std::cout << std::endl;
    if(i < 2){
      std::cout << "=======" << std::endl;

    }

  }

}

void makeMove(int turn, int rowIn, int colIn)
{
  if(turn == 0)
  {
    board[colIn][rowIn] = 'G';
  }
  else
  {
    board[colIn][rowIn] = 'B';
  }

}

int main(){

  Game myGame;
  int turn = 0;
  bool gameOver = false;
  int colIn;
  int rowIn;





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

    std::cout << "PICK YOUR COLUMN";
    std::cin >> rowIn;
    std::cout << "PICK YOUR ROW";
    std::cin >> colIn;
    if(turn == 0)
    {
      board[colIn][rowIn] = 'G';
    }
    else
    {
      board[colIn][rowIn] = 'B';
    }

    turn++;
    turn %= 2;



  }
}
