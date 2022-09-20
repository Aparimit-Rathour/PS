#include<stdio.h>
int main()
{
    int a[10]={2,3,1,5,6,15,30,7,8,9};
    int b[10]={1,2,3,4,5,6,7,8,9,10};
    int n1=10,n2=10;
    int c[10],d[10],m=0,k=0,n=0,l,i,j,sy[100];
    
    for( i=0;i<n1;i++)//a-b
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {
            
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
        
    }
    
    for( i=0;i<n2;i++)//b-a
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
            for(l=0;l<m;l++)
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==m)
            {
                d[m]=b[i];
                m++;
            }
        }
        
    }
    
    for(i=0;i<k;i++)
    {
        sy[n]=c[i];
        n++;
    }
    for(i=0;i<m;i++)
    {
        sy[n]=d[i];
        n++;
    }
    
    printf("\nsymmetric Difference of sets is:-\n");
    for(i=0;i<n;i++)
     printf("%d ",sy[i]);
    return 0;
    
}