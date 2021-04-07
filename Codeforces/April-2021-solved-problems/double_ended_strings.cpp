#include<iostream>
using namespace std;

int main(){
    int t;

    cin>>t;
    string str1, str2;
    while(t--)
    {
        cin>>str1;
        cin>>str2;

        
        if(str1 == str2)
        cout<<0<<"\n";
        else
        {
            int count =0;
            int max1 =INT_MIN;


            for(int k =1;k<=min(str1.size(), str2.size());k++)
            {
                for(int i=0;i+k<=str1.size(); i++){
                    for(int j=0;j+k<=str2.size(); j++)
                    {
                        if(str1.substr(i, k) == str2.substr(j, k))
                        max1 = max(max1, k);
                    }
                }
            }

            cout<<str1.size()+str2.size()-2*max1<<"\n";
        }
    }
}