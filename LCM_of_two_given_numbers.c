#include<stdio.h>
int main()
{
    int i,m,n;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        if(i*m%n==0)
        {
            printf("%d",i*m);
            break;
        }
    }
}