#include<stdio.h>

int func1(int n);
void func2(int n);

int main(){
    int n;
    scanf("%d", &n);
     printf("\n");
    printf("%d is our number\n", n);
    
    func1(n);
    printf("\n");
    func2(n);
   printf("\n");
    
  return 0;
}




int func1(int n){
    printf("%d", n+10);
}

void func2(int n){
    printf("%d", n*10);
}
