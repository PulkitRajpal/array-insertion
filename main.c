#include <stdio.h>
#include <stdlib.h>

int main()
{int a[20],i,n,val,pos;
    printf("enter the no of elements of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {printf("enter elements in array");
        scanf("%d",&a[i]);
    }
    printf("enter pos ");
    scanf("%d",pos);
    printf("enter the value");
    scanf("%d",val);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i]=a[i-1];
    }
    n++;
    a[pos]=val;
    for(i=0;i<n;i++)
    {
    printf(" %d",a[i]);
    }
    return 0;
}
