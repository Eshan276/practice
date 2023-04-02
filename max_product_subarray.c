#include <stdio.h>
int main(){
    int i,n=5,pprod=1,nprod=1,ncount=0,flag=0,max=0;
   int a[]={-1,-3,-60,10,0};
   for(i=0;i<n;i++){
    if(a[i]>0){
       pprod=pprod*a[i];
    }else if(a[i]<0){
        nprod=nprod*a[i];
       ncount++;
        if(flag==0){
          max=a[i];
          flag=1;
        }else{
            if(max<a[i]){
                max=a[i];
            }
        }
    }
   }
   if(ncount==0){
    printf("max product: %d",pprod);
   }else if(ncount>0 && ncount%2==0){
     printf("max product: %d",pprod*nprod);
   }else if(ncount>0 && ncount%2==1){
       printf("max product: %d",(pprod*nprod)/max);
   }
return 0;
}
