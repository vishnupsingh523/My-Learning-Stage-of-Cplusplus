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
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    st str;
    cin>>str;

    int h=0, e=0, l=0, o=0;

    for(int i = 0;i<str.size(); i++)
    {
        if(str[i]!='h'&&str[i]!='e'&&str[i]!='l'&&str[i]!='o')
        {
            str.erase(str.begin()+i);
            i--;
        }
        else if(str[i]=='h'&& h==0)
        h++;
        else if(str[i]=='e'&& h==1 && e==0)
        e++;
        else if (str[i] == 'l'&& h==1&& e==1 && l<2)
        l++;
        else if(str[i] == 'o'&& h==1&& e==1 && l==2 && o==0)
        o++;
        else
        {
            str.erase(str.begin()+i);
            i--;
        }
    }

    if(str == "hello")
    cout<<"YES";
    else
    cout<<"NO";
}