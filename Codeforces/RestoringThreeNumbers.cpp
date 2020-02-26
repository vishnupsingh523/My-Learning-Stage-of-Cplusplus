#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a,b,c,sum=0;
    int ans[4];
    int index;


    for(int i=0;i<=3;i++)
    {
        cin>>ans[i];
        sum+=ans[i];
    }

    sum=sum/3;

    for(int i=0;i<=3;i++)
    {
        if(ans[i]==sum)
        {
            ans[i]=0;
            index=i;
        }
    }

    for(int i=index;i<=3;i++)
    {
        ans[i]=ans[i+1];
    }

    a=(ans[0]+ans[1]-ans[2])/2;
    b=(ans[1]+ans[2]-ans[0])/2;
    c=(ans[2]+ans[0]-ans[1])/2;

    cout<<a<<" "<<b<<" "<<c;
    return 0;
}