#include<bits/stdc++.h>
using namespace std;

/*
i. Shoot down atmost any k monsters. In other words, he can shoot down any set of monsters such that the size of that set is smaller than or equal to k.
ii. Shoot down all monsters of any one type.

Sample input
3
7 2
1 2 3 4 4 4 4
5 3
1 2 3 1 2
5 3
5 5 5 5 5

Sample output
3
2
1

Explanation:
For the first test case, the minimum moves required is 3. One way to do so is that Hawkeye can first shoot monsters 1 and 2 in one move using the second operation. 
Then he can shoot down all monsters of type 4 using the first operation, followed by shooting monster 3 by either method.
*/


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int value;
        unordered_map<int,int> ump;

        for(int i=0;i<n;i++)
        {
            cin>>value;
            ump[value]++;
        }

        int ans =0;
        int count =0;
        for(auto itr = ump.begin(); itr!= ump.end(); itr++)
        {
            if(itr->second <= k)
            {
                if( k-count >= itr->second)
                count = count + itr->second;
                else
                {
                    ans++;
                    count = itr->second - (k-count);
                }
            }
            else 
            ans++;

            if(count == k)
            {
                ans++;
                count =0;
            }
        }      

        if(count <= k && count != 0)
        {
            ans++;
            count =0;
        }

        cout<<ans<<"\n";  
    }
    return 0;
}