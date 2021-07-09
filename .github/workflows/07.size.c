#include <stdio.h>


int main(){
	short a;
	long b;
	long long c;
	long double d;
	int e;
	float f;
	double g;
	
	printf("size of short = %d bytes\n",sizeof(a));
	printf("size of long = %d bytes\n",sizeof(b));
	printf("size of long long = %d bytes\n",sizeof(c));
	printf("size of long double= %d bytes\n",sizeof(d));
	printf("size of int = %d bytes\n",sizeof(e));
	printf("size of float = %d bytes\n",sizeof(f));
	printf("size of double= %d bytes\n",sizeof(g));
	
	return 0;
	}
