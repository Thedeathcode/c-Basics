#include <iostream>
#include <cctype>

using namespace std;

int main()
{
char X;
cin >>X;
if(isupper(X)){char small = tolower(X);
cout <<small;}
else{char capital = toupper(X);
cout <<capital;}



}
