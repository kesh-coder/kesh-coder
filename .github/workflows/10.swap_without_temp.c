#include<stdio.h>
int main()
{ 
    int first,second;
    printf("Enter first integer value \n");
    scanf("%d",&first);
    printf("Enter second integer value \n");
    scanf("%d",&second);
    
    first=first-second;
    second=first+second;
    first=second-first;
    
    printf("\nAfter swapping value of first integer is %d \nsecond integer is %d",first,second);
    return 0;
}
