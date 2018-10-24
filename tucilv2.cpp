#include <iostream>//========INI VERSI WINDOWS====
#include <stdlib.h>//<-- INI BUAT APA YAA?
#include <time.h>//<-- BUAT RANDOM BANGET NGET NGET
// INI GAK ADA ERROR KECUALI LO MASUKIN CHARACHTER KE PILIHAN (KECUALI NGISI USERNAME), SAMA YANG SPASI KATA GUA ITU BILLL
using namespace std;

int main(){
	int menu, uang = 100000, lo = 0, bet;
	char nama[100] = {};
	//=============================MAIN MENU=================================================================
	MENU:
	cout << "========================================================";
	cout << "\n||           Coded By Abi and Akbar and Nabil         ||";
	cout << "\n||                      JUDI BERKAH                   ||";
	cout << "\n========================================================"<<endl<<endl;
	cout << "\t\t\tUsername   : " << nama;
	cout << "\n\t\t\tUang       : " << uang;
    cout << "\n\n\nMenu Pilihan :";							
	cout << "\n\n\t[1]. Login";						
	cout << "\n\t[2]. Judi Bola";						    
	cout << "\n\t[3]. Judi Roulette";				
	cout << "\n\t[4]. Cairkan Uang";			
	cout << "\n\t[5]. Exit";
    cout << "\n\nMasukan Pilihan >> "; cin >> menu; cout<<endl<<endl; cin.ignore();//<<<<<----- ERRORR jelasin nabill 
    system("cls");

//===============================MENU 1======================================================================================

    if(menu==1){
    	LOGIN:
    	int i;
        cout << "====================================";
	    cout << "\n                LOGIN               ";
	    cout << "\n====================================";
        cout << "\n\nMasukan Username kamu : "; cin.getline(nama, sizeof(nama));//<----- YANG INI BILL
    	for(i = 0; nama[i] != '\0'; i++);//LO HARUS JELASIN GUA YANG INI BIL
    	if (i != 0){
        	cout << "Login Berhasil !!! "<<endl;
        	lo = 1;
        }
        else{
        	cout << "Login Gagal !!!"<<endl;
        	system("PAUSE");
        	system("cls");
        	goto LOGIN;
        }
        system("PAUSE");
        system("cls");
        goto MENU;
    }
//================================MENU 2============================================================================    
	else if(menu==2){
		int pilih,a,b,tim_a,tim_b,tebak,genap,ganjil,hasilGG;
		if (lo == 0){
			system("cls");
			cout << "\tMaaf Anda Belum Login !";
			cout << "\n\tSilahkan Login Dahulu !"<<endl;
			system("PAUSE");
			system("cls");
			goto MENU;
		}//=====PILIHANNYA===
		else{
			BOLA:
			cout << "====================================";
        	cout << "\n            JUDI BOLA           ";
        	cout << "\n====================================";
			cout<<"\n\n[1].Tebak siapa yang menang !!";
			cout<<"\n[2].Tebak Skor Ganjil Genap !!";
			cout<<"\n\nPilih permainan yang ingin dimainkan : ";cin>>pilih;
			system("cls");
			srand(time(NULL));
			const char skor[10]={1,2,3,4,5,1,2,3,4,5};
			a = rand()%10;
			b = rand()%10;
			tim_a = skor[a];
			tim_b = skor[b];
			if (pilih==1){//===PILIH 1======
				BET1:
				cout << "====================================";
        		cout << "\n            JUDI BOLA           ";
        		cout << "\n====================================";
				cout << "\n\nUang anda sekarang = " << uang;
				cout<<"\nMau taruhan berapa ? "; cin >> bet;
				if( bet > uang){
					cout << "\nUang anda tidak cukup"<<endl;
					system("PAUSE");
					system("PAUSE");
        			system("cls");
					goto BET1;
				}
				else if(bet <= 0){//kalo input 10-10 jadi aneh
					cout<<"Input uang error"<<endl;
					system("PAUSE");
					system("cls");
					goto BET1;
				}
				cout<<"\n\n\tTebak siapa yang menang !!!";
				cout<<"\n\n[1] Tim A";
				cout<<"\n[2] Tim B";
				cout<<"\n[3] Seri";
				cout<<"\n\nPilihan anda : ";cin>>tebak;
		
				if (tebak == 3){
					if(tim_a == tim_b){
						system("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;	
					}
					else{
						system("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang"<<endl;
							system("PAUSE");
							system("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;	
					}
				}
				else if(tebak == 1){
					if (tim_a>tim_b){
						system("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
					else{
						system("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang"<<endl;
							system("PAUSE");
							system("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
				else if(tebak == 2){
					if (tim_a<tim_b){
						system("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;	
					}
					else {
						system("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang"<<endl;
							system("PAUSE");
							system("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
				else{
					cout<<"\n\nPilihan tidak ada !!!"<<endl;
					system("PAUSE");
					system("cls");
					goto BET1;
				}

			}//======PILIH 2========
			else if(pilih==2){
				BET2:
				cout << "====================================";
        		cout << "\n            JUDI BOLA           ";
        		cout << "\n====================================";
				cout << "\n\nUang anda sekarang = " << uang;
				cout<<"\nMau taruhan berapa ? "; cin >> bet;
				if( bet > uang){
					cout << "\nUang anda tidak cukup"<<endl;
					system("PAUSE");
					system("PAUSE");
        			system("cls");
					goto BET2;
				}
				else if(bet <= 0){
					cout<<"Input Uang Error"<<endl;
					system("PAUSE");
					system("cls");
					goto BET2;
				}
				cout<<"\n\n\tTebak jumlah skor Ganjil Genap !!!";
				cout<<"\n\n[1]. Genap";
				cout<<"\n[2]. Ganjil";
				cout<<"\n\nPilihan anda : ";cin>>tebak;
	
				if (tebak == 1){
					if((tim_a+tim_b)%2==0){
						system("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;
						}	
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
					else{
						system("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang"<<endl;
							system("PAUSE");
							system("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
				else if(tebak == 2){
					if ((tim_a+tim_b)%2==1){
						system("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t--------------------------------";
						cout<<"\n\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t--------------------------------";
						cout<<"\n\nSelamat jawaban anda benar";
						uang = uang + bet;
						cout << "\nUang anda sekarang = " << uang << endl;
						char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto BOLA;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
					else{
						system("cls");
						cout << "====================================";
        				cout << "\n            JUDI BOLA           ";
        				cout << "\n====================================";
						cout<<"\n\nPertandinga antara Tim A dan Tim B berakhir dengan skor:";
						cout<<"\n\t-------------------";
						cout<<"\n\t|Tim A "<<tim_a<<" - "<<tim_b<<" Tim B|";
						cout<<"\n\t-------------------";
						cout<<"\n\nMaaf anda kurang beruntung !!!";
						uang = uang - bet;
						cout << "\nUang anda sekarang = " << uang<<endl;;
						if (uang == 0){
							cout << "\n\n\tAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang"<<endl;
							system("PAUSE");
							system("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto BOLA;
					}
				}
				else {
				cout<<"\n\nPilihan tidak ada !!!"<<endl;
				system("PAUSE");
				system("cls");
				goto BET2;	
				}
			}
			else{
				cout<<"\n\nPilihan tidak ada !!!"<<endl;
				system("PAUSE");
				system("cls");
				goto BOLA;
			}
		
		}
	}//===========================MENU 3=================================================================================================
   
    else if(menu==3){
    	int tebak, hasil, a;
    	if (lo == 0){
			system("cls");
			cout << "\tMaaf Anda Belum Login !";
			cout << "\n\tSilahkan Login Dahulu !";
			system("PAUSE");
			system("cls");
			goto MENU;
		}
		else{
			ROULETTE:
            cout << "====================================";
            cout << "\n            JUDI ROULETTE           ";
            cout << "\n====================================";
            cout << "\n\nUang anda sekarang = " << uang;
            cout << "\nMau taruhan berapa ? "; cin >> bet;
			if( bet > uang){
					cout << "\nUang anda tidak cukup";
					system("PAUSE");
					system("PAUSE");
        			system("cls");
					goto ROULETTE;
			}
			else if(bet <= 0){
				cout<<"Input Uang Error"<<endl;
				system("PAUSE");
				system("cls");
				goto ROULETTE;
			}
            cout << "\n\n\tTebak Warna Yang Keluar";
            cout << "\n\n[1]. Merah (x2)";
            cout << "\n[2]. Biru  (x2)";
            cout << "\n[3]. Hitam (x6)";
            cout << "\n\nMasukan Pilihan >> "; cin >> tebak;
            srand(time(NULL));
            const char warna[9] = {1, 1, 1, 3, 2, 2, 2, 2, 1};
            a = rand()%9;
            hasil = warna[a];
                if (hasil == tebak){
                    if(hasil==1){
                    	system("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                        cout << "\n\nWarna yang keluar adalah warna : MERAH";
                        cout << "\n\n\tSelamat anda MENANG !!!";
                        uang = uang + bet*2;
                        cout << "\n\nUang anda sekarang = " << uang;
                        char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto ROULETTE;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
                    }
                    else if(hasil==2){
                    	system("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                    	cout << "\nWarna yang keluar adalah warna : BIRU";
                        cout << "\n\n\tSelamat anda MENANG !!!";
                        uang = uang + bet*2;
                        cout << "\n\nUang anda sekarang = " << uang;
                        char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto ROULETTE;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
					}
					else{
						system("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
						cout << "\nWarna yang keluar adalah warna : HITAM";
                        cout << "\n\n\tSelamat anda MENANG !!!";
                        uang = uang + bet*6;
                        cout << "\n\nUang anda sekarang = " << uang;
                       char y;
						if ((uang >= 1000000) || (uang%1000000 == 0)){
							cout << "\n\nAnda bisa mencairkan uang di menu utama";
							cout << "\nApakah anda ingin mencairkan uang atau lanjut bermain ? (Y/N) "; cin >> y;
							system("cls");
							if ((y == 'Y' || y == 'y'))
								goto MENU;
							else
								goto ROULETTE;	
						}
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
					}
				}
                else if ((tebak >= 1) && (tebak < 4)){
                    if(hasil==1){
                    	system("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                        cout << "\n\nWarna yang keluar adalah warna : MERAH";
                        cout << "\n\n\tMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\n\nUang anda sekarang = " << uang;
                        if (uang == 0){
							cout << "\n\nAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang"<<endl;
							system("PAUSE");
							system("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
                    }
                    else if(hasil==2){
                    	system("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
                    	cout << "\n\nWarna yang keluar adalah warna : BIRU";
                        cout << "\n\n\tMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\n\nUang anda sekarang = " << uang;
                        if (uang == 0){
							cout << "\n\nAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang"<<endl;
							system("PAUSE");
							system("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
					}
					else{
						system("cls");
                    	cout << "====================================";
            			cout << "\n            JUDI ROULETTE           ";
            			cout << "\n====================================";
						cout << "\n\nWarna yang keluar adalah warna : HITAM";
                        cout 
						<< "\n\n\tMaaf anda kurang beruntung, silahkan coba lagi !!!";
                        uang = uang - bet;
                        cout << "\n\nUang anda sekarang = " << uang;
                        if (uang == 0){
							cout << "\n\nAnda tidak bisa bermain lagi, silahkan ngutang uang dulu ke orang"<<endl<<endl;
							system("PAUSE");
							system("PAUSE");
							while(true){
							cout << "Game OVER !!!              Game OVER !!!              Game OVER !!!" <<endl;
							cout << "              Game OVER !!!              Game OVER !!!             " <<endl;
							}
						}
						char y;
						cout << "\n\nApakah anda ingin Mengganti game judi ini ? (Y/N) "; cin >> y;
						system("cls");
						if ((y == 'Y' || y == 'y'))
							goto MENU;
						else
							goto ROULETTE;
						}
					}
                    else{
                        cout << "\nPilihan tidak ada !"<<endl;
                        system("PAUSE");
                        system("cls");
                        goto ROULETTE;
                    }
			}
	}	
//================================MENU 4==================================================================
	else if(menu==4){
		system("cls");
		if (uang >= 1000000){
			cout << "KERJA TU YANG HALAL BIJI !!!"<<endl<<endl;
			system("PAUSE");
			system("cls");
			goto EXIT;
		}
		else{
			cout << "\n\tUang anda belum mencapai Rp. 1.000.000,00";
			cout << "\n\tMaen dulu sampe puas !!!"<<endl;
			system("PAUSE");
			system("cls");
			goto MENU;
		}

	}
//==================================MENU 5=======================================================================
    else if(menu==5){
    	EXIT:
       	system("cls");
        cout << "++Exiting..."<<endl;
        system("PAUSE");
        system("cls");
        cout << "\n(^_^) Byeee " << nama << "  :p \n\n";
    }
//=======================MENU TAK TERSEDIA========================================================================
    else{
    	cout << "\n\t*******************************************";
        cout << "\n\t*  Maaf menu tidak tersedia saat ini !!!  *";
        cout << "\n\t*******************************************"<<endl;
        system("PAUSE");
        system("cls");
        goto MENU;
	}

    return 0;
}
//YEAYY 700 LINEEEEEEEE
