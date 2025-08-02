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
        arr.push_back({outtime[i],intime[i]});
        // arr.push_back({outtime[i],-1});
    }

    sort(arr.begin(),arr.end());

    int cnt=0;
    int start=-1;
    int end=-1;
    for(int i=0;i<n;i++)
    {
        if(start==-1)
        {
            start=arr[i].second;
            end=arr[i].first;
            cnt++;
        }
        else if(arr[i].second>=end)
        {
            start=arr[i].second;
            end=arr[i].first;
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}