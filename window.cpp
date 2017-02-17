#include <iostream>
#include <SFML/Graphics.hpp>
#include "game.hpp"

#define WIDE 600
#define HIGH 600
#define POS1 38
#define POS2 248
#define POS3 438


int mouseX, mouseY, moveX, moveY;

int turn = 0;

  int main()
  {
    Game myGame;
    sf::RenderWindow window(sf::VideoMode (WIDE, HIGH), "SFML Hello World");

sf::Texture boardTexture;
if(!boardTexture.loadFromFile("board.png"))
{
  std::cout << "ERROR LOADING TEXTURE." << std::endl;
}
sf::Sprite boardSprite;
boardSprite.setTexture(boardTexture);
boardSprite.setPosition(12,12);

sf::Texture xandoTexture;
if(!xandoTexture.loadFromFile("xando.png"))
{
  std::cout << "ERROR LOADING TEXTURE." << std::endl;
}
sf::Sprite xSprite;
xSprite.setTexture(xandoTexture);
xSprite.setTextureRect(sf::IntRect(0,0,160,160));

sf::Sprite oSprite;
oSprite.setTexture(xandoTexture);
oSprite.setTextureRect(sf::IntRect(0,160,160,160));


    while (window.isOpen())
    {
      sf::Event event;
      while(window.pollEvent(event))
      {
        if(event.type == sf::Event::Closed)
        {
          window.close();
        }
        if(event.type == sf::Event::MouseButtonPressed)
        {
          if(event.mouseButton.button == sf::Mouse::Left)
        {
            mouseX = event.mouseButton.x;
            mouseY = event.mouseButton.y;
            if(POS1 <= mouseX && mouseX <= POS1+160)
            {
              moveX = 0;
            }
            if(POS2 <= mouseX && mouseX <= POS2+160)
            {
              moveX = 1;
            }
            if(POS3 <= mouseX && mouseX <= POS3+160)
            {
              moveX = 2;
            }
            if(POS1 <= mouseY && mouseY <= POS1+160)
            {
              moveY = 0;
            }
            if(POS2 <= mouseY && mouseY <= POS2+160)
            {
              moveY = 1;
            }
            if(POS3 <= mouseY && mouseY <= POS3+160)
            {
              moveY = 2;
            }
            if (myGame.makeMove(turn, moveX, moveY)== true)
            {
              turn++;
              turn%=2;
            }
            myGame.printBoard();
        }

        }

      }

      window.clear(sf::Color::White);

      for(int i=0; i<3; i++)
      {
        for(int j=0; j<3; j++)
        {
          char space = myGame.getspace(i,j);
          int xPos, yPos;
          if(space != ' ')
          {
            if(i == 0)
            {
              xPos = POS1;
            }
            else if(i == 1)
            {
              xPos = POS2;
            }
            else if(i == 2)
            {
              xPos = POS3;
            }
            if(j == 0)
            {
              yPos = POS1;
            }
            else if(j == 1)
            {
              yPos = POS2;
            }
            else if(j == 2)
            {
              yPos = POS3;
            }
          }
          if(space == 'X')
          {
            xSprite.setPosition(yPos, xPos);
            window.draw(xSprite);
          }
          else if(space == 'O')
          {
            oSprite.setPosition(yPos, xPos);
            window.draw(oSprite);
          }
        }
      }
      if(myGame.testForWin())
      
      window.draw(boardSprite);
      window.display();
    }
  }
