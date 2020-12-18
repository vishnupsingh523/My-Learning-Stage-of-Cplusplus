#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define ll long long
#define fl float
#define db double
#define st string

ll getsum(ll num)
{
    ll number = num;
    ll sum=0;
    for(int i=0;number>9;number= number/10)
    {
        sum= sum + number%10;
    }
    sum+= number;

    return sum;
}

bool multiple(int value)
{
    int count=0;
    int arr[10];
    int i=0;
    if(value>9)
    {
        for(i=0; value>9 ;value=value/10)
        {
            arr[i]=value%10;
            i=i+1;
        }

        arr[i]=value;

        for(int j=0;j<=i;j++)
        {
            count=0;
            for(int k=j+1;k<=i;k++)
            {
                if(arr[j]==arr[k])
                count++;
            }
            if(count!=0)
            return 0;
        }
        return true;
    }
    else
    {
        return true;
    }
    
}
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;

        for(ll i=0;i<1000000;i++)
        {
            ll value = getsum(i);
            if(value==n)
            {
                if(multiple(value))
                {
                    cout<<i<<endl;
                    break;
                }
                else
                {
                    cout<<-1<<endl;
                    break;
                }
                
            }
        }
     
    }
}