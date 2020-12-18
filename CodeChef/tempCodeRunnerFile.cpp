#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> money;
    vector<int> F;
    vector<int> P;
    vector<int> S;

    int T,M,N;
    cin>>T;
    cin>>M>>N;
    int K;
    for(int j=0;j<T;j++)
    {
        money.clear();
        F.clear();
        P.clear();
        S.clear();
        
    for(int i=0;i<M;i++)
    {
        cin>>K;
        money.push_back(K);
        F.push_back(K);

    }
    for(int i=0;i<M;i++)
    {
        cin>>K;
        P.push_back(K);

    }
    vector<int>::iterator ip;
    sort(money.begin(),money.end());
    ip= unique(money.begin(),money.end());
    money.resize(distance(money.begin(),ip));
    int s[money.size()];
    for(int i=0;i<money.size();i++)
    {
        for(int k=0;k<P.size();k++)
        {
            if(money[i]==F[k])
            s[i]+=P[k];
        }
        S.push_back(s[i]);
    }
    cout<<*min_element(S.begin(),S.end());
}
    return 0;
}