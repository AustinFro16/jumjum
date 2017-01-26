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
    std::cout << std::endl;

  }

}

int main(){


  int turn = 0;
  bool gameOver = false;
  int rowIn;
  int colIn;





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

    std::cout << "PICK YOUR ROW";
    std::cin >> rowIn;
    std::cout << "PICK YOUR COLUMN";
    std::cin >> colIn;
    if(turn == 0)
    {
      board[rowIn][colIn] = "4";
    }
    else
    {
      board[rowIn][colIn] = "1";
    }

    turn++;
    turn %= 2;


  }
}
