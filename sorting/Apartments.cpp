#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
        int n,m,k;
        cin>>n>>m>>k;
        int cnt=0;
        int apt=0;
        int per=0;
        vector<lli>tenants(n);
        vector<lli>apart(m);
        
        for(int i=0;i<n;i++)cin>>tenants[i];
                for(int i=0;i<m;i++)cin>>apart[i];


        sort(tenants.begin(),tenants.end());
        sort(apart.begin(),apart.end());

        while(apt<m && per<n)
        {
            if(abs(tenants[per]-apart[apt])<=k)
            {
                per++;
                apt++;
                cnt++;
            }
            else
            {
                if((tenants[per]-apart[apt])>k)
                {
                    apt++;
                }
                else per++;
            }
        }
        cout<<cnt;
    return 0;
}