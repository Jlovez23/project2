#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main() {
   char playerName[20];
   printf("what is your name? ");
   scanf("%s" , playerName);
   printf("Hi, %s! \n", playerName);
   srand(time(NULL));
   int guesser = rand();
   int ranNum = (guesser % 100);
   int increment = 0;
   int PNum;
   int keepgoing = 0;
   while(keepgoing == 0) {
      printf("type a number ");
      scanf("%d", &PNum);
      increment += 1;
      if (ranNum == PNum) {
	      if (increment > 7) {
	         printf("you did it. Try again to better your score %s.", playerName);
	         keepgoing = -1;
	      }
              else if (increment == 7) {
	        printf("Good job %s!", playerName);
	        keepgoing = -1;
	      }
	      else if (increment < 7) {
	        printf("Great job %s!!", playerName);
	        keepgoing = -1;
	      }
	}
      else {
	 if (PNum < ranNum){
            printf("too low! \n");
	 }
	 else if (PNum > ranNum){
	    printf("too high! \n");
	 }
      }
   } //end of while


 }
