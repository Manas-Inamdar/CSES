#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int n;
    cin>>n;
    vector<lli>arr(n);
    lli mini=LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mini=min(mini,arr[i]);
    }

    lli curr=0;
    lli ans=mini;

    for(int i=0;i<n;i++)
    {
        curr+=arr[i];
        ans=max(ans,curr);
        if(curr<0){
            curr=0;
        }
    }
    if(ans==0)
    {
        cout<<mini;
        return 0;
    }
    cout<<ans;

    return 0;
}