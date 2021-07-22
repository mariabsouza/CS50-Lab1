# Lhama Population :llama:

This a program created in C for Lab 1, in the Havard´s CS50 course

### What this program will do?

The program will ask you to input the size of the __starting population size__ and then, the size of the __ending population__.
With these datas, the program will calculate how many years is going to take to achieve the size of the end population.

It´s important to note that if the user enters a number __less than 9__ (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
Almost the same goes to the end population, if the user enters a number __less than the starting population size__, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)

### How does it calculate?

Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.

For example, if we were to start with ```n = 1200``` llamas, then in the first year, ```1200 / 3 = 400``` new llamas would be born and ```1200 / 4 = 300``` llamas would pass away. At the end of that year, we would have ```1200 + 400 - 300 = 1300``` llamas.
