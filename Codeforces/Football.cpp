#include<iostream>
using namespace std;

int main()
{
    string players;
    int zeroes=0,dangerous=0;
    int ones=0;
    cout<<"Enter the secuence of the players:  ";
    cin>>players;

    for(int i=0;i<players.length();i++)
    {
        if(players[i]=='0')
        {
            ones=0;
            zeroes++;
            if(zeroes>=7)
            dangerous=1;
        }
        else{
            zeroes=0;
            ones++;
            if(ones>=7)
            dangerous=1;
        }
    }
    if(dangerous==true)
    cout<<endl<<"YES, The situation is dangerous";
    else
    cout<<endl<<"NO, The situation is not dangerous";
    
}