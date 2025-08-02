#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int n;
    cin>>n;
    vector<lli>intime(n);
    vector<lli>outtime(n);
    vector<pair<lli,lli>>arr;
    for(int i=0;i<n;i++)
    {
        cin>>intime[i]>>outtime[i];
        arr.push_back({intime[i],1});
        arr.push_back({outtime[i],-1});
    }
    int cnt=0;
    int ans=0;
    sort(arr.begin(),arr.end());

    for(int i=0;i<2*n;i++)
    {
        cnt+=arr[i].second;
        ans=max(ans,cnt);
        if(cnt<0)
        {
            cnt=0;
        }
    }
    cout<<ans;

    return 0;
}