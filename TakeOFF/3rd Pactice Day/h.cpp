#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    int length = 0;
    for (int i = 0; i < N; ) {
        if (i + 2 < N && S[i] == 'f' && S[i + 1] == 'o' && S[i + 2] == 'x') {
            i += 3;
        } else {
            length++;
            i++;
        }
    }
    cout << length << endl;
    return 0;
}
