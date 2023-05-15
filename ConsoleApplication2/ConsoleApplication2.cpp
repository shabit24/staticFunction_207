#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int nim;
	string name;
public:
	mahasiswa();
	mahasiswa(int);
	mahasiswa(string);
	mahasiswa(int iNim, string iName);
	void cetak();


};

mahasiswa::mahasiswa() {
	nim = 0;
	name = "";

}
mahasiswa::mahasiswa(int iNim) {
	nim = iNim;
}
mahasiswa::mahasiswa(string iName) {
	name = iName;
}
mahasiswa::mahasiswa(int iNim, string iName) {
	nim = iNim;
	name = iName;
}
void mahasiswa::cetak() {
	cout << "Nim = " << nim << endl;
	cout << "Name = " << name << endl;
}

int main() {
	mahasiswa mhs1;
	mahasiswa mhs2(20);
	mahasiswa mhs3("Indra");
	mahasiswa mhs4(30, "Fauzan");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();
	return 0;

}