#include <stdio.h>

int main() {
    int guess;
    const int secret_number = 3;    
    do {        
        printf("Guess a number between 1 and 5: ");
        scanf("%d", &guess);   
      
        if (guess == secret_number) {
            printf(" You are a genius, You guessed it right.\n");
        } else {
            printf(" Unfortunately, you guessed wrong. Try again!\n");
        }
    } while (guess != secret_number); 

    return 0;
}
