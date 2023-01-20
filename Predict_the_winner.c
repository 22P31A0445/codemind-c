#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,n,m,ar[10],c=0,ar1[50],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            s=s+ar[i];
            
        }
        else
        {
            c=c+ar[i];
        }
    }
    m=abs(s-c);
    if(m%4==0)
    {
        printf("X");
    
    }
    else
    {
        printf("Y");
        
    }
    
}