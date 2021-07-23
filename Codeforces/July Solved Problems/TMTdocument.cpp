#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        string s;
        string str = "TMT";
        cin>>s;
        int i=0;
        int tChars =0, mChars=0;
        for(i=0;i<n;i++)
        if(s[i]=='T')
        tChars++;
        else
        mChars++;

        if(mChars==n/3 && tChars==(n/3)*2)
        {
                    
        }
        else
        cout<<"NO\n";
    }
}