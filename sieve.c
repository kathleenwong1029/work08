#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int targetPrime){
  targetPrime+=1;
  int size = (int)(targetPrime * log(targetPrime) * 1.2);
  int * primes = malloc(sizeof(int)*size);
  int a,b;
  int c = 1;

  //mark all numbers with 1
  for(a=2;a<size;a++){
    primes[a]=1;
  }

  //mark all multiples with 0
  for (a=2;a<size;a++){
        if (primes[a] ){
            for (b=a;a*b<size;b++)
                primes[a*b]=0;
        }
    }

    //print out number when the targetPrime is reached
    for (a=2;a<size;a++){
       if (primes[a]){
           c++;
           if(c==targetPrime){
             return a;
           }}}


   return a;
  }
