#pragma once

#include "Vector2D.h"

class ActiveEntity abstract
{
protected:
	Vec2 loc;
public:
	virtual void Load() = 0;
	virtual void Update()= 0;
	virtual void Render() = 0;
	virtual void Cleanup() = 0;

	//

	//

};