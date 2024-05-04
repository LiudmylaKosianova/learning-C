# FiNumbers

The program calculates the sum of  **n** Fibonacci numbers. It takes **n** as a user input.

![alt text](<Screenshot from 2024-03-03 12-12-22.png>)

run ***make*** to compile

run ***./fi*** to run the program 

run ***make clean*** to remove executable files

**NB** Fibonacci numbers get extremely large very fast. When the sum of Fibonacci numbers was stored as an unsigned int it got overloaded very quickly. 

![alt text](<Screenshot from 2024-03-07 08-05-12.png>)

Storing the sum as an unsigned long long int helped to solve the problem.

![alt text](<Screenshot from 2024-03-07 08-05-58.png>)

The real time was a bit slow.

![alt text](<Screenshot from 2024-03-07 08-23-53.png>)



**Test data**

run ***make all*** to compile 

***./test_fi*** will run the tests and output several first Fibonacci numbers as well as their sums

![alt text](<Screenshot from 2024-03-03 11-38-12.png>)

run ***make clean*** to remove executable files
