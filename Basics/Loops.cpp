#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int i=1,result=1;
    for(i=1;i<=10;i++)
    {
        result=n*i;
        cout<<n<<" x "<<i<<" = "<<result<<endl;
    }

    return 0;
}