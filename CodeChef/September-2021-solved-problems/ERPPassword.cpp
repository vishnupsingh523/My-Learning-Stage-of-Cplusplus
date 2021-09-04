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
#define endl "\n"
 
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
        st str;
        st special = "@#%&?";
        cin>>str;

        bool ch1= false, ch2=false, ch3=false, ch4=false;

        
        if(str[0]>='a'&&str[str.size()-1]<='z'&&str.size()>=10)
       {
           for(int i=0;i<str.size();i++)
            {
                if(ch1==false)
                if(str[i]>='a'&& str[i]<='z')
                {
                    ch1 = true;
                    break;
                }
            }
            if(ch1)
            {
                for(int i=0;i<str.size();i++)
                {
                    if(ch2==false)
                    if(str[i]>='A'&& str[i]<='Z')
                    {
                        ch2 = true;
                        break;
                    }
                }

                
                if(ch2)
                {
                    for(int i=0;i<str.size();i++)
                    {
                        if(ch3==false)
                        if(str[i]>='0'&& str[i]<='9')
                        {
                            ch3 = true;
                            break;
                        }
                    }
                    
                    if(ch3)
                    {
                        for(int i=0;i<str.size();i++)
                        {
                            for(int j=0;j<5;j++)
                            if(str[i]== special[j])
                            {
                                ch4 = true;
                                break;
                            }
                        }
                        if(ch4)
                        cout<<"YES\n";
                        else
                        cout<<"NO\n";                    
                    }
                    else
                    cout<<"NO\n";
                    
                }
                else
                cout<<"NO\n";
            }
            else
            cout<<"NO\n";
       }
        else
        cout<<"NO\n";
    }
}