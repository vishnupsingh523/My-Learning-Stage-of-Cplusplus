#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> name;
    string name1;
    int size;
    cin>>size;
    int count = 0;

    for(int i =0; i<size;i++)
    {
        cin>>name1;
        count =0;
        for(int j=0;j<i;j++)
        {
            if(name[j]== name1)
            count++;
        }
        name.push_back(name1);
        if(count == 0)
        cout<<"OK"<<endl;
        else
        {
            cout<<name1<<count<<endl;
        }
        
    }
}
