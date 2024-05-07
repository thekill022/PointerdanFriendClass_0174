#include <iostream>
using namespace std;

class Mahasiswa
{
private:
    string nama;

public:
    friend void setNama(Mahasiswa& a, string); //mendeklarasikan prosedur setNama() dan memberi akses friend
};

void setNama(Mahasiswa& a, string pNama) { //membuat isi dari prosedur setNama() 
    a.nama = pNama;
    cout << a.nama;
}

int main()
{
    
}
