  #include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    if ((s[0] + s[1]) % 2 == 0) {
        cout << "Black" << endl;
    } else {
        cout << "White" << endl;
    }

    return 0;
}