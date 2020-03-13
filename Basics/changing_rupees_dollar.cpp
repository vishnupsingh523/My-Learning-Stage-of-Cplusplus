#define dollar_value 74.04

#include<iostream>

using namespace std;


class rupee{
    double rup;
    public:
    rupee()
    {
        rup=0;
    }
    rupee(double get){
        rup=get;
    }

    void show(){
        cout<<endl<<"The money in Rupee is: Rs "<<rup;
    }

    double get_data(){
        return rup;
    }

};

class dollar{
    double dol;
    public:
    dollar(){
        dol=0;
    }
    dollar(rupee d)
    {
        dol=(d.get_data())/ dollar_value;
    }

    void show(){
        cout<<endl<<"The money in Dollar is: $ "<<dol;
    }
};



int main()
{
    double m_amount;
    cout<<"Enter the value of the money which you want to convert into dollar: ";
    cin>>m_amount;

    rupee r=(m_amount);
    dollar d(r);
    d.show();

    return 0;
}