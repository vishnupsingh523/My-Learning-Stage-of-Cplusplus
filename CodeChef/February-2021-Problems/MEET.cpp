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
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {

    sync
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin>>t;
    while(t--)
    {
        string meet;
        string check;
        cin>>meet>>check;
        ll mainTime =0, ch;
        if(check == "PM")
        {
            if((meet[0]=='1'&&meet[1]!='2')||meet[0]=='0')
            {
                mainTime = meet[0]-48;
                mainTime = mainTime*10;
                mainTime = mainTime + (meet[1]-48);
                mainTime = (mainTime + 12)*10 + (meet[3]-48);
                mainTime = mainTime*10 + (meet[4]-48);
            }
            else{
                mainTime = meet[0]-48;
                mainTime = mainTime*10 + (meet[1]-48);
                mainTime = (mainTime)*10 + (meet[3]-48);
                mainTime = mainTime*10 + (meet[4]-48);
            }
        }
        else{
            if(meet[0]=='1'&&meet[1]=='2')
            {
                mainTime = meet[0]-48;
                mainTime = mainTime*10 + 
                (meet[1]-48);
                mainTime = (mainTime - 12)*10 + (meet[3]-48);
                mainTime = mainTime*10 + (meet[4]-48);
            }
            else{
                mainTime = meet[0]-48;
                mainTime = mainTime*10 + (meet[1]-48);
                mainTime = (mainTime)*10 + (meet[3]-48);
                mainTime = mainTime*10 + (meet[4]-48);
            }
        }
        
        int n;
        cin>>n;
        while(n--)
        {
            
        }
    }
        // w(n)
        // {
        //     string value1, ch1;
        //     cin>>value1>>ch1;
            
        //     string value2, ch2;
        //     cin>>value2>>ch2;
        // }
}