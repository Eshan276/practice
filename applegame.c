#include <stdio.h>//@@TURN-WISE

int main(){
int n,i,j,win=0,pos1,pos2;     //pos1- is checkpoint,n=no of apples,win- win condition             
printf("enter no of apples:\n");
scanf("%d",&n);
int a[n];
printf("enter which aples are present sequentially");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
/*n=4;
int a[4]={5,3,15,30};*/
for(i=1;win==0;i++){
if(i%2==1){
    pos1=0;
    pos2=0;
    for(j=0;j<n;j++){
       if(a[j]%15==0 && a[j]>0){
           a[j]=-1;
        pos1=1;
        pos2=1;
        break;
       }
        }
    
        for(j=0;j<n && pos2==0;j++){
         if(a[j]%3==0 && a[j]>0){
           a[j]=-1;
        pos1=1;
        break;
         }
        }
    
    if(pos1==0){
        win=1;
    }
    }

if(i%2==0){
    pos1=0;
    pos2=0;
    for(j=0;j<n;j++){
        if(a[j]%15==0 && a[j]>0){
           a[j]=-1;
        pos1=1;
        pos2=1;
        break;
        }
        }
    
        for(j=0;j<n && pos2==0;j++){
         if(a[j]%5==0 && a[j]>0){
           a[j]=-1;
        pos1=1;
        break;
         }
        }
     
    if(pos1==0){

        win=2;
    }
    }

}

//printf("%d",win);
  if(win==1){
    printf("alice lost");
  }else if(win==2){
    printf("bob lost");
  }  
    return 0;
}
