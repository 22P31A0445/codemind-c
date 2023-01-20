#include <stdio.h>
int main()
{
    int n,ar[10],i,s=0,c=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(ar[i]<=t)
        {
            c++;
        }
        if(ar[i]>t)
        {
            s++;
        }
    }
    printf("%d",c+2*s);
}