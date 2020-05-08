#include "Square.hpp"
#include "Widgets.hpp"
#include "graphics.hpp"

using namespace genv;

Square::Square(int x, int y, int sx, int sy): Widget(x,y,sx,sy)
{

}

void Square::draw()
{
gout << move_to(_x, _y) << color(255,0,0) << box(_size_x,_size_y) << move_to(_x+2,_y+2) << color(255,255,255) << box(_size_x-4,_size_y-4);





}

void Square::handle(genv::event ev)
{
}
