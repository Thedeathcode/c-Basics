#include <iostream>
#include <string>


using namespace std;

int main()
{
    int days;
int years = days / 365;
    days %= 365;
    int months = days / 30;
    days %= 30;

    cout << years << " years\n" << months << " months\n" << days << " days\n";
}
