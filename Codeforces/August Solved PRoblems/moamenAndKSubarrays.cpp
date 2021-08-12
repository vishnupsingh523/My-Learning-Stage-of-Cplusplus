#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)
#define fo(value, size) for(int j = value; j<size;j++)


void run() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// #else
// #endif
}

int main()
{
    run();
    w(t)
    {
        int k,n;
        cin>>n>>k;

        vector<pair<int,int>> arr;
        ll value;
        f(n)
        {
            cin>>value;
            arr.push_back({value,i});
        }
        
        sort(arr.begin(), arr.end());
        ll ans =1;
        auto prev = arr.begin();
        for(auto itr = arr.begin()+1;itr!=arr.end(); itr++)
        {
            if(itr->second  != prev->second+1)
            ans++;
            prev = itr;
        }

        if(ans <= k)
        cout<<"Yes\n";
        else
        cout<<"No\n";

    }
}