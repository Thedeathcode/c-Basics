#include <iostream>

using namespace std;

int main()
{
int  a,b,c,d;
cin>>a>>b>>c>>d;
int r;
r=((a%100)*(b%100)*(c%100)*(d%100))%100;
if(r<10){cout<<"0"<<r;}

else if(r>=10){cout<<r;}

}
