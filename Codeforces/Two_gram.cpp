#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int size;
    cin>>size;
    string enter;
    cin>>enter;
    vector<int> values;
 
    int count=0;
    for(int i=0;i<size-1;i++)
    {
        count=0;
        for(int j=0;j<size-1;j++)
        if(enter[i]==enter[j]&&enter[i+1]==enter[j+1])
        count++;
        values.push_back(count);
        
    }
    int max=*max_element(values.begin(),values.end());
    for(int i=0;i<values.size();i++)
    if(max==values[i])
    {
        cout<<enter[i]<<enter[i+1];
        break;
    }
    return 0;
}
