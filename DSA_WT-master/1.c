#include<stdio.h>

int main(){
    int a = 20;
    int *b = &a;
    *b += 1;

    printf("%d", *b);
}