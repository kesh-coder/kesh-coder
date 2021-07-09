// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=1;
    int k=32;
    
    while(k>n){
        k=k>>1;
        printf("%d\n",k);
        
        if (k==1){printf("k = n \n");
            printf("\n\nk is converted into n\nmission pass++");
        }
        else{printf("k != n\n");}
    }
    
    return 0;
}
