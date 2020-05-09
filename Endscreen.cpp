#include "Endscreen.hpp"
#include "Widgets.hpp"
#include "graphics.hpp"

using namespace genv;
const int XX=420, YY=360;
Endscreen::Endscreen(int x,int y,int sx,int sy):Widget(x,y,sx,sy)
{
}

void Endscreen::handle(genv::event ev)
{
}

void Endscreen::draw()
{
}

void Endscreen::drawgreen()
{
    gout << move_to(_x,_y) << color(0,0,0) << box(XX,YY) << move_to(XX/2-116,YY/2) << color(0,255,0) << text("A Zöld nyert! Enter új játékhoz") << refresh;


}
void Endscreen::drawblue()
{
    gout << move_to(_x,_y) << color(0,0,0) << box(XX,YY) << move_to(XX/2-116,YY/2) << color(0,0, 255) << text("A Kék nyert! Enter új játékhoz") << refresh;

}
void Endscreen::drawdraw()
{
    gout << move_to(_x,_y) << color(0,0,0) << box(XX,YY) << move_to(XX/2-116,YY/2) << color(216,16,42) << text("Döntetlen lett! Enter új játékhoz") << refresh;

}
