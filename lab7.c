//Shail Shetye
//CIS 1057
//3-28-16

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (void){
  char string[] = "This is a string of characters that will be used for searching...etc etc”;

  for(int i = 0; i< sizeof(string) -1; i++){
    printf("%c", string[i]);  
  }

  return 0;
}


