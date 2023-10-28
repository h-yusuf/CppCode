#include <iostream>
using namespace std;

	int main(){
		string dial;
		int a,p,gob,info;
		
		hell:
			cout<<"hubungi *123# untuk mengakses bima3"<<endl;
			cout<<"dial number";
			cin>>dial;
			system("cls");
			
			if (dial=="*123#")
			else	    	
	   		cout<<"maaf kode yang anda masukan salah";
		   			goto hell;		system("cls");
				menu:
					cout<<"nomer telpon anda: 62876656, sisa pulsa: 3000 "<<endl;
					cout<<"1.5gb 1hr 5rb\n"<<endl;
					cout<<"2.gratisan\n";
					cout<<"3.INFO";
					cout<<"ketik pilihan angka :";
					cin>>a;
					system("cls");
					
			if (a==1){
				cout<<"kamu akan langganan paketan 5gb 1hr 5rb"<<endl;
				cout<<"1.ya"<<endl;
				cout<<"2.tidak"<<endl;
				cout<<"0.kembali\n";
				cin>>p;
						switch(p){
						case 1 : cout<<"permintaan kamu akan di proses";break;
						case 2 : cout<<"permintaan kamu di batalkan";break;
						case 0 : goto menu;break;
						default : cout<<"pilihan tidak valid";
						}
			}
			else if (a==2){
			    cout<<"1. gratis Mobile lagend"<<endl;
			    cout<<"2. gratis Viu 2h\n";
			    cout<<"0. menu utama"<<endl;
			    cin>>gob;
			    system("cls");
			    
			    		switch(gob){
			    		case 1 : cout<<"permintaan kamu akan di proses";break;
						case 2 : cout<<"permintaan kamu akan di proses";break;
						case 0 : goto menu;break;
						default : cout<<"pilihan tidak valid";
						}	    		
			}	
			else if (a==3){
				cout<<"perpanjang masa aktif ?\n 1.ya\n2.tidak"<<endl;
				cout<<"ketik pilihan ";
				cin>>info;
				system("cls");				
						switch(info){
						case 1 : cout<<"permintaan kamu akan di proses";break;
						case 2 : cout<<"---";break;
						default : cout<<"pilihan tidak valid";							
						}
			}
			else{
			
			}return 0;
	}
