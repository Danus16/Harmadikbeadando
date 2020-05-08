#include "Jatekmester.hpp"
#include "Widgets.hpp"
#include "graphics.hpp"
#include "Square.hpp"
#include <vector>
#include <iostream>
#include "Endscreen.hpp"

using namespace std;
using namespace genv;

const double XX=420, YY = 360;

Jatekmester::Jatekmester()
{
    state = 0;
}




void Jatekmester::ellenorzo(vector<vector<Square*>> Negyzetek )
{

int r=0;
int k=-2;
int szamlalo=0;
for(int i = 0; i<7; i++)
{       szamlalo=0;
        for(int j=0; j<6; j++)
        {
        r = Negyzetek[i][j]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;
        }
        if( k!= r && r!=-1)
        {   k = r;
            szamlalo=1;
        }
        if(szamlalo==4)
        {
            if(k==1)
            {

            state=1;
            szamlalo=0;
            break;
            }
            if(k==2)
            {
            state=2;
            szamlalo=0;
            break;
            }
            break;
        }
    }
}
int d = 0; int n=0; int counter = 0;
for(int j=0; j<6; j++)
{  counter=0;
        for(int i = 0; i<7; i++)
        {
        d = Negyzetek[i][j]->getAllapot();
        if(n==d && d!=-1)
        {   counter+=1;
        }
        if( n!= d && d!=-1)
        {   n = d;
            counter=1;
        }
        if(counter==4)
        {
            if(n==1)
            {

            state=1;
            counter=0;
            break;
            }
            if(n==2)
            {
            state=2;
            counter=0;
            break;
            }
            break;
        }
    }
}












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
if(state==0)
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

            ellenorzo( Negyzetek ) ;

            }
      /*  if (focus!=-1) {
            widgets[focus]->handle(ev);
        }*/

        for (Widget * w : widgets)
        {
            w->draw();
        }

        gout <<refresh;





    }

if(state==1)
    {
        Endscreen * a= new Endscreen(0,0,0,0);
        a->drawgreen();
        if(ev.type == ev_key && ev.keycode == key_enter)
        {
            focus = -1;
            lepes=0;
            state=0;
        for (Widget * w : widgets)
        {
            w->handle(ev);
        }

        }

    }
if(state==2)
    {
        Endscreen * b = new Endscreen(0,0,0,0);
        b->drawblue();
        if(ev.type == ev_key && ev.keycode == key_enter)
        {
            focus = -1;
            lepes=0;
            state=0;
        for (Widget * w : widgets)
        {
            w->handle(ev);
        }

        }
    }

}
}


