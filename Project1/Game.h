/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	
	void setupFontAndText();
	void setupSprite();
	void moveTarget();
	void animateTarget();

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Texture m_backgroundTexture; // Texture for the background of the game
	sf::Sprite m_backgroundSprite; // Sprite for the background of the game
	sf::Texture m_wallTexture; // Texture for the wall of the game
	sf::Sprite m_wallSprite; // Sprite for the wall of the game
	bool m_exitGame; // control exiting game
	sf::RectangleShape m_wall; // box for the wall
	sf::RectangleShape m_target; // box of the target to be fired at
	sf::Vector2f m_targetLocation; // area of the target
	sf::Vector2f m_targetVelocity; // velocity of the moving target

	sf::Texture m_goombaTexture; // Texture for the enemy
	sf::Sprite m_goombaSprite;
	int m_goombaFrame{ -1 };
	const int GOOMBA_FRAMES = 20;
	float m_goombaFrameCounter = 0.0f;
	float m_goombaFrameIncrement = 0.3f;
	bool m_graphics{ false }; // Are we in graphics mode

};

#endif // !GAME_HPP

