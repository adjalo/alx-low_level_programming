#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * it excecutes, and prints it
 * Return:nAlways 0 (Success)
 * /
 int main(void)
 {
 int n;
 srand(time(0));
 n=rand() -RAND_MAX /2;
 if (n>0)
 print("%d is positive\n", n);
 else if(n==0)
 print("%d is zero\n",n);
 else if(n<0)
 print("%d is negetive\n",n);
 return (0);
 }
