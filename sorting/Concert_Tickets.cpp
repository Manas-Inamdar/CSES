#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n, m;
    cin >> n >> m;
    vector<lli> h(n);
    vector<lli> t(m);
    map<lli,lli> st;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        st[h[i]]++;
    }
    for (int i = 0; i < m; i++)
        cin >> t[i];

    for (int i = 0; i < m; i++)
    {
        auto it = st.upper_bound(t[i]);
        if (it != st.begin())
        {
            it--;
            lli k=((*it).first);
            st[k]--;
            if(st[k]==0)
            {
                st.erase(k);
            }   
            cout<<k<<endl;
        }
        else 
        {
            cout<<"-1 "<<endl;
        }
        
    }

    return 0;
}