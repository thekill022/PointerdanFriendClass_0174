#include <iostream>
using namespace std;

class Mahasiswa { //membuat class mahasiswa
public: //memberi akses modifier public pada class Mahasiswa
	int nim; //deklarasi variabel nim
	void showNim() { //membuat prosedur showNim()
		cout << "No Induk = " << nim << endl;
	}
};

int main()
{
	Mahasiswa mhs{ 1 }; //object mhs diberi nilai awal 1
	mhs.showNim(); //memanggil prosedur showNim() untuk objek mhs

	Mahasiswa& refMhs = mhs; //pointer reference refMhs yang bernilai mhs
	
}
