#include <SFML/Graphics.hpp>
#include <filesystem>
#include <iostream>
#include <string>
#include <sstream>
#include <conio.h> //test

int main()
{	//создаю окно которое может менять размер
	sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "Prj_O_R");
	sf::Style::Resize;

	namespace fs = std::filesystem;
	std::cout << "Working directory: " << fs::current_path() << '\n';

	//подрубаю шрифт
	sf::Font font_arial;
	if (!font_arial.openFromFile("fonts/arial.ttf"))
	{
		return -1;
	}

	sf::Text text_hello(font_arial);
	text_hello.setString("Hallo Hallo!");
	text_hello.setCharacterSize(26);
	//text_hello.setFillColor(sf::Text::Bold | sf::Text::Underlined);

	while (window.isOpen()) 
	{

		while (const auto event = window.pollEvent()) 
		{
			if (event->getIf<sf::Event::Closed>())
				window.close();
		}

		window.clear(sf::Color::Black);
		window.draw(text_hello);
		window.display();

	}	
}
