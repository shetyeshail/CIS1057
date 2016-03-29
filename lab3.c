//Shail Shetye
//CIS1057 Lab
//2-8-16

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int get_random_number(int i);
void roll_dice(int j);

int main (void){
  int a = 6;
  int b = 9;
 srand(time(NULL));
  printf("hello world");
  roll_dice(a);
  roll_dice(b);
  printf("hello world"); 
  return 0;
}

int get_random_number(int i){
  int randomnum = rand() % i + 1;
  return randomnum;
}

void roll_dice(int j){
  int rn = get_random_number(j);

  printf("*****\n");
  printf("* %d *\n", rn);
  printf("*****\n");

}
