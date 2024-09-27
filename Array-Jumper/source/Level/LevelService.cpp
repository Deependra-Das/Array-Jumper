#include "../../header/Level/LevelService.h"
#include "../../header/Level/LevelController.h"
#include "../../header/Level/LevelModel.h"

namespace Level
{

	LevelService::LevelService()
	{
		level_controller = new LevelController();
	}

	LevelService::~LevelService()
	{
		destroy();
	}

	void LevelService::initialize()
	{
		level_controller->initialize();
	}

	void LevelService::update()
	{
		level_controller->update();
	}

	void LevelService::render()
	{
		level_controller->render();
	}

	void LevelService::destroy()
	{
		delete(level_controller);
	}

	BoxDimensions LevelService::getBoxDimensions()
	{
		return level_controller->getBoxDimensions();
	}

	BlockType LevelService::getCurrentBoxValue(int currentPosition)
	{
		return level_controller->getCurrentBoxValue(currentPosition);
	}
}