#include <iostream>
using namespace std;

class Mahasiswa 
{
public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}

};

int main()
{
	Mahasiswa* mhs = new Mahasiswa{ 1 }; //memberi nilai pertama menggunakan new    
	mhs->nim = 2;  // memberi nilai pada variebale nim dari objek mhs
	mhs->showNim(); //memanggil prosedur showNim dari variabel mhs yang merupakan pointer dereference
	delete mhs; // delete mhs untuk menghapus pointer setelah program berhenti dijalankan
	return 0;

}
