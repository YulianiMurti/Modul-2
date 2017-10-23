#include <iostream>
using namespace std;

int main(){
	double ton=35273.92;
	
	double berat;
	cout << "Masukan Berapa Berat Sereal dalam 1 Kotak Kemasan (satuan ounce) = ";
	cin >> berat;
	
	double ounce = 1/ton;
	double beratTon = berat*ounce;
	cout << "1 Kotak Kemasan Sereal Beratnya (satuan Ton) = ";
	
	cout << beratTon<<endl;	
	
	double jumlah=1/beratTon;
	cout <<"Jika Terdapat 1 Ton Sereal, Maka Akan memerlukan = "<< jumlah;cout<<"kotak";
}
