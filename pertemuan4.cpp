#include <iostream>

using namespace std;

int main() {
    // Goto Label
    a:
        cout << "Hello World" << endl;
        goto d;
    b:
        cout << "Universitas Sumatera Utara" << endl;
        return 0;
    c:
        cout << "Fasilkom-TI" << endl;
        goto b;
    d:
        cout << "Ilmu Komputer" << endl;
        goto c;

    int i = 1;
    genap:
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    if (i <= 10) {
        goto genap;
    }



    // While
    int i = 1;
    while(i <= 10) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }



    // Do While
    int i = 1;
    do {
        cout << i << endl;
    } while(i <= 0);



    //For
    for(int i = 1; i <= 10; i+=2) {
        cout << "Hello World" << endl;
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}