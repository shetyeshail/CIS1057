//Shail Shetye
//CIS 1057
//4-4-16

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define numcourses 5
#define numstudents 20

void print_all_grades(const int courses[5][20]);
void get_highest_grades(const int courses[5][20], int high_grades[]);
void get_average_grades(const int courses[5][20], double average_grades[]);

int main (void){
  srand(time(NULL));
  int courses[numcourses][numstudents];
  int high_grades[numcourses];
  double average_grades[numcourses];

  for (int i = 0; i < numcourses; i++){//fill w random numbers
    for (int j = 0; j < numstudents; j++){
      courses[i][j] = rand() % 100;  
    }  
  }

  for (int i = 0; i < numcourses; i++){
    printf("\n");
    for (int j = 0; j < numstudents; j++){
      printf("%d ", courses[i][j]);  
    }  
  }

  printf("\nHighest grades:\n");
  get_highest_grades(courses, high_grades);
  for (int k = 0; k < numcourses; k++){
    printf("%d ", high_grades[k]);
  }

  printf("\nAverage grades:\n");
  get_average_grades(courses, average_grades);
  for (int k = 0; k < numcourses; k++){
    printf("%lf ", average_grades[k]);
  }


  return 0;
}

void print_all_grades(const int courses[numcourses][numstudents]){
  for (int i = 0; i < numcourses; i++){//print numbers in 2D array
    for (int j = 0; j < numstudents; j++){
      printf("%d ", courses[i][j]);
    }  
  }
}

void get_highest_grades(const int courses[numcourses][numstudents], int high_grades[]){
  int highest;
  for (int i = 0; i < numcourses; i++){//parse through array
    highest = 0;
    for (int j = 0; j < numstudents; j++){
      if(highest < courses[i][j]){
        highest = courses[i][j];  
      }
    }
    high_grades[i] = highest;
  }
}

void get_average_grades(const int courses[numcourses][numstudents], double average_grades[]){
  double average;
  int total;
  for (int i = 0; i < numcourses; i++){//parse through array
    int total = 0;

    for (int j = 0; j < numstudents; j++){
      total += courses[i][j];  
    }

    average = (double)(total / (double)numstudents);
    average_grades[i] = average;
  }
}


