#include <iostream>
using namespace std;

class Mahasiswa
{
private:
    string nama;

public:
    friend void setNama(Mahasiswa& a, string); //mendeklarasikan prosedur setNama() dan memberi akses friend
};

int main()
{
    
}
