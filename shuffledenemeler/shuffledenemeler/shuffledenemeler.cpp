
#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>
using namespace std;



int main() {

	ifstream input("girdi.txt"); 
	ofstream oinput("girdi.txt");
	ofstream output("cıktı.txt");

	srand(time(0)); // her seferinde farklı random sayılar üretmesini sağlayan fonk.

	int a,i; // a = boyut
	cout << "Kaç sayı karışsın";
	cin >> a;

	for (i = 0; i < a;i++) {
		oinput << rand() % 99999 << endl;
	}
	oinput.close();

	int* dizi = new int[a];

	for (int j = 0; j < a; j++) {
		input >> dizi[j] ;
	}
	input.close();

	// shuffle yapma kısmı

	for (int k = 1; k < a; k++) {
		swap(dizi[k], dizi[k - 1] );
		/*int r = rand() % a;
		swap(dizi[a], dizi[r]);*/
	}

	for (int degisken = 0; degisken < a; degisken++) {
		output << dizi[degisken] << endl;
	}
	output.close();






	delete[] dizi;
	return 0;

}


