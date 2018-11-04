/*
 * created by Danil Kireev, PFUR NFIbd-01-17, 25.10.18, 09:00
 */
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"


/*
 *  № 5
 *  В массиве из n чисел есть положительные и отрицательные элементы.
 *  Подсчитать количество положительных и отрицательных элементов массива.
 */

int main() {
    cout << "нахождение количества отрицательных и положительных элементов" << endl;
    int n=0, **a, e=0;
    cout << "введите размер массива объектов: ";
    cin >> n;
    while(n <= 0) {
        cout << "введите положительное число: ";
        cin >> n;
    }
    a = new int*[n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[2];
    }
    Q *obj = new Q[n];
    for (int i = 0; i < n; ++i) {
        obj[i].user_input();
        obj[i].print();
        a[i][0] = obj[i].count(&e);
        a[i][1] = e;
    }
    for (int i = 0; i < n; ++i) {
        cout << "массив: " << endl;
        obj[i].print();
        cout << "количество отрицательных элементов: " << a[i][0] << endl;
        cout << "количество положительных элементов: " << a[i][1] << endl;
    }
    return 0;
}
