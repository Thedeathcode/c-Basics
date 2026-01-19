#include <iostream>
#include <limits>
using namespace std;
int main() {

    while (true) {

    cout << "To calculate the area, click  A" <<"\n"<<"To calculate the perimeter, click  B"<<"\n";
        char x;
        cin >> x;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (x=='A'){
            char y;
            cout << "To calculate the triangle, click  A"<<"\n"<<"To calculate the square, click  B"<<"\n"<<"To calculate the rectangle, click  C"<<"\n"<<"To calculate the circuit, click  D"<<"\n";
            cin >> y;
            if (y == 'A') {
                double x1, x2;
                cout<<"Enter the base length first, then the side length."<<"\n";
                cin >> x1 >> x2;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                if (x1>0 && x2>0) {cout <<0.5*x1*x2<<endl;}
                else {

                    cout<<"Error"<<endl;
                    continue;

                }
            }
            else if (y == 'B') {
                double l;
                cout<<"Enter the side length"<<"\n";
                cin >> l;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                if (l>0) {cout<<l*l<<endl;}
                else {
                    cout<<"Error"<<endl;
                    continue;

                }
            }
            else if (y == 'C') {
                double l1,l2;
                cout<<"Enter the height and width"<<"\n";
                cin >> l1 >> l2;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                if (l1>0 && l2>0) {cout<<l1*l2<<endl;}
                else {cout<<"Error"<<endl;
                    continue;

                }


            }

            else if (y == 'D') {
                double n;
                cout<<"Enter the radius"<<"\n";
                cin >> n;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                if (n>0) {cout<<n*n*3.14<<endl;}
                else {cout<<"Error"<<endl;}
            }
            else{cout<<"Error"<<endl;
                continue;

            }
        }
        else if (x == 'B') {
            char y;
            cout << "To calculate the triangle, click  A"<<"\n"<<"To calculate the square, click  B"<<"\n"<<"To calculate the rectangle, click  C"<<"\n"<<"To calculate the circuit, click  D"<<"\n";
            cin >> y;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (y == 'A') {
                double x1, x2,x3;
                cout<<"Insert the three sides"<<"\n";
                cin >> x1 >> x2 >> x3;
                if (x1>0 && x2>0 && x3>0) {cout<<x1+x2+x3<<endl;}
                else {cout<<"Error"<<endl;
                    continue;
                }
            }
            else if (y == 'B') {
                double l;
                cout<<"Enter the side length"<<"\n";
                cin >> l;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                if (l>0) {cout<<l*4<<endl;}
                else {cout<<"Error"<<endl;
                    continue;
                }

            }
            else if (y == 'C') {
                double l1,l2;
                cout<<"Enter the height and width"<<"\n";
                cin >> l1 >> l2;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                if (l1>0 && l2>0) {cout<<(l1+l2)*2<<endl;}
                else {cout<<"Error"<<endl;
                    continue;
                }

            }
            else if (y == 'D') {   double n;
                cout<<"Enter the radius"<<"\n";
                cin >> n;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                if (n>0) {cout<<2*n*3.14<<endl;}
                else {cout<<"Error"<<endl;
                    continue;
                }


            }
            else {cout<<"Error"<<endl;
                continue;
            }

        }
        else {
            cout<<"Error"<<endl;
            continue;
        }
    }
}
