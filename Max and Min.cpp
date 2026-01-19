#include <iostream>

using namespace std;

int main()
{
    int A,B,C ,min ,max ;

    cin>>A>>B>>C;

    if(A>=C&&A>=B){max  = A;}

    else if (C>=A&&C>=B){max=C;}

    else max =B;
    if (B>=A&&C>=A){min=A;}

    else if (C>=B&&A>=B){min =B;}

    else {min=C;}
    cout <<min <<" "<<max;


}
