/*
CH-230-A
a11_p5
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include "Shapes.h"

int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);

  /* Creating classes of circle, rectangle and square */
  Circle c1("second circle", 3, 3, 5);
  Rectangle rec("first Retangle", 3, 3, 5, 4);
  Square sq("first Square", 3, 3, 5);
  
  r.printName();
  c.printName();

  /* Printing the perimeter and area of the classes */
  c1.print();
  rec.print();
  sq.print();
  return 0;

}
