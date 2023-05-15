#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //constructor
	angka(); //destructor
	void cetakData();
	void isiData();
};
//definidi member function
angka::angka(int i) {
	panjang = i; //constructor
	arr = new int[i];
	isiData();
}
angka::angka() {
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaslan" << endl;
}

