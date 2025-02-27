#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Player {

private:
	const float START_SPEED = 200;
	const float START_HEALTH = 100;

	//Where is the player
	Vector2f m_Position;

	//Sprite
	Sprite m_Sprite;

	//Texture
	Texture m_Texture;

	//Screen resolution
	Vector2f m_Resolution;

	//Size of current arena
	IntRect m_Arena;

	//How big is each tile of the arena
	int m_TileSize;

	//What direction(s) is the player currently moving in
	bool m_UpPressed;
	bool m_DownPressed;
	bool m_LeftPressed;
	bool m_RightPressed;

	//How much health has the player got?
	int m_Health;
	
	//What is the maximum health the player can have?
	int m_MaxHealth;

	//When was the player last hit
	Time m_LastHit;

	//Speed in pixels per second
	float m_Speed;

	//Public functions
public:

	Player();

	//Prepare the object ready for use, putting it in its starting location
	void spawn(IntRect arena, Vector2f resolution, int tileSize);

	//Call at the end of every game, useful when once the ability to level up
	void resetPlayerStats();

	//Handle player getting hit by zombie
	bool hit(Time timeHit);

	//How long ago was the player hit (used when detecting a collision)
	Time getLastHitTime();

	//Where is the player
	FloatRect getPosition();

	//Where is the center of the player (contains just the x and y locations at the very center of the player graphic)
	Vector2f getCenter();

	//What angle is the player facing
	float getRotation();

	//Send a copy of the sprite to the main function
	Sprite getSprite();

	//Move the player
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();

	//Stop the player moving in a specific direction
	void stopLeft();
	void stopRight();
	void stopUp();
	void stopDown();

	//Call update function once every frame
	void update(float elapsedTime, Vector2i mousePosition);

	//Give player speed boost
	void upgradeSpeed();

	//Give the player some health
	void upgradeHealth();

	//Increase the maximum amount of health the player can have
	void increaseHealthLevel(int amount);

	//How much health does the player have
	int getHealth();
};