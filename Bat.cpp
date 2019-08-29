
#include "Bat.h"

//constructor call
Bat::Bat(float X_start, float Y_start)
{
	position.x = X_start;
	position.y = Y_start;

	Bat_shape.setSize(sf::Vector2f(50, 5));
	Bat_shape.setPosition(position);
}

FloatRect Bat::Get_position()
{
	return Bat_shape.getGlobalBounds();
}

RectangleShape Bat::Get_shape()
{
	return Bat_shape;
}

void Bat::Move_left()
{
	position.x -= Bat_speed;
}

void Bat::Move_right()
{
	position.x += Bat_speed;
}

void Bat::update()
{
	Bat_shape.setPosition(position);
}