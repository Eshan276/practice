#include <stdio.h>
int main(){
    int arr[]={4,2,8,6};
    int i, n=4,j;
    for(i=0;i<n;i++){
if(arr[i]%2==0){
    j++;
}else{
    j=0;
    break;
}
    }
    if(j==0){
        printf("no");
    }else{
        printf("yes");
    }
    return 0;
}
