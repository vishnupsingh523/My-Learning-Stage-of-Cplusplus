#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define ll long long
#define fl float
#define db double
#define st string

int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        string value;
        cin>>value;

        string str = value;
        bool check =false;

        if(value == "2020")
        cout<<"YES"<<endl;
        else
        {
            for(int i=0; i<n&&check==false;i++)
            {
                check = false;
                for(int j=i;j<n&&check==false;j++)
                {
                    str = value;
                    str.erase(str.begin()+i,str.begin()+j);
                    cout<<"--> "<<i<<", "<<j<<" = "<<str<<endl;
                    if(i==j)
                    {
                        str.erase(str.begin()+i);
                        if(str=="2020")
                        {
                            cout<<"YES"<<endl;
                            check=true;
                            break;
                        }
                    }
                    else if(str=="2020")
                    {
                        cout<<"YES"<<endl;
                        check=true;
                        break;
                    }
                }
            }
            if(check==false)
            cout<<"NO"<<endl;
        }
    }
}