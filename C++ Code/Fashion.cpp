#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	string nama,nim;	
	cout<<"-------------------"<<endl;
	cout<<"masukan nama anda =";cin>>nama;
	cout<<"masukan nim anda  =";cin>>nim;
	
int nomor,jumlah,diskon,total,uang;


	pesan:			
	cout<<"======================================\n"<<endl;
	cout<<"---------------FASHION----------------\n";
	cout<<"======================================\n";
	cout<<"1.harga baju    = 90.000/ pcs         \n";
	cout<<"2.harga gaun    = 130.000/ pcs        \n";
	cout<<"3.harga celana  = 110.000/ pcs        \n";
	cout<<"======================================\n";	
    cout<<" JUMLAH BAJU       = ";cin>>nomor;
    
	system("cls");	
	
	
	 if(nomor == 1){
    cout<<"            BAJU                   "<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    diskon=jumlah*12000;
    diskon*=10;
    diskon/=100;
    total=jumlah*12000;
    total-=diskon;
               cout<<"PesananAnda"<<jumlah<<"Rp."<<jumlah*12000<<endl;
    cout<<" Anda Mendapatkan Diskon 10%"<<endl;
    cout<<" Total HargaYang Harus Dibayarkan Rp."<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang >=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
                cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
     }
 }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
}