#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long long n,x;

    while (t--)
    {
        cin>>n>>x;
        long long space, rating;
        long long best = LONG_LONG_MIN;
        while(n--)
        {
            cin>>space>>rating;
            if(space<=x)
            if(rating > best)
            best = rating;
        }
        cout<<best<<"\n";
    }
    
}