#include <iostream>
using namespace std;

class buku {
    string judul;

public:
    buku setJudul(string judul) {
        this->judul = judul;
        return *this;    // chain function
    }

    string getJudul() {
        return this->judul;
    }
};

int main() {
    buku bukunya;
    
    // Contoh pemanggilan fungsi berantai (chain function calls)
    cout << bukunya.setJudul("Matematika").getJudul(); 
    
    cout << endl;
    return 0;
}