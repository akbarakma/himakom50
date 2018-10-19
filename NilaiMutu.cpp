#include <iostream>
using namespace std;
int main(){
	float tugas,kuis,praktikum,UTS,UAS;
	float a,b,c,d,e;
	float hasil;
	cout<<"Menentukan nilai mutu by Akbar Akma";
	cout<<"\n\nMasukkan nilai Tugas: ";cin>>tugas;
	cout<<"\nMasukkan nilai Kuis: ";cin>>kuis;
	cout<<"\nMasukkan nilai Praktikum: ";cin>>praktikum;
	cout<<"\nMasukkan nilai UTS: ";cin>>UTS;
	cout<<"\nMasukkan nilai UAS: ";cin>>UAS;
	a= tugas*20/100;
	b= kuis*10/100;
	c= praktikum*25/100;
	d= UTS*20/100;
	e= UAS*25/100;
	hasil= a+b+c+d+e;
	if (hasil>=76 && hasil<=100){
		cout<<"\nNilai anda : "<<hasil;
		cout<<"\nAngka Mutu : 4";
		cout<<"\nHuruf mutu : A"<<endl;
		system("PAUSE");
	}
	else if (hasil>=71 && hasil<76){
		cout<<"\nNilai anda : "<<hasil;
		cout<<"\nAngka Mutu : 3.5";
		cout<<"\nHuruf mutu : B+"<<endl;
		system("PAUSE");
	}
	else if (hasil>=66 && hasil<71){
		cout<<"\nNilai anda : "<<hasil;
		cout<<"\nAngka Mutu : 3";
		cout<<"\nHuruf mutu : B"<<endl;
		system("PAUSE");
	}
	else if (hasil>=61 && hasil<66){
		cout<<"\nNilai anda : "<<hasil;
		cout<<"\nAngka Mutu : 2.5";
		cout<<"\nHuruf mutu : C+"<<endl;
		system("PAUSE");
	}
	else if (hasil>=56 && hasil<61){
		cout<<"\nNilai anda : "<<hasil;
		cout<<"\nAngka Mutu : 2";
		cout<<"\nHuruf mutu : C"<<endl;
		system("PAUSE");
	}
	else if (hasil>=51 && hasil<56){
		cout<<"\nNilai anda : "<<hasil;
		cout<<"\nAngka Mutu : 1";
		cout<<"\nHuruf mutu : D"<<endl;
		system("PAUSE");
	}
	else if (hasil>=0 && hasil<51) {
		cout<<"\nNilai anda : "<<hasil;
		cout<<"\nAngka Mutu : 0";
		cout<<"\nHuruf mutu : E";
		cout<<"\nNgulang yaaa :)"<<endl;
		system("PAUSE");	
	}
	else {
		cout<<"\nNilai Error"<<endl;
		system("PAUSE");
	}
		
	return 0;
}
