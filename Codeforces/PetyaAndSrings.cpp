#include<iostream>
#include<string>

using namespace std;

int main()
{
    int count=0;
    string gift1,gift2;
    cin>>gift1>>gift2;
    
    for(int i=0;i<gift1.length();i++)
    {
        gift1[i]=tolower(gift1[i]);
        gift2[i]=tolower(gift2[i]);
        if(gift1[i]==gift2[i])
        count=0;
        else if(gift1[i]<=gift2[i])
        {
            count=-1; 
            break;
        }
        else 
        {
            count=1; 
            break;
        }
    }
    cout<<count;
    return 0;
}