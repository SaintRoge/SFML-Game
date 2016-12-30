#include <SFML/Graphics.hpp>

using namespace sf;

int main(int argc, char const *argv[]) {
  RenderWindow window(VideoMode(1200, 800), "Tank", Style::Close | Style::Resize);
  while (window.isOpen()) {
    Event event;
    while (window.pollEvent(event)) {
      if (event.type == Event::Closed) {
	window.close();
      }
      if (event.type == Event::Resized) {
	FloatRect visibleArea(0, 0, event.size.width, event.size.height);
	window.setView(View(visibleArea));
      }
    }
  }
}
