#include <iostream>
using namespace std;

int main() {
    const int N = 12;  // кількість елементів
    int a[N];

    // Початкові значення
    a[0] = 1;
    a[1] = 2;

    // Обчислення елементів послідовності
    for (int i = 2; i < N; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }

    // Виведення результату
    for (int i = 0; i < N; ++i) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    return 0;
}
