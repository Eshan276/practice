#include<stdio.h>
int main(){
    int a[5]={1,4,1,4,4};
    int i, j,n=5,k,m=0,x; //n is array size can be taken via scanf
    for(i=0;i<n;i++){    //TO FIND HOW MANY ELEMENTS ARE REPEATING?@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
      for(j=i+1;j<5;j++){
        if(a[i]==a[j] && j!=i){  //for(x=j;x<4;x++){a[x]=a[x+1];}
          m=m+1;
           break;
        }
      }
  }
    
  for(i=0;i<(n-1);i++){
      for(j=n-1;j>0;j--){
        if(a[i]==a[j] && j!=i){  //for(x=j;x<4;x++){a[x]=a[x+1];}
          
           for(x=j;x<n-1;x++){
            a[x]=a[x+1];
            }
        }
      }
  }
for(k=0;k<(n-m);k++){
printf("%d,",a[k]);
  }
return 0;
}
