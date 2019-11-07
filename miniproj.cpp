#include <iostream>
#include <string>

#include "Drawing.h"
#include "Figure.h"
#include "Cross.h"

const int width = 300;
const int height = 400;
const int widthF = 70; // largeur et longueur de la Forme
const int heightF = 100;

int main(int argc, char **argv) {

  Drawing draw(width, height);

  draw.save(std::string("test_image.bmp"));

Figure Ligne(widthF,heightF);

Ligne.SetLine(heightF);

Ligne.save("Ligne.bmp");

Ligne.clearBuffer();

Cross Croix();


  return 0;
}
