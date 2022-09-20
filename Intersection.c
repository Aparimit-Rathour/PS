#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={4,5,6,7,8,};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i]==b[j])
            printf("%d ",a[i]);
        }
    }
}