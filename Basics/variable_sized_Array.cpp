#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,q;
    int k;

    cin>>n>>q;
    int a[n][100];
    int b[q],c[q];

    for(int i=0;i<n;i++)
    {
        cin>>k;
        cout<<"enter values:";
        for(int j=0;j<k;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<q;i++)
    {
        cin>>b[i]>>c[i];
    }

    for(int i=0;i<q;i++)
    {
        cout<<a[b[i]][c[i]]<<endl;
    }

    return 0;
}