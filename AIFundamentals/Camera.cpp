#include "Camera.h"

void Camera::Load()
{

}
void Camera::Update()
{

}
void Camera::Controller(SDL_Event& inputEvent)
{
	if (inputEvent.key.keysym.sym == SDLK_w)
	{
		this->loc.y -= 1;
	}
	else if (inputEvent.key.keysym.sym == SDLK_s)
	{
		this->loc.y += 1;
	}
	if (inputEvent.key.keysym.sym == SDLK_a)
	{
		this->loc.x -= 1;
	}
	else if (inputEvent.key.keysym.sym == SDLK_d)
	{
		this->loc.x += 1;
	}
}
void Camera::Render()
{

}
void Camera::Cleanup()
{

}