#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> tasks(N);
    for(int i = 0; i < N; ++i) {
        cin >> tasks[i];
    }
    int P;
    cin >> P;

    if(N == 0 || tasks.size() == 0) {
        cout << "List is empty";
    } else if(P < 1 || P > N) {
        cout << "Position out of range";
    } else {
        tasks.erase(tasks.begin() + (P - 1));
        if(tasks.size() == 0) {
            cout << "List is empty";
        } else {
            for(int i = 0; i < tasks.size(); ++i) {
                cout << tasks[i];
                if(i != tasks.size() - 1) cout << " ";
            }
        }
    }
    return 0;
}
