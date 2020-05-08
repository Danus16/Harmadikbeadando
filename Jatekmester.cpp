#include "Jatekmester.hpp"
#include "Widgets.hpp"
#include "graphics.hpp"
#include "Square.hpp"
#include <vector>
#include <iostream>

using namespace std;
using namespace genv;

const double XX=420, YY = 360;



Jatekmester::Jatekmester()
{
}

void Jatekmester::ellenorzo()
{
}

void Jatekmester::handle()
{
    event ev;
    gout.open(XX,YY);
    vector<Widget*> widgets;
    vector<vector<Square*>> Negyzetek;
    vector<Square*> vektorok;
for(int i = 0; i<7; i++)
{
    for(int j = 0; j<6; j++)
    {
        Square * s = new Square(i*60,(YY-60)-j*60,60,60);
        vektorok.push_back(s);
        widgets.push_back(s);
    }
    Negyzetek.push_back(vektorok);
    vektorok.clear();
}


int focus=-1;
int lepes= 0;
while (gin >> ev && ev.keycode!= key_escape)
{
if (ev.type == ev_mouse && ev.button==btn_left) {
            /*for (size_t i=0;i<widgets.size();i++) {
                if (widgets[i]->is_selected(ev.pos_x, ev.pos_y)) {
                        focus = i;
                        std::cout << i << "\n" ;
                }
            }*/

            for(int i=0; i<7; i++)
            {
                if(ev.pos_x>i*60 && ev.pos_x< i*60+60)
                {   for(int j=0; j<6; j++)
                    {
                        if(Negyzetek[i][j]->is_checked() == false)
                        {
                          Negyzetek[i][j]->handler(lepes);
                          lepes+=1;
                          break;
                        }
                    }
                }
            }



            }
        if (focus!=-1) {
            widgets[focus]->handle(ev);
        }

        for (Widget * w : widgets)
        {
            w->draw();
        }

        gout <<refresh;








}
}


