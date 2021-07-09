// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n=10, a=1, b=1;
    
    while(a<n){
        printf("%d\n",a);
        a+=2;
    }
    
    printf("now we see do while loop\n");
    
    do {printf("%d\n",b);
        b+=2;}while(b<n);
    
    return 0;
}
