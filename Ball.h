#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Ball
{
private:
	Vector2f position;

	//retangleShape object
	RectangleShape Ball_shape;

	float X_velocity = .2f;
	float Y_velocity = .2f;

public:
	Ball(float X_start, float Y_start);
	FloatRect Get_position();
	RectangleShape Get_shape();
	float Get_X_velocity();
	void Rebound_sides();
	void Rebound_Bat_or_Top();
	void Hit_bottom();
	void Update();
};
