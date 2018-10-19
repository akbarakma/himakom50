#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int menu;
	char nama[25];	
	cout << "==========================================================";
	cout << "\n||           Coded By Abi and Akbar and Nabil         ||";
	cout << "\n||                JUDI BERKAH                         ||";
	cout << "\n========================================================"<<endl<<endl;
    cout << "\n\nMenu Pilihan :";							
	cout << "\n\n\t[1]. Login";						
	cout << "\n\t[2]. Judi Bola";						    
	cout << "\n\t[3]. Judi roulette";							
	cout << "\n\t[4]. Exit";
    cout << "\n\nMasukan Pilihan >> "; cin >> menu; cout<<endl<<endl;
    system("cls");


    if(menu==1){
        cout << "====================================";
	    cout << "\n                LOGIN               ";
	    cout << "\n====================================";
        cout << "\n\nMasukan Username kamu : "; cin.ignore(); 
    	cin.getline(nama, sizeof(nama));
        cout << "Login Berhasil !!! ";
    }
    
	else if(menu==2){
		int pilih,a,b,tim_a,tim_b,tebak,genap,ganjil,hasilGG;
		cout << "====================================";
        cout << "\n            JUDI BOLA           ";
        cout << "\n====================================";
		cout<<"\n[1]Tebak siapa yang menang !!";
		cout<<"\n[2]Tebak Skor Ganjil Genap !!";
		cout<<"\n\nPilih permainan yang ingin dimainkan : ";cin>>pilih;
		system("cls");
		srand(time(NULL));
		const char skor[10]={1,2,1,3,5,4,2,5,4,3};
		a = rand()%10;
		b = rand()%10;
		tim_a = skor[a];
		tim_b = skor[b];
		if (pilih==1){
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
		else if(pilih==2){
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
		}
	}
    else if(menu==3){
    	int tebak, hasil, a;
            cout << "====================================";
            cout << "\n            JUDI ROULETTE           ";
            cout << "\n====================================";
            cout << "\n\nTebak Warna Yang Keluar";
            cout << "\n\n[1]. Merah (x2)";
            cout << "\n[2]. Biru  (x2)";
            cout << "\n[3]. Hitam (x8)";
            cout << "\n\nMasukan Pilihan >> "; cin >> tebak;
            srand(time(NULL));
            const char warna[9] = {1, 1, 1, 3, 2, 2, 2, 2, 1};
            a = rand()%9;
            hasil = warna[a];
                if (hasil == tebak){
                    if(hasil==1){
                        cout << "\nWarna yang keluar adalah warna : MERAH";
                        cout << "\n\nSelamat anda MENANG !!!";
                    }
                    else if(hasil==2){
                    	cout << "\nWarna yang keluar adalah warna : BIRU";
                        cout << "\n\nSelamat anda MENANG !!!";
					}
					else{
						cout << "\nWarna yang keluar adalah warna : HITAM";
                        cout << "\n\nSelamat anda MENANG !!!";
					}
				}
                else if ((tebak >= 1) && (tebak < 4)){
                    if(hasil==1){
                        cout << "\nWarna yang keluar adalah warna : MERAH";
                        cout << "\n\nMaaf anda kurang beruntung, silahkan coba lagi !!!";
                    }
                    else if(hasil==2){
                    	cout << "\nWarna yang keluar adalah warna : BIRU";
                        cout << "\n\nMaaf anda kurang beruntung, silahkan coba lagi !!!";
					}
					else{
						cout << "\nWarna yang keluar adalah warna : HITAM";
                        cout << "\n\nMaaf anda kurang beruntung, silahkan coba lagi !!!";
						}
					}
                    else{
                        cout << "\nPilihan tidak ada !";
                    }
		}

    else if(menu==4){
       	system("cls");
        cout << "++Exiting...";
        cin.ignore().get();
        system("cls");
        cout << "\n(^_^) Byeee " << nama << "  :p \n\n";
    }
        
    else{
        cout << "salah";
	}
    return 0;
}
