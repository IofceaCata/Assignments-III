#include<iostream>
using namespace std;
int n,x,v[10],m;
int caut (int s, int d)
{
    if(s>d)
        return -1;
    else
        {
            m =(s+d)/2;
            if (x==v[m])
                return m;
            if (x<v[m])
                return caut(s,m-1);
            else
                return caut(m+1,d);
        }
}
int main()
{
    cout<<"n,x ";
    cin>>n>>x;
    for (int i=0;i<n;i++)
        cin>>v[i];
    cout<<caut (0,n-1);
    return 0;
}
