#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)


int closestLeft(int arr[])
{
    f(10)
    if(arr[i]==0)
    return i;
}
int closestRight(int arr[])
{
    for(int i=9;i>=0;i--)
    if(arr[i]==0)
    return i;
}

int main()
{
    int arr[10]={0};
    int n;
    string str;
    cin>>n;
    cin>>str;

    for(int i=0;i<n;i++)
    {
        if(str[i]=='L')
        arr[closestLeft(arr)] = 1;
        else if(str[i]=='R')
        arr[closestRight(arr)] = 1;
        else
        arr[str[i]-48] = 0;
        
        // for(int j=0;j<10;j++)
        // cout<<arr[j];
        // cout<<endl;
    }
   
   f(10)
   cout<<arr[i];
}