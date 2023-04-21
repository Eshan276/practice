#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[100000];         //n is total no of string
    int n;
    int arr[100000], i, k,j,length=0,count=0,temp,temp1=0,temp2=0,high=0,flag=0,result[100000] ;
    scanf("%d", &n);
    for( i = 0; i < n; i++){
        scanf("%s", s);
        length= strlen(s);                               //printf("\n%d,s[0]= %d\n",strlen(s),s[0]);
        for(j=0;j<length;j++){
            arr[j]=(int)s[j]-48;
        }
        //-----------------
        if(length==0){
        result[i]=0;
 }else if(length==1){
        if(arr[0]==1){
            result[i]=1;
        }else{
            result[i]=0;
        }
     }else{
         for(k=1;k<=length;k++){
            count=0;
        if(k!=1){
            temp=arr[0];
            for(j=0;j<length-1;j++){          //circular shift
            arr[j]=arr[j+1];
            }

            arr[length-1]=temp;
        }
         for(j=0;j<length-1;j++){
            if(arr[j]==0){
                if(temp1<temp2){        //checking bigger duplocate
                    temp1=temp2;
                }
                count=0;
            }else{
          if(arr[j]==1 && arr[j+1]==1){
             count=count+1;                  //counting duplicate
          }
         }
          if(temp2<count){        //checking bigger duplocate
            temp2=count;
         }
        // printf("*%d*j= %d\n",count,j);
         
         
         }
          if(temp1<temp2){                     //last check
            temp1=temp2;
        }
   
    }
     if(temp1==0){
      for(j=0;j<length;j++){
        if(arr[j]==1){
          flag=1;
          break;
        }
      }
      if(flag==1){
         result[i]=1;
         flag=0;
      }else{
         result[i]=0;
      }
    }else if(temp1==length-1){
        result[i]=length*length;
    }
    else{
      /*if(high<temp1){
        high=temp1;
        temp1=0;
      }
      printf("%d*\n",temp1*2);*/
      k=2;
      high=0;
      for(j=temp1;j>=1;j--){
        if(high<j*k){
          high=j*k;
        }
        k++;
      }
      result[i]=high;
      
    }
    temp1=0;
    temp2=0;
    }
   
    }
    for( i = 0; i < n; i++)
    printf("%d\n",result[i]);
    return 0;
}
