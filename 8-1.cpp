#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
int m, n, min;
cin >> n >> m;
int a[100][100];
//считывание
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> a[i][j];
    }
}
//обработка и вывод
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << a[i][j] << " ";
    }
    cout << endl;
}
}
