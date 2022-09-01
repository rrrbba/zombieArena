#include "Player.h"


Player::Player() {

	m_Speed = START_SPEED;
	m_Health = START_HEALTH;
	m_MaxHealth = START_HEALTH;

	//Associate a texture wiht the sprite
	m_Texture.loadFromFile("graphics/player.png");
	m_Sprite.setTexture(m_Texture);

	//Set the origin of the sprite to the center for smooth rotation
	m_Sprite.setOrigin(25, 25);


}

//Spawn function - only one instance of Player class, however will need to spawn it into the current level for each wave
void Player::spawn(IntRect arena, Vector2f resolution, int tileSize) {
	//Place player in the middle of the arena
	m_Position.x = arena.width / 2;
	m_Position.y = arena.height / 2;

	//Copy details of the arena to player's m_Arena
	m_Arena.left = arena.left;
	m_Arena.width = arena.width;
	m_Arena.top = arena.top;
	m_Arena.height = arena.height;

	//How big the tiles are in this arena
	m_TileSize = tileSize;

	//Store the resolution for future use
	m_Resolution.x = resolution.x;
	m_Resolution.y = resolution.y;

}