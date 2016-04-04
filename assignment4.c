//Shail Shetye
//CIS 1057
//3-31-16

#include <stdio.h>
#include <math.h>

void print_all_grades(const int[], int);
int get_lowest_grade(const int[], int);
int get_highest_grade(const int[], int);
double get_median_grade(const int[], int);
double get_mean_grade(const int[], int);
void sort_grades(int[], int);

int main (void){
  int length = 0;
  int grades[length];
  int h = 0;
  int i = 0;

  printf("How many grades? ");
  scanf("%d", &length);

  while((i <= length) && (h != -1)){
    scanf("%d", &h);
    grades[i] = h;

    sort_grades(grades, i);

    i++;
  }
  i--;
  print_all_grades(grades, i);
  int lowest = get_lowest_grade(grades, i);
  int highest = get_highest_grade(grades, i);
  double median = get_median_grade(grades, i);
  double mean = get_mean_grade(grades, i);
  printf("The lowest grade is: %d\n", lowest);
  printf("The highest grade is: %d\n", highest);
  printf("The median grade is: %d\n", median);
  printf("The average is: %d\n", mean);
}

void print_all_grades(const int grades[], int number){
  for(int i = 0; i < number; i++){
    printf("%d ", grades[i]);
  }  
}

void sort_grades(int grades[], int number){
  int tmp;
  for(int i = 0; i < number; i++){
    if (grades[i] > grades[i+1]){
      tmp = grades[i];
      grades[i] = grades[i+1];
      grades[i+1] = tmp;
    }  
  }
}

int get_lowest_grade(const int grades[], int number){
  return grades[0];
}

int get_highest_grade(const int grades[], int number){
  return grades[number];
}

double get_median_grade(const int grades[], int number){
  double median;
  if(!(number % 2)){
    median = ((grades[(int)(floor(number/2.0))] + grades[(int)(floor(number/2.0)+1)]) / 2);
  }else{
    median = grades[(int)floor(number/2.0)];
  }
  return median;
}

double get_mean_grade(const int grades[], int number){
  double mean;
  int sum;
  for(int i = 0; i < number; i++){
    sum += grades[i];
  }
  mean = sum/number;
  return mean;
}
