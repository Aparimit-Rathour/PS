//A-B
#include<stdio.h>
int main()
{
    int ab[5];
    int ba[5];
    int i,j;
    int k=0;
    int a[8]={2,3,1,5,6,15,30,7};
    int b[10]={1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<8;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i]==b[j])
            break;
        }
        if(j==10)
        {
            printf("%d ",a[i]);
        }
    }
}