#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)
#define endl "\n"

#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    sync
    w(t)
    {
        int n;
        cin>>n;
        int arr[n];

        f(n)
        cin>>arr[i];

        int ans =0;
        bool check =true;

        while(check == true)
        {
            check = false;
            for(int j=0;j<n-1;)
            {
                if(arr[j]>arr[j+1])
                {
                    check = true;
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    j=j+2;
                }
                else
                j++;
            }
            if(check)
            ans++;
        }
        
        cout<<ans<<"  ";
        f(n)
        cout<<arr[i]<<" ";
        cout<<endl;


    }

    return 0;
}