#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q,x,marks;
    cin>>q;
    string name;
    map <string,int> mp;
    for(int i=0;i<q;i++)
    {
        cin>>x;
        cin>>name;
        if(x==1)
        {
            cin>>marks;
            mp.insert(make_pair(name,marks));
        }
        else if(x==2||x==3 )
        {
            break;
        }
    }
    map <string,int> ::iterator itr=mp.begin();
    for(;itr!=mp.end();itr++)
    cout<<itr->second<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



