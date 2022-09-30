#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,d,m,s,count=0,spend=0;
    cin >> p >> d >> m >> s;
    int disc =-1;
    int effprice =-1;
    
    while(spend<=s)
    {
        disc=count*d;
        effprice = p-disc;
        if(effprice < m)
        {
            effprice = m;
        }
        spend=spend+effprice;
        count++;
    }
    cout << count-1 << endl;
}
