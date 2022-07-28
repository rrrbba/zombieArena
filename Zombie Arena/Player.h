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
};