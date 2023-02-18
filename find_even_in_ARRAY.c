#include<stdio.h>//find which are even
int main(){
int a[]={2,3,4,0,2};
int b[50];
int i,j=0,k=0;

int size;
for(i=0;i<5;++i){
  if(a[i]%2==0){
b[j]=a[i];
j=j+1;
  }
}

k=j;
for(j=0;j<k;++j){
  printf("%d,",b[j]);
}
return 0;
}
