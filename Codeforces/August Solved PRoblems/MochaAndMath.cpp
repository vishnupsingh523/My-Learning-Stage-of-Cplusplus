#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)

int main()
{
    w(t){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        f(n)
        {
            int val;
            cin>>val;
            arr[i] = val;
        }

        for(int i=0,j=n-1; i<j ;i++,j--)
        {
            arr[i] = (arr[i]&arr[j]);
            arr[j] = (arr[i]&arr[j]);
        }

        cout<<*min_element(arr.begin(), arr.end())<<"\n";
    }
    
}