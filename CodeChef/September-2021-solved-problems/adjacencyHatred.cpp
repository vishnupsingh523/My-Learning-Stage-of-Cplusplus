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

void arrFill(int * arr, int n)
{
    for(int i=0;i<n;i++)
    arr[i] =0;
}
int main() {
    sync
    
    w(t)
    {
        ll n;
        cin>>n;
        ll arr[n];

        vll odd, even;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            even.push_back(arr[i]);
            else
            odd.push_back(arr[i]);
        }

        int od = odd.size(), ev = even.size();
        if(n%2==0)
        { 
                for(int i=0;i<od;i+=2)
                {
                    arr[i] = odd[i];
                    arr[i+1] = even[i];
                }
        }   
        else
        {
                for(int i=0;i<ev;i+=2)
                {
                    arr[i] = odd[i];
                    arr[i+1] = even[i];
                }
                arr[n-1] = odd[od-1];
        }

        ll sum =0;

        for(int i=0;i<n-1;i++)
        sum += abs(arr[i]-arr[i+1]);

        if(sum%2==0)
        cout<<-1;
        else
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
        
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    }
}