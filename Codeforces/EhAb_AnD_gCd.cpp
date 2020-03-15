#include<iostream>
#include<vector>
using namespace std;

int gcd(int x, int y){
    int r = 0, a, b;
    a = (x > y) ? x : y; // a is greater number
    b = (x < y) ? x : y; // b is smaller number
 
    r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
int lcm(int x, int y)
{
    int a;
    a = (x > y) ? x : y; // a is greater number
    while (true)
    {
        if (a % x == 0 && a % y == 0)
            return a;
        ++a;
    }
}

int main()
{
    vector<int> arr;
    int t,a,b,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    for(int j=0;j<t;j++)
    {
        a=1;
        b=arr[j]-1;
        for(int i=0;i<arr[j];i++)
        {
            x=gcd(a,b);
            y=lcm(a,b);
            if(x+y==arr[j])
            {
                cout<<a<<" "<<b<<endl;
                break;
            }
            a++;
            b--;
        }
    }


    return 0;
}