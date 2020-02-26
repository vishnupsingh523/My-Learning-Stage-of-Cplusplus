#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1;
    string str2="aoyeui";
    int count;
    cin>>str1;
    for(int i=0;i<str1.length();i++)
    {
        count=0;
        str1[i]=tolower(str1[i]);
        for(int j=0;j<str2.length();j++)
        {
            if(str1[i]==str2[j])
            {
                count++;
                break;
            }
        }
        if(count==0){
            cout<<"."<<str1[i];
        }
    }
    return 0;
}