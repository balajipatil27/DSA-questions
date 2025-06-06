#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    string s = to_string(n);
    bool jumbled = true;
    for (int i = 1; i < s.length(); ++i) {
        if (abs(s[i] - s[i-1]) > 1) {
            jumbled = false;
            break;
        }
    }
    if (jumbled)
        cout << "Jumbled" << endl;
    else
        cout << "Not Jumbled" << endl;
    return 0;
}
