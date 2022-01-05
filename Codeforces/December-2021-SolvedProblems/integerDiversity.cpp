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

int main() {
    sync

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[101];
        int value;
        for(int i=0;i<101;i++)
        arr[i]=0;

        while(n--)
        {
            cin>>value;
            if(value<0)
            arr[-value]++;
            else
            arr[value]++;
        }

        int count=0;

        if(arr[0]>=1)
        count++;
        for(int i=1;i<101;i++)
        if(arr[i]>=2)
        count+=2;
        else
        count+=arr[i];
        cout<<count<<endl;
    }
    
}