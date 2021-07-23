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

    if(size<=5)
    cout<<0;
    else
    {
        for(int j=4;j<=size;j++)
        {
            count =0;
            for(int i=0;i<prime.size();i++)
            if(j%prime[i]==0)
            count++;

            if(count==2)
            ans++;
        }

        cout<<ans;
    }

    return 0;
}