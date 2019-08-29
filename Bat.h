#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bat
{
private:
	Vector2f position;

	//rectangular object
	RectangleShape Bat_shape;

	float Bat_speed = .3f;

public:
	Bat(float X_start, float Y_start);
	FloatRect Get_position();
	RectangleShape Get_shape();
	void Move_left();
	void Move_right();
	void update();
};