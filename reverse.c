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
    i=i-1;
printf("---------------------------\nNow we are going to reverse the series.\n");
for(i;i>=0;i--)
{
    printf("elemnet %d=> %d\n", k,a[i]);
    k=k+1;
}
    return 0;
}
