#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> value;
    vector<int>:: iterator it;
    int t,a,x;
    cin>>t;

    int length[t];

    for(int i=0;i<t;i++)
    {
        value.erase(value.begin(),value.end());
        cin>>a;
        for(int j=0;j<a;j++)
        {
            cin>>x;
            value.push_back(x);
        }
        sort(value.begin(),value.end());
        it=unique(value.begin(),value.begin()+a);
        value.resize(distance(value.begin(),it));
        length[i]=value.size();
    }
    for(int j=0;j<t;j++)
    {
        cout<<length[j]<<endl;
    }

    return 0;
}