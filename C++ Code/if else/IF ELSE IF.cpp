#include <iostream>
using namespace std;

int main (){
	string nama,No_hp;
	
	cout<<"masukan nama anda  : ";cin>>nama;
	cout<<"masukan no.hp anda : ";cin>>No_hp;
	system("cls");
	
	int Menu,selesai,pilih,jum_tiket,jenis_kendaraan,harga_parkir,total_bayar,total,harga_tiket;
	string tempat_wisata,kendaraan;
	float total_harga;
	char menu;
	menu:
	cout << "  1.pantai sedahan   "<<endl;
	cout << "  2.pantai greweng   "<<endl;
	cout << "    pilih satu yang mau ditampilkan" << endl;
	cout << "  Masukkan Pilihan wisata (1/2)    = ";cin>>tempat_wisata;
	cout << "  PILIH LAGI                       = ";cin>>pilih;
	cout << "  Masukkan jumlah tiket            = ";cin>> jum_tiket;
	cout << "  Masukkan jenis kendaraan (1/2/3) = "; cin >> jenis_kendaraan;
   	cout << "masukan brpa saja untuk lanjut";cin>>selesai;
   	
if (selesai){
	if (pilih == 1) {
    	harga_tiket = 15000;
    	tempat_wisata = "pantai sedahan";
		total_harga = (float) jum_tiket * harga_tiket;
	}else if (pilih == 2){
    	harga_tiket = 10000;
    	tempat_wisata = "pantai greweng";
		total_harga = (float) jum_tiket * harga_tiket;	
    }if (jenis_kendaraan == 1 ){
		kendaraan = "bus";
		harga_parkir = 10000;
		total = harga_tiket + harga_parkir;
	}else if ( jenis_kendaraan == 2 ){
   		kendaraan = "mobil";
   		harga_parkir = 5000;
   		total = harga_tiket + harga_parkir;
    }else if ( jenis_kendaraan == 3 ){
   		kendaraan = "motor";
   		harga_parkir = 2000;
   		total = harga_tiket + harga_parkir;
  	    }
  	}
  			total_bayar=total_harga+harga_parkir;
  				
	cout << "============================================"<<endl;
    cout << "|            STRUK PEMBAYARAN              |" <<endl;
    cout << "============================================"<<endl;
	cout << "Nama            : "<< nama << endl;
	cout << "No.handphone    : "<< No_hp << endl;
	cout << endl;
	cout << "--------------------------------------------" << endl;
	cout << endl;
	cout << "Tempat Wisata  :  "<<tempat_wisata << endl;
	cout << "Jumlah Tiket   : "<< (cin,jum_tiket) << endl;
	cout << endl;
	cout << "--------------------------------------------" << endl;
	cout << endl;
	cout << "Jenis Kendaraan  :  " << kendaraan << endl;
	cout << "Biaya parkir     : "<< harga_parkir << endl;
	cout << endl;
	cout << "total harga      : "<< (cin,total_harga ) << endl;
	cout << "total pembayaran : "<<total_bayar<<endl;
	cout<<endl;
	
	
	if(Menu)
	
			cout<<"\nmasukan angka berapa saja untuk memilih kembali";cin>>Menu;
			system("cls");
	goto menu;

	return 0;
}

	
	
	
	
	
	
	
	
    
    
    
    
		
