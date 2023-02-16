#include <stdio.h>
//Given an integer n, return a string array answer (1-indexed) where:

//answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
//answer[i] == "Fizz" if i is divisible by 3.
//answer[i] == "Buzz" if i is divisible by 5.
//answer[i] == i (as a string) if none of the above conditions are true.
 
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


