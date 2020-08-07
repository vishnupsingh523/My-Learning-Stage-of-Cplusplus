#include<iostream>
#include<vector>

using namespace std;

void removeSmallest( int n){

    vector<int> arr;
    int enter;

    for(int i=0;i<n;i++)
    {
        cin>>enter;
        arr.push_back(enter);
    }
    
    for(int j=0;j<n-1&&arr.size()>1;j++)
    {
        if(arr[j]>=arr[j+1])
        {
            if(arr[j]-arr[j+1]==0||arr[j]-arr[j+1]==1)
            arr.erase(arr.begin()+j+1);
        }
        else if(arr[j+1]-arr[j]==0||arr[j+1]-arr[j]==1)
        arr.erase(arr.begin()+j);
        else
        {
            break;
        }
        
        j--;
    }
    if(arr.size()==1)
    cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    
}
int main()
{
    int t;
    int size;
    cin>>t;
    while(t--)
    {
        cin>>size;
        removeSmallest(size);
    }
}
