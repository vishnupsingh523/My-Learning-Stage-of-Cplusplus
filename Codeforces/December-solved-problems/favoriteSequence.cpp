#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define ll long long
#define fl float
#define db double
#define st string

int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        vi values;
        for(int i=0,j=n-1; i<n&&j>=0&&j>=i;i++,j--)
        {
            if(i!=j)
            {
                values.push_back(arr[i]);
                values.push_back(arr[j]);
            }
            else
            {
                values.push_back(arr[j]);            }
            
        }
        
        for(int i=0;i<n;i++)
        cout<<values[i]<<" ";
        cout<<endl;
    }
}