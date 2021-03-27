#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long long n,x;

    while (t--)
    {
        int countE =0, countO = 0;
        int count1 =0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==0)
            countE++;
            else
            countO++;

            if(x==1)
            count1++;
        }

        if(countO%2==0)
        cout<<0<<"\n";
        else if(count1%2==0||count1==0)
        cout<<1<<"\n";
        else
        cout<<-1<<"\n";
    }
}