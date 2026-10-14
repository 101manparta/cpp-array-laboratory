
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const int results[] = {70, 85, 90, 65, 95};
    const int size = sizeof(results) / sizeof(results[0]);

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += results[i];
    }

    double average = static_cast<double>(sum) / size;

    cout << "Number of elements: " << size << '\n';
    cout << "Total sum: " << sum << '\n';
    cout << fixed << setprecision(2);
    cout << "Average: " << average << '\n';

    return 0;
}
