//Shail Shetye
//CIS 1057
//3-21-16

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void print_all_numbers(int[], int);
void print_largest_number(int[], int);
void print_average_number(int[], int);
void print_even_numbers(int[], int);

int main (void){
  int my_numbers[100];
  srand(time(NULL));

  for(int i = 0; i < 100; i++){
    my_numbers[i] = rand() % 200;
  }

printf("The numbers stored in my array are: \n");
print_all_numbers(my_numbers, sizeof(my_numbers) / (sizeof(int)));

printf("\n\nThe largest number in the list is: \n");
print_largest_number(my_numbers, sizeof(my_numbers) / (sizeof(int)));

printf("\n\nThe average is: \n");
print_average_number(my_numbers, sizeof(my_numbers) / (sizeof(int)));

printf("\n\nThe even numbers are: \n");
print_even_numbers(my_numbers, sizeof(my_numbers) / (sizeof(int)));

return 0;
}

void print_all_numbers(int mynumbers[], int array_size){
  for(int i = 0; i < array_size; i++){
    printf("%d ", mynumbers[i]);
  }
}

void print_largest_number(int mynumbers[], int array_size){
  int largest = -1;
  for(int i = 0; i < array_size; i++){
    if(mynumbers[i] > largest){
      largest = mynumbers[i];
    }
  }
  printf("%d", largest);
}

void print_average_number(int mynumbers[], int array_size){
  int average = 0;
  int sum = 0;
  for(int i=0; i < array_size; i++){
    sum += mynumbers[i];
  }
  average = sum / array_size;
  printf("%d", average);
}

void print_even_numbers(int mynumbers[], int array_size){
  for(int i = 0; i < array_size; i++){
    if((mynumbers[i] % 2) == 0){
      printf("%d ", mynumbers[i]);
    }
  }
}
