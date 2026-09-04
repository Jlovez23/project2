I will import necassary libraries

create main function
  create a string to store the name of the player
  request the name of the player
  greeting the player by name
  generate a random number
  create an integer named increment to track the number of guesses
  create a while loop to create the guessing game aspect
    ask the user for a number
    compare the number to the generated number
    create an if statement to where the number is the same
       create an if statement to see if the number of guesses is higher than 7
         say better luck next time
         end the while loop
       create an if statement to see if the number of guesses is 7
         say good job
         end the while loop
       create an if statement to see if the number of guesses is under 7
         say great job
         end the while loop
     create an else statement
       create an if statement to see if the number is larger than generated number
         say too high
       create an if statement to see if the number is lower than generated number
         say too low
     increase the increment variable
   thank the player for playing by name
