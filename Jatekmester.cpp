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
        if( k!= r)
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
int d = 0; int n=-2; int counter = 0;
for(int j=0; j<6; j++)
{  counter=0;
        for(int i = 0; i<7; i++)
        {
        d = Negyzetek[i][j]->getAllapot();
        if(n==d && d!=-1)
        {   counter+=1;
        }
        if( n!= d)
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

r=0;
k=-2;
szamlalo=0;
for(int i=0; i<4; i++)
{
        r = Negyzetek[i][3-i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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

r=0;
k=-2;
szamlalo=0;
for(int i=0; i<5; i++)
{
        r = Negyzetek[i][4-i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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
r=0;
k=-2;
szamlalo=0;
for(int i=0; i<6; i++)
{
        r = Negyzetek[i][5-i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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

r=0;
k=-2;
szamlalo=0;
for(int i=0; i<6; i++)
{
        r = Negyzetek[i+1][5-i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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
r=0;
k=-2;
szamlalo=0;
for(int i=0; i<5; i++)
{
        r = Negyzetek[2+i][5-i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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
r=0;
k=-2;
szamlalo=0;
for(int i=0; i<4; i++)
{
        r = Negyzetek[3+i][5-i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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

r=0;
k=-2;
szamlalo=0;
for(int i=0; i<4; i++)
{
        r = Negyzetek[0+i][2+i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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
r=0;
k=-2;
szamlalo=0;
for(int i=0; i<5; i++)
{
        r = Negyzetek[0+i][1+i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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

r=0;
k=-2;
szamlalo=0;
for(int i=0; i<6; i++)
{
        r = Negyzetek[0+i][0+i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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
r=0;
k=-2;
szamlalo=0;
for(int i=0; i<6; i++)
{
        r = Negyzetek[1+i][0+i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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

r=0;
k=-2;
szamlalo=0;
for(int i=0; i<5; i++)
{
        r = Negyzetek[2+i][0+i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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
r=0;
k=-2;
szamlalo=0;
for(int i=0; i<4; i++)
{
        r = Negyzetek[3+i][0+i]->getAllapot();
        if(k==r && r!=-1)
        {   szamlalo+=1;

        }
        if( k!= r)
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


        for (Widget * w : widgets)
        {
            w->draw();
        }

        gout <<refresh;


        if(lepes==42 && state == 0 )
        {
            state=3;
        }


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
if(state==3)
    {
        Endscreen * r = new Endscreen(0,0,0,0);
        r->drawdraw();
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


