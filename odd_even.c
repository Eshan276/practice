#include<stdio.h>
int main(){
int a[]={2,8,4,0,2};
int i,j=0,k=0;
for(i=0;i<5;++i){
  if(a[i]%2==0){
j=j+1;//even
  }else{
    k=k+1;//odd
  }
}
if(j==0){
  printf("odd");
}else if(k==0){
  printf("even");
}else{
  printf("mixed");
}
return 0;
}
