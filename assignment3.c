#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void generate_secret_number(int *, int *, int *);
void play_game();
int is_guess_correct(int);
void print_hint(int);

int digit1 = 0;
int digit2 = 0;
int digit3 = 0;
//--------------------

int main (void){
  srand(time(NULL));

  play_game();

  return 0;
}

//-------------------

void play_game(){
  int d1 = 0;
  int d2 = 0;
  int d3 = 0;
  int guess = 0;
  int correct = 0; 
  generate_secret_number(&d1, &d2, &d3);

  do{
    printf("Enter your guess as a 3 digit number\n");
    
    scanf("%d", &guess);
    correct = is_guess_correct(guess);
    
    if(correct == 0){
      print_hint(guess);
    }

  }while(correct == 0);
}

//--------------------

void generate_secret_number(int *digit1, int *digit2, int *digit3){
  
  while((*digit1 == *digit2) || (*digit2 == *digit3) || (*digit1 == *digit3)){
    *digit1 = (rand() % 9) + 1;
    *digit2 = rand() % 9;
    *digit3 = rand() % 9;
  }
}

//--------------------

void print_hint(guess){
  int guess1 = guess/100;
  int guess2 = (guess - (guess1 * 100))/10;
  int guess3 = (guess - (guess1 * 100) - (guess2 * 10));
  
  if((guess1 == digit1) || (guess2 == digit2) || (guess3 == digit3)){
    printf("Fermi ");
  }if((guess1 == digit2) || (guess1 == digit3) || (guess2 == digit3)){
    printf("Pico ");
  }if((!(guess1 == digit1) || !(guess1 == digit2) || !(guess1 == digit3)) && (!(guess2 == digit1) || !(guess2 == digit2) || !(guess2 == digit3)) && (!(guess3 == digit1) || !(guess3 == digit2) || !(guess3 == digit3))){
    printf("Bagels ");
  }

}

int is_guess_correct(guess){
  int realnumber = (digit1 * 100) + (digit2 * 10) + (digit3);

  if(guess == realnumber){
    return 1;
  }else{
    return 0;
  }

}
