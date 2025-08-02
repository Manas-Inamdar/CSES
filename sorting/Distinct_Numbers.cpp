#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    // vector<int>v;
    set<lli>st;
    for(int i=0;i<n;i++)
    {
        lli t;
        cin>>t;
        st.insert(t);
    }
    cout<< st.size();
}