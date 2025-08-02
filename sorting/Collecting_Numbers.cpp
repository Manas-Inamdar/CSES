#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int n;
    cin>>n;
    vector<pair<lli,lli>>arr;

    for(int i=0;i<n;i++)
    {
        lli temp;
        cin>>temp;

        arr.push_back({temp,i});
    }
    lli cnt=1;
    sort(arr.begin(),arr.end());

    for(lli i=1;i<n;i++)
    {
        if(arr[i].second<arr[i-1].second)
        {
            cnt++;
        }
    }
    cout<<cnt;  

    return 0;
}