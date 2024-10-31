#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,p;
   cin>>n>>m>>p;
   int count=1;
   for(int i=1;i<=n;i++)
   {
   if(m==p)
   count=0;
   else if(m+i*p<=n)
   {
    count++;
   }
   }
   cout<<count<<endl;
}