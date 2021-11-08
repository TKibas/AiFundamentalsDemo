#include "Vector2D.h"

Vec2::Vec2()
{
	x = 0;
	y = 0;
}

Vec2::Vec2(float xVal, float yVal)
{
	x = xVal;
	y = yVal;
}

Vec2::~Vec2()
{

}

void Vec2::SetValues(float xVal, float yVal)
{
	x = xVal;
	y = yVal;
}

void Vec2::operator=(const Vec2& v2)
{
	x = v2.x;
	y = v2.y;
}

Vec2 Vec2::operator+(Vec2 v2)
{
	Vec2 temp(x + v2.x, y + v2.y);
	return temp;
}
Vec2 Vec2::operator- (Vec2 v2)
{
	Vec2 temp(x - v2.x, y - v2.y);
	return temp;
}
Vec2 Vec2::operator*(float scalar)
{
	Vec2 temp(x * scalar, y * scalar);
	return temp;
}
Vec2 Vec2::operator*(int scalar)
{
	Vec2 temp(x * scalar, y * scalar);
	return temp;
}
Vec2 Vec2::operator/(float scalar)
{
	Vec2 temp(x / scalar, y / scalar);
	return temp;
}
Vec2 Vec2::operator/(int scalar)
{
	Vec2 temp(x / scalar, y / scalar);
	return temp;
}