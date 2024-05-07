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


}
