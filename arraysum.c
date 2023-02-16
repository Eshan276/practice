#include <stdio.h>
int main(){     //sum of array
int a[5]={2,3,4,7,1};
int i;
int sum=0;
for(i=0;i<=4;++i)
{
sum=sum+a[i];

}
printf("%d",sum);
  return 0;
}
