#include <iostream>
using namespace std;

class pelajar;

class manusia {
public:
    void showNilaiPelajar(pelajar& x); //deklarasi prosedur showNilaiPelajar()
};

class pelajar {
private:
    int nilai;
public:
    pelajar() { //membuat  object pelajar didalam class pelajar
        nilai = 100;
    }
    friend void manusia::showNilaiPelajar(pelajar& x);
};

void manusia::showNilaiPelajar(pelajar& x) { //membuat isi dari prosedur showNilauPelajar()
    cout << x.nilai;
}

int main()
{
    manusia budi;
    pelajar pbudi;
    budi.showNilaiPelajar(pbudi); //display nilai budi
    return 0;
}
