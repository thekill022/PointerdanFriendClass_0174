#include <iostream>
using namespace std;

class siswa; //deklarasi class siswa
class orang {
private:
    string nama;

public:
    void setNama(string pNama); //deklarasi prosedur setNama dengan paramater dari class orang
    friend class siswa; //memberi akses friend ke class siswa
};

class siswa {
private:
    int id;

public:
    void setId(int pId); //deklarasi prosedur setId
    void displayAll(orang& a); //deklarasi prosedur displayAll()
};

void siswa::displayAll(orang& a) { //membuat isi prosedur displayAll() dari class siswa
    cout << id << endl << a.nama;
}

void orang::setNama(string pNama) { //membuat isi prosedur setNama() dari class orang
    nama = pNama;
}

void siswa::setId(int pId) { //membuat isi prosedur setId() dari class siswa
    id = pId;
}

int main()
{
  
}
