#include <iostream>

int main(){
  
  int n;
  cin>>n;
  int array[n];
  
  
  for(int i=0; i<n; i++){
    scanf("%d",&array[i]);
  }
  
   for(int i=0; i<n; i++){
    printf("%d",&array[i]);
  }
  
  return 0;
}
