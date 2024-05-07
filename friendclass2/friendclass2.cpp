#include <iostream>
#include <string> //menambah libarary string
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
    Mahasiswa joko;
    setNama(joko, "Kairi Kumar"); //memberi value pada parameter dari prosedur setNama()
    return 0;
}
