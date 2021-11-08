#pragma once

#include "Vector2D.h"

class ActiveEntity abstract
{
private:
	Vec2 loc;
public:
	virtual void Load();
	virtual void Update();
	virtual void Render();
	virtual void Cleanup();

	//

	//

};