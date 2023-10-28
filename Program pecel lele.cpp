#include <iostream>
#include <conio.h>

using namespace std;
main(){
	int pilih,total,harga;
	char paket;
	cout<<"1.ayam"<<endl;
	cout<<"2.sapi"<<endl;
	cout<<"3.ikan"<<endl;
	cout<<"1.bebek"<<endl;
	cout<<" masukan pilihan anda ";cin>>pilih;
	switch(pilih){
		case 1:
			cout<<"paket lengkap ";cin>>paket;
			if(paket='y')
			{
				harga=50000;
			}	
			else if(paket='t')
			{
				harga=10000;
			}	
			else

		break;
		case 2:
			cout<<"paket lengkap ";cin>>paket;
				if(paket=='y'){
				harga=70000;
			}	
			else if(paket=='t'){
				harga=30000;
			}	
			
			break;
	}
	total=harga;
	cout<<"Total harga "<<total;
}