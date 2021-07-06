#ifndef MAIN_VIEW_HPP
#define MAIN_VIEW_HPP

#include <gui_generated/main_screen/MainViewBase.hpp>
#include <gui/main_screen/MainPresenter.hpp>


class MainView : public MainViewBase
{
public:
    MainView();
    virtual ~MainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void increaseValue();
    void decreaseValue();

    void setCount(uint8_t countValue);
    void setLimitEffects(bool belowUpper, bool aboveLower);
    uint8_t count = 0;
protected:

private:

};

#endif // MAIN_VIEW_HPP
