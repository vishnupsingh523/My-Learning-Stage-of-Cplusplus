#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define vl vector<long long>
#define ll long long
#define fl float
#define db double
#define st string

#define ll long long

int main() {
    int T;
    ll n;
    cin>>T;
    
    while(T--)
    {
        cin>>n;
        st a;
        cin>>a;
        
        for(int i=0;i<n;i+=4)
        {
            if(a[i]=='0')
            {
                if(a[i+1]=='0')
                {
                    if(a[i+2]=='0')
                    {
                        if(a[i+3]=='0')
                        cout<<'a';
                        else
                        cout<<'b';
                    }
                    else
                    {
                        if(a[i+3]=='0')
                        cout<<'c';
                        else
                        cout<<'d';
                    }
                }
                else
                {
                    if(a[i+2]=='0')
                    {
                        if(a[i+3]=='0')
                        cout<<'e';
                        else
                        cout<<'f';
                    }
                    else
                    {
                        if(a[i+3]=='0')
                        cout<<'g';
                        else
                        cout<<'h';
                    }
                }
            }
            else
            {
                if(a[i+1]=='0')
                {
                    if(a[i+2]=='0')
                    {
                        if(a[i+3]=='0')
                        cout<<'i';
                        else
                        cout<<'j';
                    }
                    else
                    {
                        if(a[i+3]=='0')
                        cout<<'k';
                        else
                        cout<<'l';
                    }
                }
                else
                {
                    if(a[i+2]=='0')
                    {
                        if(a[i+3]=='0')
                        cout<<'m';
                        else
                        cout<<'n';
                    }
                    else
                    {
                        if(a[i+3]=='0')
                        cout<<'o';
                        else
                        cout<<'p';
                    }
                }
            }
            
        }

        cout<<"\n";
    }
}