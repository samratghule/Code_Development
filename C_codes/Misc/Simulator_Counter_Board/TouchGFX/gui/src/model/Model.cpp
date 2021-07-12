#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
//#include "app_touchgfx.h"

#include "windows.h"

//#include "stm32h7xx_hal.h"
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
		/*
#ifdef SIMULATOR
		Sleep(1000);
#endif
#ifdef HARDWARE
		HAL_Delay(1000);
#endif
*/
	}
}
