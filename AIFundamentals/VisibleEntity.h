#pragma once

#include "ActiveEntity.h"
#include <SDL.h>

class VisibleEntity : ActiveEntity
{
private:
	SDL_Texture* sprite;


public:
	virtual void Load();
	virtual void Update();
	virtual void Render();
	virtual void Cleanup();
};