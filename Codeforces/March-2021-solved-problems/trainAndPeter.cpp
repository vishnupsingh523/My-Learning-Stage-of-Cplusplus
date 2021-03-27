#include<bits/stdc++.h>

using namespace std;

int main(){
    string actual, p, q;
    cin>>actual;
    cin>>p;
    cin>>q;
    
    bool checkpf =false;

    int count =0;
    for(int i=0;i<actual.size();i++)
    {
        for(int j=0;j<p.size();j++)
            if(actual[i]==p[j])
            count++;
            else if(count == p.size())
            {
                checkpf = true;
                break;
            }
            else
            count=0;

        if(checkpf)
        break;
    }

    bool checkqf = false;
    count =0;
    for(int i=0;i<actual.size();i++)
    {
        for(int j=0;j<q.size();j++)
            if(actual[i]==q[j])
            count++;
            else if(count == q.size())
            {
                checkqf = true;
                break;
            }
            else
            count=0;

        if(checkqf)
        break;
    }
// for backward
    bool checkqb = false;
        count =0;
    for(int i=actual.size()-1;i>=0;i--)
    {
        for(int j=q.size()-1;j>=0;j--)
            if(actual[i]==q[j])
            count++;
            else if(count == q.size())
            {
                checkqb = true;
                break;
            }
            else
            count=0;

        if(checkqb)
        break;
    }

    bool checkpb = false;
        count =0;
    for(int i=actual.size()-1;i>=0;i--)
    {
        for(int j=q.size()-1;j>=0;j--)
            if(actual[i]==q[j])
            count++;
            else if(count == q.size())
            {
                checkpb = true;
                break;
            }
            else
            count=0;

        if(checkpb)
        break;
    }
}