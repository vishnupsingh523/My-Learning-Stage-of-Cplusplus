#include<iostream>

using namespace std;

int main(){
    int test,cpower,rpower;

    cin>>test;
    while(test--){
        cin>>cpower>>rpower;
        int c=0,r=0,sum=0;
        int ccount=0,rcount=0;

        for(int i=0;cpower!=sum;i++)
        {
            ccount=0;
            sum =0;
            c++;
            for(int j=c;j>0;j=j/10)
            {
                sum+= j%10;
                ccount++;
            }

        }

        for(int i=0;rpower!=sum;i++)
        {
            rcount=0;
            sum =0;
            r++;
            for(int j=c;j>0;j=j/10)
            {
                sum+= j%10;rcount++;
            }

        }


            if(rcount<ccount){
                cout<<1<<endl;
            }
            else 
            cout<<0<<endl;
    }
}
