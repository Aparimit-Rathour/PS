#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c[100000];
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >> c[i];
    }
    int h=-10;
    for(int i=0;i<n;i++)
    {
        if(c[i]>h)
        {
            h=c[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]==h)
        {
            count++;
        }
    }
    cout << count << endl;
}
