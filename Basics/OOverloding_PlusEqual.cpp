#include<iostream>
#include<iomanip>
using namespace std;
class complex
{
	int a,b;
	public:
		complex()
		{
			a=0;
			b=0;
		}
		void getdata()
		{
			cin>>a>>b;
		}
		complex operator +=(complex s)
		{
			complex temp;
		  temp.a=a+s.a;
		  temp.b=b+s.b;
		return (temp);	
		}
		void show()      // this not important to set the functions return type as class name you can simply write it as void or int-> for returning something.
		{
			cout<<a<<"+i"<<b;       //this method is write of outputing
		}
};
int main()
{
	complex c1,c2;
	c1.getdata();
	c2.getdata();
    c1+=c2;         //c1=c1+c2
	c1.show();  //you just need to call the function or use the function if you are not using the return type
	return 0;
	
}