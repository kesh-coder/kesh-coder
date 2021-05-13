#include <stdio.h>
int main(){
	int a = 10, b = 3, c;
	c= a++ + b-- - --b;
	b = c * (b * (++a));
	
	printf("a=%d b=%d c=%d",a,b,c);
	return 0;
	
	}
