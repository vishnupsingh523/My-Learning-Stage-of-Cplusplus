#include<bits/stdc++.h>

using namespace std;

int main(){
    string  check[] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    string str;
    int n;

    cin>>n;
    cin>>str;
    int sc =0;
    for(int i=0;i<n;i++)
    if(str[i]!='.')
    sc++;

    for(int k = 0;k<check->size();k++)
    {
        int count =0;
        int ch =0;
        if(str.size()==check[k].size())
        {
            for(int i=0, j=0;i<n&&j<check[k].size();i++,j++)
            {
                if(str[i]!='.'&& str[i]==check[k][j])
                count++;
                else if(str[i]!='.')
                ch++;
            }
        }

        if(sc == count&&ch==0)
        {
            cout<<check[k];
            break;
        }
    }
}