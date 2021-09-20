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
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    st s1 = "()";
    w(t)
    {
        int n;
        cin>>n;
        if(n!=2&&n!=1)
        {
            for(int i=0;i<n;i++)
            {
                if(i==0)
                {
                    for(int j=0;j<n;j++)
                    cout<<s1;
                }
                else
                {
                    for(int j=0;j<i-1;j++)
                    cout<<"()";
                    cout<<"(())";
                    for(int j=i+1;j<n;j++)
                    cout<<"()";
                
                }
                cout<<endl;
            }
        }
        else if(n==1)
        cout<<s1<<endl;
        else if(n==2)
        cout<<"()()"<<endl<<"(())"<<endl;
    }
    
}