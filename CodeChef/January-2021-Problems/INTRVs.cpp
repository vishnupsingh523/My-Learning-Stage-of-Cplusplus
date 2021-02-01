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

#define w(n) int n;cin>>n;while(n--)
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {

    sync

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int rejected =0;
        int slow =0;
        int stime =0;
        int solved =0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==-1)
            rejected++;
            else if(a>k)
            {
                solved++;
                slow++;
            }
            else if(a<=1&&a>-1)
            {
                stime++;
                solved++;
            }
            else 
            solved++;
        }
        int ceil = (n%2==0)?n/2:(n+1)/2;

        // cout<<endl<<endl<<"Solved:"<<solved;
        // cout<<endl<<"Ceil:"<<ceil;
        // cout<<endl<<"slow:"<<slow;
        // cout<<endl<<"Solve time:"<<stime<<endl;

        if(solved < ceil)
        cout<<"Rejected\n";
        else if(slow)
        cout<<"Too Slow\n";
        else if(stime==n)
        cout<<"Bot\n";
        else
        cout<<"Accepted\n";
    }
    
    
}