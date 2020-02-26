#include <iostream>
#include <string>

using namespace std;

class words{

    string str1;
    public:
    void gettingstring()
    {
        cin>>str1;
    }
    void printing()
    {
    if(str1.length()<=10)
    {
        cout<<str1<<endl;
    }
    else{
        int length=str1.length()-2;
        cout<<str1[0]<<length<<str1[length+1]<<endl;
    }
    }
};
int main()
{
    int num;
    cin>>num;
    words w[num];
    for(int i=0;i<num;i++)
    w[i].gettingstring();
    //for printing the values 
    for(int i=0;i<num;i++)
    w[i].printing();

    return 0;
}