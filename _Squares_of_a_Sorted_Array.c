#include <stdio.h>
#include <math.h>
int main()
{
    int n,a[10],i,t,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        a[i]=pow(a[i],2);
        
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                
            }
            
        }
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    
    }
    
}