#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Xor_engine{
    int a,b,c;
    int N,Q;
    int x;
    vector<int> A,P;

    public:
    void getdata(int X, int Z)
    {
        N=X;
        Q=Z;
        cout<<"Enter the values of N: \n";
        for(int i=0;i<N;i++)
        {
            cin>>x;
            A.push_back(x);
        }
        cout<<"Enter the values of Q: \n";
        for(int i=0;i<Q;i++)
        {
            cin>>x;
            P.push_back(x);
        }
    }
    vector<int> calculate_data()
    {
        vector<int> cal;
        for(int i=0;i<N;i++)
        for(int k=0;k<Q;k++)
        {
            a=A[i];
            b=P[k];
            c= a ^ b;
            cout<<c<<endl;
            if(c<10)
            cal.push_back(a);
        }

        sort(cal.begin(),cal.end());
        return cal;
    }

};

int main()
{
    
    int a,b,c;
    int T;
    cin>>T;
    int N,Q;
    cin>>N>>Q;

    vector< vector <int> > d;
    // vector<vector<int> >::iterator i;

    //class object is created
    Xor_engine X[T];
    for(int j=0;j<T;j++)
    {
        X[j].getdata(N,Q);

        d.push_back(X[j].calculate_data());
    }
    
    for(int i=0;i<d.size();i++)
        {
            cout<<"the values are: ";
            for(int k=0;k<d[i].size();k++)
            cout<<" "<<d[i][k];
            cout<<endl;
        }
    return 0;
}
