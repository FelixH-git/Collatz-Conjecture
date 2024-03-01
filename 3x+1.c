#include <stdio.h>

long long Collatz(long long seed){
    printf("%d->",seed);
    if(seed == 1){
        return 0;
    }

    if(seed%2 == 0){
        seed = seed/2;
        return Collatz(seed);
    }

    if(seed%2 != 0){
        seed = seed*3+1;
        return Collatz(seed);
    }

    return 0;
}


int main(){

    long long result = Collatz(7);
    
    printf("%d", result);

    return 0;
}