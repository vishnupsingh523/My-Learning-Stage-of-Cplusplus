#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> let;
    int a;
    for(int i=0;i<5;i++)
    {
        cin>>a;
        let.push_back(a);
    }

    deque<int>:: iterator it;

    for(it= let.begin();it!=let.end();it++)
    cout<<*it<<" ";

    deque<int> first;
    first.assign(let.begin(),let.end());
cout<<endl;
    for(it= first.begin();it!=first.end();it++)
    cout<<*it<<" ";

}