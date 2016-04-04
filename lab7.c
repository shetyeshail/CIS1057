//Shail Shetye
//CIS 1057
//3-28-16

#include <stdio.h>

int main (void){
  char string[] = "This is a string of characters that will be used for searching etc etc";
  char searchchar;
  int indices[sizeof(string)];
  int k = 0;

  for(int i = 0; i< sizeof(string); i++){
    printf("%c ", string[i]);  
  }

  printf("\nPlease enter a character to search for: ");
  scanf("%c", &searchchar);

  for(int j = 0; j < sizeof(string); j++){
    if((string[j] == searchchar)||(string[j] == searchchar + 32)||(string[j] == searchchar - 32)){
      indices[k] = j;
      k++;
    }
  }
  
  if(k == 0){
    printf("No matching results."); 
  }else{
    printf("The indices are:\n");
    for(int m = 0; m < k; m++){
      printf("%d ", indices[m]);
    }
  }

  return 0;
}


