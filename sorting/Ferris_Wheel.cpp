#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n, x;
    cin >> n >> x;
    vector<lli> p(n);
    for (lli i = 0; i < n; i++)
        cin >> p[i];
    sort(p.begin(), p.end());
    int cnt=0;

    int l=0;
    int r=n-1;

    while(l<r)
    {   
        int a=p[l];
        int b=p[r];

        if(a+b>x)
        {
            r--;
            cnt++;
        }

       else  if(a+b<=x)
        {
            l++;
            r--;
            cnt++;
        }
        else if(a<=x)
        {
            l++;
            cnt++;
        }
    }
    if(l==r)
    {
        if(p[l]<=x)
            cnt++;

    }   
    


    cout<<cnt<<endl;
    return 0;
}