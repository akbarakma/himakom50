#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
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
                const char warna[10] = {1, 1, 1, 3, 2, 2, 2, 3, 2, 1};
                a = rand()%10;
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
	return 0;
}

