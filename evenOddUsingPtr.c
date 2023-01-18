#include<stdio.h>

void checkMod2(int *a, int n){
    for (int i = 0; i < n;i++){
        if (*(a+n)%2==0){
            printf("&d is even", *(a + n));
        }
        else{
             printf("&d is odd", *(a + n));
        }
    }
}

int main(){
    int *a = {1, 2, 3};
    checkMod2(a, 3);
}