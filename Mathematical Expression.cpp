#include <iostream>

using namespace std;

int main()
{
    int x,y,k;
    char a,f;
    cin>>x>>a>>y>>f>>k;
    if(a=='+'&&k==x+y){cout<<"Yes";}
    else if(a=='-'&&k==x-y){cout<<"Yes";}
    else if(a=='*'&&k==x*y){cout<<"Yes";}
      else if(a=='*'&&k!=x*y){cout<<x*y;}
      else if(a=='+'&&k!=x+y){cout<<x+y;}
      else if(a=='-'&&k!=x-y){cout<<x-y;}

}

