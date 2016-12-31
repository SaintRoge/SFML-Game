#include <SFML/Graphics.hpp>
#include <iostream>
#include "../headers/game.hpp"

using namespace sf;

int main(int argc, char const *argv[]) {
  RenderWindow window(VideoMode(1200, 800), "SFML-Game", Style::Close | Style::Resize);
  Game *game;
  Event event;
  Clock returnClock;
  returnClock.restart();
  while (window.isOpen()) {
    while (window.pollEvent(event)) {
      if (event.type == Event::Closed) {
        window.close();
      } else if (event.type == Event::Resized) {
        FloatRect visibleArea(0, 0, event.size.width, event.size.height);
        window.setView(View(visibleArea));
      }
    }

    if (Keyboard::isKeyPressed(Keyboard::Return) && returnClock.getElapsedTime() >= seconds(1.f)) {
      game = new Game(&window);
      returnClock.restart();
    }
    
    window.clear();
    window.display();
  }
}
