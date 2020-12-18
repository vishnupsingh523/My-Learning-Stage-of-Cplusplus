#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int main(){
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        vector<int>arr;
        int height;
        for(int i=0;i<N;i++)
        {
            cin>>height;
            arr.push_back(height);
        }
        int count =0;
        int prev = arr[0],curr;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++)
        {
            curr = arr[i];
            if(curr != prev)
            count++;
            prev = curr;
        }
        cout<<count+1;
    }
}