#include <iostream>
using namespace std;

int main(){
	
	int menu;
	
	cout<<"\t\t\tKALKULATOR SEDERHANA";
	cout<<"\nBy: Akbar Danial Akma";
	cout<<"\nNPM: 1817051050";
	cout<<"\n\nMenu Pilihan :";
	cout<<"\n\n[1] Penambahan";
	cout<<"\n[2] Pengurangan";
	cout<<"\n[3] Perkalian";
	cout<<"\n[4] Pembagian";
	cout<<"\n[5] Modulus";
	cout<<"\n\nMasukan Pilihan Anda: ";
	cin>> menu;
	system("cls"); //Menghilangkan menu
	
	switch(menu)
	{
		float angka; //Bukan untuk mod/sisa bagi
		case 1:
			float tambah, hasil_tambah;
			cout<<"\t\tPENAMBAHAN";
			cout<<"\n\nMasukkan angka pertama: "; cin>> angka;
			cout<<"\nMasukkan nilai penambahan: "; cin>> tambah;
			hasil_tambah = angka+tambah;
			cout<<"\nHasil dari "<<angka<<" + "<<tambah<<" adalah "<<hasil_tambah<<endl;
			system ("pause");
			break;
			
		case 2:
			float kurang, hasil_kurang;
			cout<<"\t\tPENGURANGAN";
			cout<<"\n\nMasukkan angka pertama: "; cin>> angka;
			cout<<"\nMasukkan nilai pengurangan: "; cin>> kurang;
			hasil_kurang= angka-kurang;
			cout<<"\nHasil dari "<<angka<<" - "<<kurang<<" adalah "<<hasil_kurang<<endl;
			system ("pause");
			break;
			
		case 3:
			float kali, hasil_kali;
			cout<<"\t\tPERKALIAN";
			cout<<"\n\nMasukkan angka pertama: "; cin>> angka;
			cout<<"\nMasukkan nilai pengurangan: "; cin>> kali;
			hasil_kali= angka*kali;
			cout<<"\nHasil dari "<<angka<<" x "<<kali<<" adalah "<<hasil_kali<<endl;
			system ("pause");
			break;
			
		case 4:
			float bagi, hasil_bagi;
			cout<<"\t\tPEMBAGIAN";
			cout<<"\n\nMasukkan angka pertama: "; cin>> angka;
			cout<<"\nMasukkan nilai pengurangan: "; cin>> bagi;
			hasil_bagi= angka/bagi;
			cout<<"\nHasil dari "<<angka<<" / "<<bagi<<" adalah "<<hasil_bagi<<endl;
			system ("pause");
			break;
			
		case 5:
			int Angka, mod, hasil_mod;
			cout<<"\t\tSisa Bagi";
			cout<<"\nAturan: Tidak boleh menggunakan angka pecahan.";
			cout<<"\n\nMasukkan angka pertama: "; cin>> Angka;
			cout<<"\nMasukkan nilai pembagian: "; cin>> mod;
			hasil_mod= Angka%mod;
			cout<<"\nSisa bagi dari "<<Angka<<" mod "<<mod<<" adalah "<<hasil_mod<<endl;
			system ("pause");
			break;
			
		default:
			cout<<"Masukkan variabel yang ada di menu"<<endl;
			system ("pause");
			break;
	}
	
	return 0;
}
