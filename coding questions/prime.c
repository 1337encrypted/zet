//Program to find a prime number
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num){
    if(num <= 1)
        return false;

    if(num == 2 || num ==3)
        return true;
        
    if(num % 2 == 0 || num % 3 == 0)
        return false;

    //prime can be expressed as 6n+1 or 6n-1

    for(int i=5; i<sqrt(num); i=i+6)
        if(num % i == 0 || num % (i+2) == 0)
            return false;

    return true;
}

int main(int argc, char* argv[]){
    //int num = atoi(argv[1]);
    if(argc != 2)
    {
        printf("Usage: %s <num>\n", argv[0]);
        return -1;
    }

    isPrime(atoi(argv[1])) ? printf("Its a prime") : printf("Its not a prime");
    return 0;
}