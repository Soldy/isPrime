#include <stdio.h>
typedef enum { false, true } bool;
int primes =0;

bool isPrime(int number){
   int i;
   int end = (int)(number/2); // its an idiotic unsafe choice
   for (i = 2; i < end; i++ ){
       if (number % i == 0){
           return false;
       }
   }
   return true;
}

int main(){
    int k;
    for (k = 3; k < 2000000; k++){
        if (isPrime(k) == true){
           primes++;
        }
     }
     printf("\n%d\n", primes);
}
