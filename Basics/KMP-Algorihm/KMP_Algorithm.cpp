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
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int F[1000];
void PrefixTable(st P, int m)
{
    int i=1,j=0;
    while(i<m)
    {
        if(P[i]==P[j])
        {
            F[i]=j+1;
            i++;
            j++;
        }
        else if(j>0){
            j = F[j-1];
        }
        else{
            F[i]=0;
            i++;
        }
    }

}
 
int KMP(st T, int n, st P, int m)
{
    int i=0,j=0;
    while(i<n)
    {
        if(T[i]==P[j])
        {
            if(j == m-1)
            return i-j;
            else{
                i++;
                j++;
            }
        }
        else if(j>0)
                j=F[j-1];
            else
            i++;
    }
    return -1;
}

int main() {
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
    sync
    
    int test;
    st pattern, str;
    cin>>test;
    int psize, tsize;
    
    while(test--)
    {
        cin>>str;

        cin>>pattern;

        PrefixTable(pattern, pattern.size());
        int check = KMP(str, str.size(), pattern, pattern.size());
        if(check == -1)
        cout<<"\nThe pattern doesn't exists in the String.\n";
        else
        cout<<"\nThe Pattern is found successfully!!!\n";
    }
    
 
}