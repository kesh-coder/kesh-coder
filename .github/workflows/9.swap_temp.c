#include<stdio.h>

int main (){
	int a,b;
	int temp;
	printf("write two numbers\n");
	
	scanf("%d",&a);
	printf("a= %d\n",a);
	
	scanf("%d",&b);
	printf("b= %d\n",b);
	
	printf("after swaping\n");
	temp=a;
	a=b;
	b=temp;
	printf("a= %d\nb= %d",a,b);
return 0;
}
