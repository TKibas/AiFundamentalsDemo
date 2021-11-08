#include "Renderer.h"


void RenderEntities(std::vector<VisibleEntity>& entityList)
{
	for (VisibleEntity entity : entityList)
	{
		entity.Render();
	}
}  