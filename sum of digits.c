#include <stdio.h>
int main(){
int n;
int i=10,j;
int sum=0;
    scanf("%d", &n);

while(n/i!=0){
i=i*10;
}
i=i/10;

while(i>=1){
j=n/i;
if(j==0){
i=i/10;
}else{
n=n-(j*i);
sum=sum+j;
i=i/10;
}
//printf("%d %d %d %d\n",j,n,sum,i);
}
printf("%d",sum);



    return 0;
}
