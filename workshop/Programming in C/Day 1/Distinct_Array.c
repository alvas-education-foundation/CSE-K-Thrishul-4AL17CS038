#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter the Array Size :\n");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    printf("Enter the Array Elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",(a+i));
    printf("Distinct Elements in Array :\n");
    for (i=0;i<n;i++)
    {
        for (j=0; j<i; j++)
        {
            if (a[i] == a[j])
                break;
        }
        if (i == j)
            printf("%d ", a[i]);
    }
    return 0;
}