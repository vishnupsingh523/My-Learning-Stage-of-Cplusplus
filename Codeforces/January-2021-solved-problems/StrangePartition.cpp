#include<iostream>
#include<cmath>

using namespace std;

#define ll long long

int main()
{
    int t;
    int x,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        ll sumMIN = 0, sumMAX = 0;
        double min =0;
        double a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            min = a[i]/x;
            sumMIN += round(min);
            sumMAX += ceil(min);
        }

        cout<<sumMIN<<" "<<sumMAX<<endl;

    }
}