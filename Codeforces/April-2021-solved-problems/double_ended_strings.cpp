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


            for(int k =0;k<str1.size();k++)
            {
                count=0;
                for(int i=k, j=0;i<str1.size()&&j<str2.size();i++,j++)
                {
                        if(str1[i]==str2[j])
                        count++;
                        else{
                            if(max1<count)
                            max1 = count;
                            count =0;
                        }
                }
                
                if(max1<count)
                max1 = count;
                // cout<<" "<<max<<"\n";
            }

            int max2 = INT_MIN;
            for(int k =0;k<str2.size();k++)
            {
                count=0;
                for(int i=k, j=0;i<str1.size()&&j<str2.size();i++,j++)
                {
                        if(str1[j]==str2[i])
                        count++;
                        else{
                            if(max2<count)
                            max2 = count;
                            count =0;
                        }
                }
                
                if(max2<count)
                max2 = count;
                // cout<<" "<<max<<"\n";
            }

            
            if(str1.size()>str2.size())
            cout<<str1.size()-max(max1,max2)+str2.size()-max(max1,max2)<<"\n";
            else
            cout<<str2.size()-max(max1,max2)+str1.size()-max(max1,max2)<<"\n";
        }
    }
}