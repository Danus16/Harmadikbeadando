#ifndef JATEKMESTER_HPP_INCLUDED
#define JATEKMESTER_HPP_INCLUDED
#include "graphics.hpp"
#include "Widgets.hpp"
#include <vector>
#include <iostream>
#include "Square.hpp"

using namespace genv;


class Jatekmester
{
    private:
    int state;

    public:
        Jatekmester();
        virtual void handle();
        virtual void ellenorzo(std::vector<std::vector<Square*>> );

};

#endif // JATEKMESTER_HPP_INCLUDED
