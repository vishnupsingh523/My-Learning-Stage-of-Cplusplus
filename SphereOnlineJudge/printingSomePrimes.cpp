#include<bits/stdc++.h>
using namespace std;

vector<int> listOfPrime(int n)
{
    vector<int> prime;
    vector<bool> isPrime(n+1,true);

    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            prime.push_back(i);
            for(int j=i*i;j<=n;j=j+i)
            isPrime[j]=false;
        }
    }

    return prime;
}

int main(){

    int size;
    cin>>size;
    vector<int> prime = listOfPrime(size);
    int count =0, ans =0;

    return 0;
}