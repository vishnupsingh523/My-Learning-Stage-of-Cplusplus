#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin>>size;
    string word;
    int sum=0;
    while(size--)
    {
        cin>>word;
        if(word=="Tetrahedron")
        sum+= 4;
        else if(word=="Cube")
        sum+= 6;
        else if(word=="Octahedron")
        sum+= 8;
        else if(word=="Dodecahedron")
        sum+= 12;
        else if(word=="Icosahedron")
        sum+= 20;
    }
    cout<<sum;
}