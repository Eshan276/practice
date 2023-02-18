#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4, 5};
    int i;
    int j=0;
    // Compare each element of the arrays
    for(i = 0; i < 5; i++) {
        if(array1[i] != array2[i]) {
           j=j+1;
        }
    }
    
    if(j>>0){
        printf("arrays are not equal");
    }else{
        printf("arrays are equal");
    }
    
    return 0;
}
//for(i = 0; i < 5; i++) {
       // if(array1[i] != array2[i]) {
         //   printf("Arrays are not equal\n");
           // return 0;}}
