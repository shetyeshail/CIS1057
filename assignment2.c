//Shail Shetye
//shail@temple.edu
//2-15-16
//CIS 1057, Prof. Morris
//Assignment 2

#include <stdio.h>
#include <math.h>

char *triangleType;
int isValid(double, double, double);
double getArea(double, double, double);

int main(void){
  double a, b, c, area;
  int isTriangle;

  //request and recieve side lengths
  printf("Enter the length of the first side: \n");
  scanf("%lf", &a);
  printf("Enter the length of the second side: \n");
  scanf("%lf", &b);
  printf("Enter the length of the third side: \n");
  scanf("%lf", &c);
  //if valid, find area, if not then let user know
  if(isValid(a,b,c) == 1){
    area = getArea(a,b,c);
    printf("The area of the %s triangle is: %lf", triangleType, area);
  }
  else{
    printf("This is not a triangle.");
  }

  return 0;
}

//sees if it is a valid triangle
int isValid(double s1, double s2, double s3){
  int triangle = 0;
  //3,4,9
 
  if (s1 == s2 == s3){
    triangleType = "equilateral";
    triangle = 1;
  }else
  if (((s1*s1) + (s2*s2) == (s3*s3)) || ((s2*s2) + (s3*s3) == (s1*s1)) || ((s1*s1) + (s3*s3) == (s2*s2))){
    triangleType = "right";
    triangle = 1;
  }else
  if ((((s1*s1) + (s2*s2)) < (s3*s3)) || (((s2*s2) + (s3*s3)) < (s1*s1)) || (((s1*s1) + (s3*s3)) < (s2*s2))){
    triangleType = "obtuse";
    triangle = 1;
  }else
  if ((((s1*s1) + (s2*s2)) > (s3*s3)) || (((s2*s2) + (s3*s3)) > (s1*s1)) || (((s1*s1) + (s3*s3)) > (s2*s2))){
    triangleType = "acute";
    triangle = 1;
  }
  
  if( ((s1+s2) <= s3 ) && ((s2+s3) <= s1) && ((s1+s3) <= s2) ){
    triangle = 0;
  }


  //switch(s1, s2, s3){
  //  case (s1 == s2 == s3): //equilateral triangle
  //    triangle = 1;
  //    break;
  //  case (((s1*s1) + (s2*s2) == (s3*s3)) || ((s2*s2) + (s3*s3) == (s1*s1)) || ((s1*s1) + (s3*s3) == (s2*s2))): //right triangle
  //    triangle = 1;
  //    break;
  //  case (((s1*s1) + (s2*s2) < (s3*s3)) || ((s2*s2) + (s3*s3) < (s1*s1)) || ((s1*s1) + (s3*s3) < (s2*s2))): //obtuse triangle
  //    triangle = 1;
  //    break;
  //  case (((s1*s1) + (s2*s2) > (s3*s3)) || ((s2*s2) + (s3*s3) > (s1*s1)) || ((s1*s1) + (s3*s3) > (s2*s2))): //acute triangle
  //    triangle = 1;
  //    break;
  //  default: //default is that the shape is not a triangle
  //    triangle = 0;
  //}

  return triangle;
}
//find and return area
double getArea(double s1, double s2, double s3){
  double s = (s1 + s2 + s3)/2;
  double area = sqrt((s)*(s-s1)*(s-s2)*(s-s3));
  
  return area;
}
