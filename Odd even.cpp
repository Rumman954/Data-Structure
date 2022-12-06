#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],even=0,odd=0;
    for (int i=0;i<10;i++)
    {
        cin>>a[i];
        if (a[i]%2==0)
            even++;
        else
            odd++;
    }
    cout<<odd<<" odd number"<<endl;
    cout<<even<<" even number";

    return 0;
}
