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
        string mainTime, check;
        cin>>mainTime>>check;
        if(mainTime[0]=='1'&&mainTime[1]=='2')
            {
                mainTime[0]='0';
                mainTime[1]='0';
            }
        int n;
        cin>>n;
        while(n--)
        {
            string checkTime1,checkTime2;
            string check1,check2;
            cin>>checkTime1>>check1;
            cin>>checkTime2>>check2;

            if(checkTime2[0]=='1'&&checkTime2[1]=='2')
            {
                checkTime2[0]='0';
                checkTime2[1]='0';
            }
            if(checkTime1[0]=='1'&&checkTime1[1]=='2')
            {
                checkTime1[0]='0';
                checkTime1[1]='0';
            }

            if(check[0]>=check1[0])
            {
                if(mainTime[0]>=checkTime1[0]&&mainTime[1]>=checkTime1[1])
                {
                    if(mainTime[3]>=checkTime1[3])
                    {
                        if(mainTime[4]>=checkTime1[4])
                        {
                            if(mainTime[0]<=checkTime2[0]&&mainTime[1]<=checkTime2[1]&&check[0]<=check2[0])
                            {
                                if(mainTime[3]<=checkTime2[3]&&mainTime[4]<=checkTime2[4])
                                cout<<'1';
                                else
                                cout<<'0';
                            }
                            else cout<<'0';
                        }
                        else
                        {
                            if(mainTime[0]<=checkTime2[0]&&mainTime[1]<=checkTime2[1]&&check[0]<=check2[0])
                            {
                                if(mainTime[3]<=checkTime2[3]&&mainTime[4]<=checkTime2[4])
                                cout<<'1';
                                else
                                cout<<'0';
                                }
                            else cout<<'0';
                        }
                    }
                    else
                    {
                        if(mainTime[0]<=checkTime2[0]&&mainTime[1]<=checkTime2[1]&&check[0]<=check2[0])
                        {
                            if(mainTime[3]<=checkTime2[3]&&mainTime[4]<=checkTime2[4])
                            cout<<'1';
                            else
                            cout<<'0';
                        }
                        else cout<<'0';
                    }
                }
                else cout<<'0';
            }
            else cout<<'0';
        }
        cout<<"\n";
    }
}