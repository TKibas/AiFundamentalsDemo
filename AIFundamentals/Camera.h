#pragma once

#include "ActiveEntity.h"
#include "SDL.h"

class Camera : public ActiveEntity
{
private:

public:
	void Load();
	void Update();
	void Controller(SDL_Event& inputEvent);
	void Render();
	void Cleanup();
};