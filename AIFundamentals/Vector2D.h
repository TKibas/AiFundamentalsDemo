#pragma once


class Vec2
{
public:
	float x;
	float y;
public:
	//Constructors/Destructors
	Vec2();
	Vec2(float xVal, float yVal);
	~Vec2();

	//Utility functions
	void SetValues(float xVal, float yVal);

	//Operator overloads
	void operator=(const Vec2& v2);
	Vec2 operator+(Vec2 v2);
	Vec2 operator-(Vec2 v2);
	Vec2 operator*(float scalar);
	Vec2 operator*(int scalar);
	Vec2 operator/(float scalar);
	Vec2 operator/(int scalar);
};
