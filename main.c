#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int main(){
  printf("Testing sieve function:");
  printf("The 1st prime is %d \n", sieve(1));
  printf("The 5th prime is %d \n", sieve(5));
  printf("The 10th prime is %d \n", sieve(10));
  printf("The 100th prime is %d \n", sieve(100));
  printf("The 500th prime is %d \n", sieve(500));
  return 0;
}
