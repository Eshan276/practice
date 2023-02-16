#include <stdio.h>

int main() {
    int i,n,a[100];
    int j=1;
    int k=1;
    printf("How many terms your series has?\n");
    scanf("%d", &n);
    printf("---------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("elemnet %d=> ", j);
        j=j+1;
        scanf("%d",&a[i]);
    }
    j=1;
    i=0;
    printf("----------------------------\nThe series is-\n");
for(i;i<n;i++)
{
printf("elemnt %d=> %d\n",j,a[i]);
j=j+1;
}
return 0;
}
