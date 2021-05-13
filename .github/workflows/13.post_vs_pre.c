#include <stdio.h>

int main(){
	
	int x=2,y=2,z1,z2;
	
	z1=10+ ++x;
	z2=10+ y++;
	
	printf("z1= %d\nz2= %d",z1,z2);
	
	return 0;
	}