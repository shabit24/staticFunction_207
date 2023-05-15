#include <iostream>
using namespace std;

class angka {
private:
	int *arr;
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
angka::~angka() {
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaslan" << endl;
}
void angka::cetakData() {
	for (int i = 1;i <= panjang;i++) {
		cout << i <<"= " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1;i <= panjang;i++) {
		cout << i << "= ";cin>> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); // constructor dipanggil
    angka *ptrBelajarcpp = new angka(5);
	delete ptrBelajarcpp;
	return 0;
}