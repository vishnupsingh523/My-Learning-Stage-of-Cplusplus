#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> children;
    int candies;
    for(int i=0;i<n;i++)
    {
        cin>>candies;
        children.push_back(candies);
    }
    for(int i=0; !children.empty();)
    {
        candies = children[0];
        if(children.front()<= m)
        children.erase(children.begin());
        else
        {
            candies = children[0];
            children.erase(children.begin());
            children.push_back(candies);
        }
        
    }

    cout<<candies;
}
