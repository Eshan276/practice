#include <stdio.h>

//FIZBUZZZZZZZZZZZZZZZZZZZZZZZZ
int main(){
    int i=0;
    int num;
    
    scanf("%d",&num); 
  while(i!=num){
      i++;
      if(i%15==0){
          printf("FizzBuzz,");
      }else if (i%5==0){
          printf("Buzz,");
      }else if (i%3==0){
          printf("Fizz,");
      }else{
      printf("%d,",i);
  }
}
    return 0;
}


