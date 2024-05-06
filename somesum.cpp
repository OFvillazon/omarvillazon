#include <iostream>

using namespace std;

string calculateSum(int N) {
    if (N % 2 == 0) {
        return "Even";
    } else {
        return "Either";
    }
}

int main() {
    int N;
    cin >> N;

    if (N >= 1 && N <= 10) {
        string result = calculateSum(N);
        cout << result << endl;
    } else {
        cout << "Invalid input. N must be between 1 and 10." << endl;
    }

    return 0;
}
