#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string first[m],second[m];
    string result[n];
    
    for(int i=0;i<m;i++)
        cin>>first[i]>>second[i];

    for(int i=0;i<n;i++)
        cin>>result[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        if(result[i]==first[j]||result[i]==second[j])
        if(first[j].length()<=second[j].length())
        result[i]=first[j];
        else
        result[i]=second[j];
        
        cout<<result[i]<<" ";
    }
}