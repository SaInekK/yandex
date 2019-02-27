#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
int m, n, max, x, y;
cin >> n >> m;
int a[100][100];
//считывание
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> a[i][j];
    }
}
//обработка и вывод
max = a[0][0];
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << a[i][j] << " ";
    }
    cout << endl;
}

for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        if (a[i][j] > max || i == 0 && j == 0){
          max = a[i][j];
          x = i;
          y = j;
        };
    }
}
cout << x << " " << y;
}
