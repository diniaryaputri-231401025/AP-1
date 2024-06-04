#include <iostream>
#include <math.h>
#include<preprocessor.h>
#include <cctype>

using namespace std;

void garis();
void bintang();
void menu();
int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
float bagi(int a, int b);
int modulo(int a, int b);
int pangkat(int a, int b);

int main() {
    char cont;

    do {
        system("cls");

        menu();

        int operation, a, b, hasil;
        cout << "Masukkan operasi : ";
        cin >> operation;

        cout << "Masukkan angka pertama : ";
        cin >> a;

        cout << "Masukkan angka kedua : ";
        cin >> b;

        switch(operation) {
            case 1:
                hasil = tambah(a, b);
                break;
            case 2:
                hasil = kurang(a, b);
                break;
            case 3:
                hasil = kali(a, b);
                break;
            case 4:
                hasil = bagi(a, b);
                break;
            case 5:
                hasil = modulo(a, b);
                break;
            case 6:
                hasil = pangkat(a, b);
                break;
        }

        cout << "Hasil = " << hasil << endl;

        bintang();

        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont;
    } while(toupper(cont) == 'Y');

    cout << "Terima kasih telah menggunakan program kalkulator" << endl;
    return 0;
}
//procedure
void garis() {
    cout << "====================================" << endl;
}

void bintang() {
    cout << "************************************" << endl;
}

void menu() {
    garis();
    cout << "Selamat Datang di Program Kalkulator" << endl;
    garis();
    cout << "1. Tambah \n2. Kurang \n3. Kali \n4. Bagi \n5. Modulo \n6. pangkat" << endl;
    garis();
}

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b);
}

int modulo(int a, int b) {
    return a % b;
}

int pangkat(int a, int b) {
    return pow(a, b);
}
//#include "function_header.h"
//#include "preprocessor.h"

//u;

// Function
//int tambah(int a, int b) {
    //return a + b;
//}

//int kurang(int a, int b) {
   // return a - b;
//}

// Procedure
//void garis() {
   // cout << "==========" << endl;
//}

//oid bintang() {
   // cout << "*********" << endl;
//}

//begin
  //  s;
    //int n;
    //garis();
   

    //system("cls");
    //int n;
    //jumlah(2,3);
    //kurang(2,3);

    //garis();
    //o l tambah(2,3) l e;
    //o l kurang(2,3) l e;
    //o l kali(2,3) l e;
    //o l bagi(2,3);
   // bintang();
    //o l PI l e;
    //bintang();
    // o l n l e;
//end

