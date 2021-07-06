#include <gui/main_screen/MainView.hpp>
#include "BitmapDatabase.hpp"
#include "windows.h"
uint8_t mycount[2]={0};

MainView::MainView()
{
    // Support of larger displays for this example
    // is handled by showing a black box in the
    // unused part of the display.
    if (HAL::DISPLAY_WIDTH > backgroundImage.getWidth() ||
            HAL::DISPLAY_HEIGHT > backgroundImage.getHeight())
    {
        backgroundBox.setVisible(true);
    }
}

void MainView::setupScreen()
{
    setCount(0);
}

void MainView::tearDownScreen()
{
}

void MainView::increaseValue()
{


    if (mycount[0] <= mycount[1])
    {

        setCount(mycount[0]);

        if (mycount[0]== mycount[1])
        {
        	setCount(mycount[1]);
            setLimitEffects(false, true);
        }
        else if (mycount[0] == 0)
        {
            setLimitEffects(true, true);
        }
        mycount[0]++;
    }



}

void MainView::decreaseValue()
{
    if (count > 0)
    {
        count--;
        setCount(count);

        if (0 == count)
        {
            setLimitEffects(true, false);
        }
        else if (41 == count)
        {
            setLimitEffects(true, true);
        }
    }
}

void MainView::setCount(uint8_t countValue)
{
    Unicode::snprintf(countTxtBuffer, 3, "%d", countValue);
    // Invalidate text area, which will result in it being redrawn in next tick.
    countTxt.invalidate();
}

void MainView::setLimitEffects(bool belowUpper, bool aboveLower)
{
    buttonUp.setTouchable(belowUpper);
    buttonDown.setTouchable(aboveLower);

    if (belowUpper)
    {
        buttonUp.setBitmaps(Bitmap(BITMAP_UP_BTN_ID), Bitmap(BITMAP_UP_BTN_PRESSED_ID));
    }
    else
    {
        buttonUp.setBitmaps(Bitmap(BITMAP_UP_BTN_DISABLED_ID), Bitmap(BITMAP_UP_BTN_DISABLED_ID));
    }

    if (aboveLower)
    {
        buttonDown.setBitmaps(Bitmap(BITMAP_DOWN_BTN_ID), Bitmap(BITMAP_DOWN_BTN_PRESSED_ID));
    }
    else
    {
        buttonDown.setBitmaps(Bitmap(BITMAP_DOWN_BTN_DISABLED_ID), Bitmap(BITMAP_DOWN_BTN_DISABLED_ID));
    }

    buttonUp.invalidate();
    buttonDown.invalidate();
}
