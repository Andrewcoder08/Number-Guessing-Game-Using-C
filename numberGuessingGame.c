#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     int number, guess, no_of_guesses = 1;
     srand(time(0)); //time 0 returns time in seconds and gives a new random number every time we run the code
     //generating a random number b/w 1 and 100 that we would have to guess
     number = rand() % 100 + 1;
     //printf(" Number to guess is %d \n", number);
     do
     {
          printf("Guess the number between 1 and 100 \n");
          scanf("%d", &guess);
          if (guess > number)
          {
               printf(" Lower number please. \n");
          }
          else if (guess < number)
          {
               printf(" Higher number please. \n");
          }
          else
          {
               //when you finally guess correctly
               printf("Congratulations! You guessed the number in %d attempts \n", no_of_guesses);
          }
          no_of_guesses += 1;
     } while (guess != number);

     return 0;
}