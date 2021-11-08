#pragma once

#include "Camera.h"
#include <vector>
#include "VisibleEntity.h"

class Renderer
{
private:
	Camera* p_mainCamera;
public:
	void RenderEntities(std::vector<VisibleEntity>& entityList);
};