#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[10000];
       
    for(int k=1;k<=t;k++)
    {
        int m,n;
        cin >>m >> n;
        
        for(int l=0;l<n;l++)
        {
            cin >>a[l];
        }
        
        for(int i=0; i<n;i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if((a[i]+a[j]) == m)
                {
                    cout << i+1 << " ";
                    cout << j+1 << " ";
                }
            }
        }
        cout << endl;
    }
}
