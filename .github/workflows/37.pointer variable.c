#include <stdio.h>

int main(){
    int n=10;
    int *m=&n;
    printf("%d\n", *m);
    printf("%d\n",m);
    return 0;
}
