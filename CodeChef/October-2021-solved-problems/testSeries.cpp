#include<bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define vll vector<long long>
#define ll long long
#define fl float
#define db double
#define st string

#define w(x) int x;cin>>x;while(x--)
#define endl "\n"
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll arr;
        int count1=0,count2=0;

        for(int i=0;i<5;i++)
        {
            cin>>arr;
            if(arr==1)
            count1++;
            else
            if(arr==2)
            count2++;
        }

        if(count1==count2)
        cout<<"DRAW\n";
        else if(count1>count2)
        cout<<"INDIA\n";
        else
        cout<<"ENGLAND\n";
    }
}