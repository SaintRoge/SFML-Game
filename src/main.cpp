#include <SFML/Graphics.hpp>
#include "../headers/game.hpp"

using namespace sf;

int main(int argc, char const *argv[]) {
  RenderWindow window(VideoMode(1200, 800), "SFML-Game", Style::Close | Style::Resize);
  Game *game = new Game(&window);
  Event event;
  while (window.isOpen()) {
    while (window.pollEvent(event)) {
      if (event.type == Event::Closed) {
        window.close();
      } else if (event.type == Event::Resized) {
        FloatRect visibleArea(0, 0, event.size.width, event.size.height);
        window.setView(View(visibleArea));
      }
    }
    window.clear();
    window.display();
  }
}
