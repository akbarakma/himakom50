#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int menu,a,b,tim_a,tim_b,tebak,genap,ganjil,hasilGG;
	cout<<"[1]Tebak siapa yang menang !!";
	cout<<"\n[2]Tebak Skor Ganjil Genap !!";
	cout<<"\n\nPilih permainan yang ingin dimainkan : ";cin>>menu;
	system("cls");
	srand(time(NULL));
	const char skor[10]={1,2,1,3,5,4,2,5,4,3};
	a = rand()%10;
	b = rand()%10;
	tim_a = skor[a];
	tim_b = skor[b];
	if (menu==1){
		cout<<"Tebak siapa yang menang !!!";
		cout<<"\n\n[1] Tim A";
		cout<<"\n[2] Tim B";
		cout<<"\n[3] Seri";
		cout<<"\n\nPilihan anda : ";cin>>tebak;
		cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
		cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
		if (tebak == 3){
			if(tim_a == tim_b){
				cout<<"\n\nSelamat jawaban anda benar";
			}
			else{
				cout<<"\n\nMaaf anda kurang beruntung";
			}
			}
		else if(tebak == 1){
			if (tim_a>tim_b){
				cout<<"\n\nSelamat jawaban anda benar";
			}
			else{
				cout<<"\n\nMaaf anda kurang beruntung";
			}
		}
		else if(tebak == 2){
			if (tim_a<tim_b){
				cout<<"\n\nSelamat jawaban anda benar";
			}
			else {
				cout<<"\n\nMaaf anda kurang beruntung";
			}
		}
		else{
			cout<<"\n\nPilihan tidak ada !!!";
		}
		
	}
	else if(menu == 2){
		cout<<"Tebak jumlah skor Ganjil Genap !!!";
		cout<<"\n\n[1] Genap";
		cout<<"\n[2] Ganjil";
		cout<<"\n\nPilihan anda : ";cin>>tebak;
		cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
		cout<<"\nTim A "<<tim_a<<" - "<<tim_b<<" Tim B"<<endl;
		if (tebak == 1){
			if((tim_a+tim_b)%2==0){
				cout<<"\n\nSelamat jawaban anda benar";
			}
			else{
				cout<<"\n\nMaaf anda kurang beruntung";
			}
			}
		else if(tebak == 2){
			if ((tim_a+tim_b)%2==1){
				cout<<"\n\nSelamat jawaban anda benar";
			}
			else{
				cout<<"\n\nMaaf anda kurang beruntung";
			}
		}
		else{
			cout<<"\n\nPilihan tidak ada !!!";
		}
	return 0;
}
}
