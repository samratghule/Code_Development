#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "windows.h"
#include <gui/main_screen/MainView.hpp>
extern int flag;
extern uint8_t mycount[2];
Model::Model() : modelListener(0)
{
}

void Model::tick()
{

	if (flag)
	{

	modelListener->setnewval();
	Sleep(1000);
	}
}
