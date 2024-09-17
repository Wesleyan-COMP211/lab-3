# Lab 3: More C programming

In this lab, you'll get a little more practice writing programs in C. 

## Deliverable 

To get credit for this lab, you must demonstrate at least 50% effort. That could mean you've gotten at least half of each problem done, or that you've completely done half of the problems. My advice: Aim to complete all of them, but just don't stress too much about it if you don't finish everything. How annoying would it be to be close to 50% effort and just not quite over the line? If you come back to it a couple times throughout the week, every time you are done working, just update your files in this repository. You can do this by uploading the file from your computer to the repository again with the "Add file" button -- it will automatically replace the existing file with the new one as long as they have the same name.

## Read from a file and calculate the hypotenuse of a right triangle

Write a program to calculate the hypotenuse of a right triangle using the formula $a^2 + b^2 = c^2$ for $a, b$ two sides of the right triangle and $c$ the hypotenuse. Your program should take in the values for $a$ and $b$ from a file called `input.txt`. Use the example code in `read_from_file.c` and the file `input.txt` to get started. 

## Flip a coin until you get a heads

Write a program to flip a coin until you get a "heads" and then print the number of flips that it took. 

Do this by repeatedly randomly generating a number and checking if it is even or odd. If even, your coin flip resulted in a "heads," and if odd, your coin flip resulted in a "tails." If it's even, stop randomly generating numbers and print the number of times you had to flip the coin. Use a bool and a while loop. 

There is starter code for you in `coinflip.c`. The starter code includes the standard bool library and demonstrates how to use a random number generator in C. 

## The birthday paradox!

Write a program to learn about the "birthday paradox" (not really a paradox -- just surprising). The birthday paradox asks: If you have a room with $k$ people, what is the probability that two of them share a birthday? (Not birth date, just birth day.) 

Assume no leap years, so you only have 365 days to choose from, and that 2 $\geq$ k $\geq$ 365. Then, the probability that all k people have different birthdays is

$$p = \frac{365}{365} \cdot \frac{364}{365} \cdot \frac{363}{365} \dots \frac{365 - k + 1}{365}$$

and the probability that at least two of them share the same birthday is 1 − $p$.

The probability $p$ is computed by choosing birthdays at random for each of the people. The probability that you chose a birthday for the first person is 1.0. The probability that the birthday for the second person is not the same as that for the first is 364/365. The probability that the birthday for the third person is not the same as that for either of the first two is 363/365. And so on.

Write a program that asks the user to enter a number of people and reports the probability that two of them share a birthday. 

## Calculate the number of primes under an integer

Write a program that uses `scanf` to prompt the user for an integer $\geq$ 2. Use a while or for loop to count the number of primes under that integer. 

*Hint: There is some related pseudocode in your HW 2.*
