#include <iostream>

using namespace std;

int main() {
    string nama;
    int nim;
    char kom;
    float ip;

    cout << "Hello World" << endl;

    cout << "Masukkan Nama : ";
    // cin >> nama;
    getline(cin, nama);

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "NAMA : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;
    cout << "IP : " << ip << endl;


}