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

int findGCD(ll n)
{
    ll sum =0;
    for(ll k = n;k>0;k = k/10)
    sum+= k%10;

    return __gcd(n, sum);
}
int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ll t;
    cin>>t;
    string str1, str2, rev1, rev2;

    while(t--)
    {
        string str;
        cin>>str;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        str1 = 'a' + str;
        rev1 = str1;
        reverse(rev1.begin(), rev1.end());

        str2 = str + 'a'; 
        rev2 = str2;
        reverse(rev2.begin(), rev2.end());

        if(rev1==str1 && str2 == rev2)
        cout<<"NO\n";
        else if(rev1==str1 && str2 != rev2)
        cout<<"YES\n"<<str2<<"\n";
        else if(rev1 != str1 && str2 == rev2)
        cout<<"YES\n"<<str1<<"\n";
        else{
        cout<<"YES\n"<<str1<<"\n";
        }
    }
}