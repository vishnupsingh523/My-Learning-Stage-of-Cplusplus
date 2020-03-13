#define dollar_value 74.04

#include<iostream>

using namespace std;


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

    double get_data(){
        return dlr;
    }

};

class rupee{
    double rs;
    public:
    rupee(){
        rs=0;
    }
    rupee(dollar d)
    {
        rs=d.get_data()*dollar_value;
    }

    void show(){
        cout<<endl<<"The money in Rupees is: "<<rs;
    }
};



int main()
{
    rupee r;
    double m_amount;
    cout<<"Enter the value of the money which you want to convert: ";
    cin>>m_amount;
    
    dollar d(m_amount);
    r=(d);
    r.show();

    return 0;
}