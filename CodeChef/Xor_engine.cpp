#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{

    int a,b,c;
    int T;
    cin>>T;
    int N,Q;
    cin>>N>>Q;
    int A[N],P[Q];
    for(int j=0;j<T;j++)
    {
        
    for(int i=0;i<N;i++)
    cin>>A[i];
    for(int i=0;i<Q;i++)
    cin>>P[i];
    vector<int> d;
    for(int i=0;i<N;i++)
    for(int k=0;k<Q;k++)
    {a=0;b=0;
    a=A[i];
    b=P[k];
    c=a ^ b;
    if(c<10)
        d.push_back(A[i]);
    }

    sort(d.begin(),d.end());
    for(vector<int>::iterator i=d.begin();i!=d.end();i++)
    cout<<*i<<" ";
    
    }

    return 0;
}