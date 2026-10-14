
#include <iostream>
using namespace std;

int main() {
    int results[] = {70, 85, 90, 65, 95};

    int size = sizeof(results) / sizeof(results[0]);

    for (int i = 0; i < size; i++) {
        cout << "Index: " << i
             << " | Value: " << results[i] << '\n';
    }

    return 0;
}
