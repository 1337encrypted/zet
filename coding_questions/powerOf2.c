//C program to find if a number is power of 2 or not

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    if(argc < 2){
        printf("Usage: %s <num>\n", argv[0]);
        exit(-1);
    }
    int n = atoi(argv[1]);

    return argv[1] && (!(n & (n-1)));
}