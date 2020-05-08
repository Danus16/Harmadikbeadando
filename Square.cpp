#include "Square.hpp"
#include "Widgets.hpp"
#include "graphics.hpp"

using namespace genv;
const int XX = 420, YY= 360;
Square::Square(int x, int y, int sx, int sy): Widget(x,y,sx,sy)
{
allapot=-1;
}

void Square::draw()
{
gout << move_to(_x, _y) << color(255,0,0) << box(_size_x,_size_y) << move_to(_x+2,_y+2) << color(255,255,255) << box(_size_x-4,_size_y-4);
if (allapot==1)
{
gout << move_to(_x+2,_y+2) << color(0,255,0) << box(_size_x-4,_size_y-4);
}
if (allapot==2)
{
gout << move_to(_x+2,_y+2) << color(0,0,255) << box(_size_x-4,_size_y-4);

}






}


int Square::getAllapot()
{
    return allapot;
}

bool Square::is_checked()
{
    if(allapot==-1)
    {
        return false;
    } else if (allapot!=-1)
    {
        return true;
    }

}

void Square::handler(int lepes)
{
if(lepes%2==0)
{   allapot=1;
} else if(lepes%2==1)
{
allapot=2;
}

}

void Square::handle(genv::event ev)
{
    allapot=-1;
}
