#include <iostream>
using namespace std;

class buku {
private:
    string judul;

public:
    string setget(string judul) {
        this->judul = judul; // nilai parameter 'judul' untuk member variable
        return this->judul;  // return variable judul
    }
};

int main() {
    buku bukunya;
    cout << bukunya.setget("Matematika");
    return 0;
}