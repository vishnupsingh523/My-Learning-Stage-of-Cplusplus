#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long> a;
    long long value, max = LONG_LONG_MIN, min = LONG_LONG_MAX;

    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(value>max)
        max = value;
        if(value<min)
        min = value;
    }
    int size = n-1;
    
    cout<<max-min-size;
    
}