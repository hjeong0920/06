#include <stdio.h>

int sumTwo(int a, int b){
    return a+b;
}

int square(int n){
    return n*n;
}

int get_max(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main(void){
    int a = 10;
    int b = 5;

    printf("sumTwo: %d\n", sumTwo(a,b));
    printf("square: %d\n", square(a));
    printf("get_max: %d\n", get_max(a,b));

    return 0;
}