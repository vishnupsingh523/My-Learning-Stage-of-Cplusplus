#define dollar_value 74.04

#include<iostream>

using namespace std;

class rupee{
    double rs;
    public:
    rupee(){
        rs=0;
    }
    rupee(double get){
        rs=get;
    }

    void show(){
        cout<<endl<<"The money in Rupees is: "<<rs;
    }
};

class dollar{
    double dlr;
    public:
    dollar(){
        dlr=0;
    }
    dollar(double get){
        dlr=get;
    }

    void show(){
        cout<<endl<<"The money in Dollar is: $ "<<dlr;
    }

    operator rupee (){
        double rs1;
        rs1=dlr*dollar_value;
        return rupee(rs1);
    }

};


int main()
{
    rupee r;
    double m_amount;
    cout<<"Enter the value of the money which you want to convert: ";
    cin>>m_amount;
    
    dollar d(m_amount);
    r=d;
    r.show();

    return 0;
}