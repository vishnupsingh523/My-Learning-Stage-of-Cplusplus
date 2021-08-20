#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)
#define endl "\n";
int main()
{
    int arr[1001]={0};
    int count =1;
    for(int i=1;count<=1666;)
    {
        if(count%10 != 3 && count % 3 != 0)
        {
            arr[i] = count;
            i++;
        }
        count++;
    }

    w(t)
    {
        int n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
    
}