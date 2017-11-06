#include <iostream>
using namespace std;

int main(){ 
	char pilih,X ,Y ;
	int al, p, l, t, L ;
	
	cout <<"A : Persegi Panjang"<<endl;
	cout <<"B : Segitiga"<<endl;
	cout << "Pilih  X atau Y : "; cin>>pilih;
	
		if (pilih=='X'){
			system("cls");
			cout<<"Anda Memilih Mengitung Luas Persegi Pajang"<<endl;
			cout<<""<<endl;
			cout<<"Input Panjang Persegi Panjang = "; cin>>p;
			cout<<"Input Lebar Persegi Panjang = "; cin>>l;
			L=p*l;
			
			cout << " Jadi Luas Persegi Panjangnya Adalah   "<<L;
		}
		
		else if (pilih=='Y'){
			system("cls");
			cout<<"Anda Memilih Mengitung Luas Segitiga"<<endl;
			cout<<""<<endl;
			cout<<"Input Alas Segitiga = "; cin>>al;
			cout<<"Input Tinggi Segitiga = "; cin>>t;
			L=0.5*al*l;
			
			cout << " Jadi Luas segitiganya Adalah   "<<L;
		}
}
