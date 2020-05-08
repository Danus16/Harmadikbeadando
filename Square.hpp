#ifndef SQUARE_HPP_INCLUDED
#define SQUARE_HPP_INCLUDED
#include "Widgets.hpp"
#include "graphics.hpp"

using namespace genv;

class Square : public Widget
{
    private:

    public:
        Square(int x, int y, int sx, int sy);
        virtual void handle(genv::event ev);
        virtual void draw();


};

#endif // SQUARE_HPP_INCLUDED
