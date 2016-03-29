#include <stdio.h>
//Shail Shetye
//CIS 1057
//3-7-15

void sort(int *, int *, int *, int *);

int main (void){
  int num1, num2, num3, num4;
  printf("Enter 4 unique numbers to be sorted: \n");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
  sort(&num1, &num2, &num3, &num4);
  printf("The numbers after sorting are as folows %d %d %d %d\n", num1, num2, num3, num4);
}
/*
void sort(int *addr1, int *addr2, int *addr3, int *addr4){
  int temp;
  int nums[4] = {*addr1, *addr2, *addr3, *addr4};
  for(int currentnum = 0; currentnum < 3; currentnum++){
    for(int i = currentnum; i < 4; i++){
      if(nums[currentnum] > nums[i]){
        temp = *nums[i];
        *nums[i] = *nums[currentnum];
        *nums[currentnum] = temp;
      }
    }
  }
}
*/

void sort(int *addr1, int *addr2, int *addr3, int *addr4){
  int temp;

  if(*addr1 > *addr4){
    temp = *addr1;
    *addr1 = *addr4;
    *addr4 = temp;
  }
  if(*addr2 > *addr3){
    temp = *addr2;
    *addr2 = *addr3;
    *addr3 = temp;
  }
  if(*addr1 > *addr2){
    temp = *addr1;
    *addr1 = *addr2;
    *addr2 = temp;
  }
  if(*addr3 > *addr4){
    temp = *addr3;
    *addr3 = *addr4;
    *addr4 = temp;
  }
  if(*addr2 > *addr3){
    temp = *addr2;
    *addr2 = *addr3;
    *addr3 = temp;
  }
}
