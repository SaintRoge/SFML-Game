#include <SFML/Graphics.hpp>

class Game {
public:
  Game(sf::RenderWindow *window);
  ~Game();
private:
  sf::RenderWindow *m_window;
};
