#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> arr;
    int enter;
    while(n--)
    {
        cin>>enter;
        arr.push_back(enter);
    }
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
}
