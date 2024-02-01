#include <iostream>
#include <algorithm>
using namespace std;

void customSort(int* start, int* end) {
    sort(start, end);
}

int main() {
    int data[] = {7, 8, 2, 1, 2, 4, 6, 9, 0, 1};
    cout << "Before: ";
    for (int i = 0; i < 10; i++) cout << data[i] << " ";

    int* mid = &data[5];
    customSort(&data[0], mid);
    customSort(mid, &data[10]);

    cout << "\nAfter: ";
    for (int i = 0; i < 10; i++) cout << data[i] << " ";

    return 0;
}

