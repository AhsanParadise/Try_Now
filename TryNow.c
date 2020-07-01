#include <stdio.h>
#include <stdlio.h>


/******************************************************************************

                                Good Luck.....

*******************************************************************************/



int main() {
   
    int secretNumber = 13;
    int guess;
    int guessCount = 0;
    int guessLimit = 10;
    int outOfGuesses = 0; 
     
    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit) {
        printf("Enter a number: ");
        scanf("%d", &guess);
        guessCount++;
        } else {
           outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1) {
        printf("BOOM! You can't win if you lose. Out of guesses");
    }else {
    printf("You Win! But 13 is an unlucky number.");
    }


    return 0;
}