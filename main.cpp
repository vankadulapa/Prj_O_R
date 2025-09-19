#include <SFML/Graphics.hpp>
#include <filesystem>
#include <iostream>
#include <conio.h> //test

int main()
{
	sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "Prj_O_R");
	sf::Style::Resize;


	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
			if (event->getIf<sf::Event::Closed>())
				window.close();
		}
	}

	
}
