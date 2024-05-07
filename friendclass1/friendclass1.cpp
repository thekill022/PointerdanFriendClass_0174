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

int main()
{
  
}
