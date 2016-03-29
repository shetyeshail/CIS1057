//Shail Shetye
//Lab2
//CIS 1057

#include <stdio.h>
#include <math.h>

#define pi 3.14159

int diameter;
double radius, base, height, c_area, t_area;
int main (void){
  printf("Plese enter diameter of the circle as an integer.");
  scanf("%d", &diameter);
  
  //area of circle
  radius = diameter/2.0;
  c_area = pi * radius * radius;

  printf("the area of your circle is: %lf \n", c_area);

  //area of triangle
  //base = 2 * (radius * sqrt(3));
  //height = (2/3) * radius;

  //t_area = (.5)*base*height;
  t_area = 3 * (radius*radius) * sqrt(3);


  printf("the area of the triangle is: %lf \n", t_area);

  //area of difference
  printf("the difference is: %lf \n", (t_area - c_area));

  scanf("%d", &diameter);
}
