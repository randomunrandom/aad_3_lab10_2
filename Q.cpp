//
// Created by danai on 10/25/18.
//

#include "Q.h"

Q::Q() {
    n=0;
    a=new int[n];
}

Q::Q(int nn) {
    n=nn;
    a=new int[n];
}

Q::Q(int nn, int *aa) {
    n=nn;
    a=new int[n];
    for (int i = 0; i < n; ++i) a[i]=aa[i];
}

void Q::user_input() {
    cout << "введите размер массива : ";
    cin >> n;
    while(n < 2) {
        cout << "введите положительное число не менее 2 : ";
        cin >> n;
    }
    a = new int(n);
    for (int i = 0; i < n; ++i) {
        cout << "введите " << i << " элемент: ";
        cin >> a[i];
    }
}

int Q::count(int* e) {
    *e = 0;
    int otr=0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) otr++;
        if (a[i] > 0) (*e)++;
    }
    return otr;
}

void Q::print() {
    cout << "массив размера " << n << endl;
    cout << "[";
    for (int i = 0; i < n-1; ++i) cout << a[i] << ", ";
    cout << a[n-1] << "]" << endl;
}
