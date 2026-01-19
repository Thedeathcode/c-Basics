#include <iostream>

using namespace std;

int main()
{
    int x,y;
    char a;
    cin>>x>>a>>y;
    if(a=='>'&&x>y){cout<<"Right";}
    else if(a=='<'&&x<y){cout<<"Right";}
    else if(a=='='&&x==y){cout<<"Right";}
    else{cout<<"Wrong";}
}
