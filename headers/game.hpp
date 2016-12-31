#include <SFML/Graphics.hpp>
#include "board.hpp"
#include <iostream>

class Game {
public:
  Game(sf::RenderWindow *window);
  ~Game();
private:
  Board *m_board;
  
  sf::RenderWindow *m_window;
};
