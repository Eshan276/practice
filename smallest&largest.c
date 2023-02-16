#include <stdio.h>
//smalest integer in the array,arr = {1, 2, 3, 4, 5}

//Smallest element : 1

//Largest element : 5
int main() {
int i, n;
int a[5]={2,4,3,7,0};
int small=a[0];
int large=a[0];
for(i=0;i<4;++i)
{
   
  if(a[i]>a[i+1]){
   large=a[i];
  }else{
   large=a[i+1];
  }
}
  for(i=0;i<4;++i)
{
   
  if(a[i]<a[i+1]){
   small=a[i];
  }else{
   small=a[i+1];
  }
  
}
printf("Smallest=> %d\nLargest=>  %d",small,large);

 return 0;
}
