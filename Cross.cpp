#include "Drawing.h"
#include <iostream>
#include <stdlib.h>
#include "Figure.h"


class Cross : public Figure
{
    public:
    Cross(const int width, const int height) : Figure(width, height)
    {
        SetLine(height/2);
        SetColumn(width/2);
        save("Croix.bmp");//sauve rien du tout :(

    }

    ~Cross()
    {
        clearBuffer();
    }

    void drawCroix()
    {
        std::cout << "Cross : " << std::endl;
        Figure::save("Croix.bmp");
    }

};
