#include "../headers/game.hpp"

Game::Game(sf::RenderWindow *window) {
  m_window = window;
  m_board = new Board();
  std::cout << "Board created" << std::endl;
}

Game::~Game() {

}
