
#include <stdio.h>
#include <math.h>
int main()
{
    int n,ar[10],list[10]={0},i,j,d,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        d=log10(ar[i])+1;
        if(d%2==0)
        c++;
    }
    printf("%d",c);
    
}
