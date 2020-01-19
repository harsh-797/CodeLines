#include <bits/stdc++.h>
using namespace std;
int mex=1e8;
vector <int> arr(mex+1,0);

int main()
{
    int l,r;

    cin>>l>>r;

    int cnt=0;

    arr[1]=1;

    arr[2]=0;

    for(int i=2;i*i<=r;i++)
    {
        for(int j=2*i;j<=r;j+=i)
            arr[j]=1;
    }

    for(int i=l;i<=r;i++)
    {
        if(arr[i]==0) cnt++;
    }

    cout<<cnt<<endl;
}
