#ifndef ENDSCREEN_HPP_INCLUDED
#define ENDSCREEN_HPP_INCLUDED
#include "Widgets.hpp"
#include "graphics.hpp"

using namespace genv;

class Endscreen : public Widget
{
    protected:

    public:
        Endscreen(int, int, int, int);
        virtual void handle(genv::event ev);
        virtual void draw();
        virtual void drawgreen();
        virtual void drawblue();
        virtual void drawdraw();


};

#endif // ENDSCREEN_HPP_INCLUDED
