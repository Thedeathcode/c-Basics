#include <iostream>

using namespace std;

int main()
{
double x,y;
char a;
cin>>x;
cin >>a;
cin >>y;
switch(a){case '+':
    cout <<x+y;
    break;
    case '*':
    cout <<x*y;
    break;
    case '-':
    cout <<x-y;
    break;
    case '/':
    cout <<x/y;
    break;}

}
