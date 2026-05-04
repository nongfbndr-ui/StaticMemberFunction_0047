#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;

public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

// constructor default
mahasiswa::mahasiswa() {
}

// constructor hanya NIM
mahasiswa::mahasiswa(int iNim) {
    nim = iNim; // definisi hanya NIM
}

// constructor hanya nama
mahasiswa::mahasiswa(string iNama) {
    nama = iNama; // definisi hanya NAMA
}

// constructor NIM dan nama
mahasiswa::mahasiswa(int iNim, string iNama) {
    nim = iNim;   // definisi NIM dan NAMA
    nama = iNama;
}

// method cetak
void mahasiswa::cetak() {
    cout << endl << "Nim = " << nim << endl;
    cout << "Nama= " << nama << endl;
}

int main() {
    mahasiswa mhs1(102030);              // hanya NIM
    mahasiswa mhs2("Andi");              // hanya Nama
    mahasiswa mhs3(010203, "Santi");     // NIM dan nama

    // tampilkan nilai
    cout << "Mahasiswa 1:"; mhs1.cetak();
    cout << "Mahasiswa 2:"; mhs2.cetak();
    cout << "Mahasiswa 3:"; mhs3.cetak();

    return 0;
}