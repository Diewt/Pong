
#include "Ball.h"

//constructor
Ball::Ball(float X_start, float Y_start)
{
	position.x = X_start;
	position.y = Y_start;

	Ball_shape.setSize(sf::Vector2f(10, 10));
	Ball_shape.setPosition(position);
}

FloatRect Ball::Get_position()
{
	return Ball_shape.getGlobalBounds();
}

RectangleShape Ball::Get_shape()
{
	return Ball_shape;
}

float Ball::Get_X_velocity()
{
	return X_velocity;
}

void Ball::Rebound_sides()
{
	X_velocity = -X_velocity;
}
void Ball::Rebound_Bat_or_Top()
{
	position.y -= (Y_velocity * 30);
	Y_velocity = -Y_velocity;
}

void Ball::Hit_bottom()
{
	position.y = 1;
	position.x = 500;
}

void Ball::Update()
{
	//update ball position variables
	position.y += Y_velocity;
	position.x += X_velocity;

	//Moving ball and the bat
	Ball_shape.setPosition(position);
}