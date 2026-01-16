#algorithm for guesser game

'''
MAIN FUNCTION
1. Seed the random number generator
2. Generate a random number between 1 and 100 and store in 'number'
3. Create a character array 'name' to store the user's name
4. Ask the user for their name and store it
5. Initialize 'guessCount' to 0
6. Initialize 'guess' variable

DO WHILE LOOP (runs until the correct guess)
    
    a. Prompt the user for a guess
    b. Increment 'guessCount'
    c. IF guess < number
           print "Too low!"
       ELSE IF guess > number
           print "Too high!"
       ELSE
           print "That's correct!"

AFTER LOOP (user has guessed correctly)

7. Print final number of guesses
8. Evaluate performance
    IF guessCount < 7
        print "Great job, you guessed it under seven tries!"
    ELSE IF guessCount > 7
        print "Yikes, you guessed more than seven times."
    ELSE
        print "Nice! You guessed it in exactly 7 tries."

'''
