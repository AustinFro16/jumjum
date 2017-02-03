#ifndef GAME_H
#define GAME_H

class Game
{
public:
char board[3][3];

 Game()
 {
   for(int i=0; i<3; i++)
   {
     for(int j=0; j<3; j++)
     {
       board[j][i]= ' ';

     }
   }
 }





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

bool makeMove(int turn, int rowIn, int colIn)
{
  if(rowIn<0 || rowIn>2 || colIn<0 || colIn>2)
  {
    std::cout << "INVALID MOVE." << std::endl;
    return false;
  }
  else if(board[rowIn][colIn] != ' ')
  {
    std::cout << "MOVE TAKEN." << std::endl;
    return false;
  }
  else
  {
    if(turn == 0)
    {
      board[colIn][rowIn] = 'G';
    }
    else
    {
      board[colIn][rowIn] = 'B';
    }
    return true;
  }
}
};


#endif
