//Shail Shetye
//CIS1057 Lab
//2-22-16

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int get_random_number(int);

int main (void){
  srand(time(NULL));
  int d1;
  int d2;
  int d3;
  char play_again;
  int games_played = 0;
  int wins = 0;
  int two = 0;
  int loss = 0;
  do{
    games_played++;

    d1 = get_random_number(6);
    d2 = get_random_number(6);
    d3 = get_random_number(6);

    printf("Your dice: %d %d %d \n", d1, d2, d3);
    
    //if all match
    if (d1==d2==d3){
      printf("You've hit the Jackpot!\n");
      wins++;
    }else
    //if 2 match
    if (((d1==d2) && (d1 != d3) && (d2 != d3)) || ((d2==d3) && (d2 != d1) && (d3 != d1)) || ((d3==d1) && (d3 != d2) && (d1 != d2))){
      printf("You got 2 of 3!\n");
      two++;
    }else
    //if none match
    if (d1 != d2 != d3){
      printf("Tough shit.\n");
      loss++;
    }
    //exit case
    printf("Press Y to play again");
    scanf(" %c", &play_again);
  } while (play_again == 'y');

  printf("%d games played \n", games_played);
  printf("Wins: %d   Two of them: %d   Losses: %d", wins, two, loss);

  return 0;
}

/* Generate a random number between 1 and max */
int get_random_number(int max){
      return rand() % max + 1;
}
