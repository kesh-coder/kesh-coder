#include <stdio.h>

float recursion(int n){
    
    if(n<1){
        return 0;
    }
    int y = n + recursion(n/2);
    return y;
}

int main(){
    int n;
    scanf("%d", &n);
    
    printf("%f", recursion(n));
    
    return 0;
}
