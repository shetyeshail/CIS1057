//Shail Shetye
//2-1-16
//CIS 1057, Prof. Morris
//Assignment 1

#include <stdio.h>
#include <math.h>

int main (void) {
  int price, paid, change, q, d, n, p;
  q = 0;
  d = 0;
  n = 0;
  p = 0;

  printf("Please enter cost of product (in cents): ");
  scanf("%d", &price);
  printf("\nPlease enter amount paid (in cents): ");
  scanf("%d", &paid);

  change = paid - price;
 
  printf("Price: %d, Paid: %d, Change: %d \n", price, paid, change);

  if(change >= 25){
    q = change/25;
    change = change % 25;
  }
  if(change >= 10){
    d = change/10;
    change = change % 10;
  }
  if(change >= 5){
    n = change/5;
    change = change % 5;
  }
  if(change >= 1){
    p = change;
  }

  printf("Your change:\n %d quarters \n %d dimes \n %d nickels \n %d pennies.", q, d, n, p);
} 
