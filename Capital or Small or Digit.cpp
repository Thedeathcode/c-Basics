#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char X;
    cin >> X;

    if (isdigit(X)) {
        cout << "IS DIGIT" << "\n";
    } else if (isalpha(X)) {
        cout << "ALPHA" << "\n";
        if (isupper(X)) {
            cout << "IS CAPITAL" << "\n";
        } else {
            cout << "IS SMALL" <<"\n";
        }
    }
}
