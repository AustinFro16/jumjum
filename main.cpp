#include <iostream>

char board[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

void printBoard()
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {

    std::cout << board[i][j];
    }
  }

}

int main(){
  int turn = 0;
  bool gameOver = false;

std::cout << "WELCOME TO GHOULS AND BALLERINAS" << std::endl;

while(gameOver == false)
  {
    printBoard();
    if(turn == 0)
    {
      std::cout << "GHOUL'S TURN" << std::endl;
    }
    else
    {
      std::cout << "BALLERINA'S TURN" << std::endl;
    }


    turn++;
    turn %= 2;


  }
}
