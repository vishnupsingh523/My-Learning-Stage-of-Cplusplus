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

#define fon(x,n) for(auto i=x;i<n;i++)
#define w(x) int x;cin>>x;while(x--)
#define endl "\n"
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool divisible(int value, vi arr)
{
    int cnt =0;
    for(int i=0;i<6;i++)
    if(value%arr[i]==0)
    cnt++;

    if(cnt==6)
    return true;
    else
    return false;
}

bool allDifferent(int value, vi arr)
{
    for(int i=1;i<6;i++)
    if(arr[i]==arr[i-1])
    return false;
    
    return true;
}

vector<int> nums(int value)
{
    vi arr;
    for(int i=0;i<6;i++)
    {
        arr.push_back(value%10);
        value = value/10;
    }
    sort(arr.begin(), arr.end());
    return arr;
}
int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int l, h, count=0;
    cin>>l>>h;
    
    for(ll i=l;i<=h;i++)
    {
        vi arr;
        arr = nums(i);

        if(allDifferent(i, arr)==true)
        {
            if(divisible(i, arr)==true)
            {
                count++;
                cout<<count<<" ";
            }
        }
    }

    
    cout<<count;
}