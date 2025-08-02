#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,x;
    cin>>n>>x;
    vector<pair<lli,lli>>arr(n);
    for(int i=0;i<n;i++){
        lli temp;
        cin>>temp;
        arr[i]={temp,i};
    }

    sort(arr.begin(),arr.end());

    int l=0;
    int r=n-1;

    while(l<r)
    {
        int p=arr[l].first;
        int q=arr[r].first;
        
        if(p+q==x)
        {
            vector<lli> ans={arr[l].second+1,arr[r].second+1};
            sort(ans.begin(),ans.end());
            cout<<ans[0]<<" "<<ans[1];
            return 0;
        }
        else if(p+q<x)
        {
            l++;
        }
        else r--;
    }
    cout<<"IMPOSSIBLE";

    return 0;
}