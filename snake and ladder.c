#include <stdio.h>
int main(){
int i=0,j=100,r;                           //SNAKE AND LADDER TABLE
while(j>10){
    if(j%2==0){
for(i=0;i<10;i++){
printf("%d ",j);
j--;
}
printf("\n");
j=j-9;
}else{
for(i=0;i<10;i++){
printf("%d ",j);
j++;
}
printf("\n");
 j=j-11;   
}
}
for(r=1;r<=10;r++){
    printf("%d  ",r);
}
    return 0;
}
