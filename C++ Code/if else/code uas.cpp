#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
 string id, key, nomor, pesan;
 int umur,jumlah, total, uang, diskon;
 pesan:
 system("cls");
 cout<<" ==================================================="<<endl;
 cout<<" ==== SELAMAT DATANG DI RUMAH MAKAN SUMBER JAYA ===="<<endl;
 cout<<" ==================================================="<<endl<<endl;
 cout<<" Masukkan Kode Diskon	: ";
 cin>>id;

 if(id =="diskon10"){
  cout<<" ==================================================="<<endl;
  cout<<" == SELAMAT ANDA MENDAPATKAN DISKON SEBESAR 10% ! =="<<endl;
  cout<<" ==================================================="<<endl<<endl;
  cout<<" Masukkan Umur Anda 	: ";
  cin>>umur;
  cout<<endl<<endl;
  if(umur>=12){
   cout<<" ====== MENU UNTUK ORANG DEWASA ======"<<endl;
   cout<<" [1] Nasi Goreng Pedas\t	Rp.12000"<<endl;
   cout<<" [2] Nasi Remes\t\t	Rp.9000"<<endl;
   cout<<" [3] Nasi Pecel Lele\t\tRp.13000"<<endl;
   cout<<" [4] Nasi Ayam Geprek\t	Rp.15000"<<endl<<endl;
   cout<<" Masukkan Nomor Pesanan Anda	: ";
   cin>>nomor;
   if(nomor =="1"){
    cout<<" Nasi Goreng Pedas\tRp.12000"<<endl;
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
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }
   else if(nomor =="2"){
    cout<<" Nasi Remes\tRp.9000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    diskon=jumlah*12000;
    diskon*=10;
    diskon/=100;
    total=jumlah*12000;
    total-=diskon;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<jumlah*9000<<endl;
    cout<<" Anda Mendapatkan Diskon 10%"<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;

    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }

   else if(nomor =="3"){
    cout<<" Nasi Pecel Lele\tRp.13000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    diskon=jumlah*12000;
    diskon*=10;
    diskon/=100;
    total=jumlah*12000;
    total-=diskon;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<jumlah*13000<<endl;
    cout<<" Anda Mendapatkan Diskon 10%"<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;

    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }
   else if(nomor =="4"){
    cout<<" Nasi Ayam Balado\tRp.15000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    diskon=jumlah*12000;
    diskon*=10;
    diskon/=100;
    total=jumlah*12000;
    total-=diskon;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<jumlah*15000<<endl;
    cout<<" Anda Mendapatkan Diskon 10%"<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;

    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }
   
   else{
    cout<<" Maaf Menu Tidak Tersedia"<<endl;
    system("pause");
    goto pesan;
   }
  }
  if(umur<12){
   cout<<" ====== MENU UNTUK ANAK ANAK ======"<<endl<<endl;
   cout<<" [1] Nasi Goreng\t	Rp.11000"<<endl;
   cout<<" [2] Nasi Ayam Goreng\t	Rp.9000"<<endl;
   cout<<" [3] Nasi Ikan Kukus\t\tRp.8000"<<endl<<endl;
   cout<<" Masukkan Nomor Pesanan Anda	: ";
   cin>>nomor;
   if(nomor =="1"){
    cout<<" Nasi Goreng\tRp.11000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    diskon=jumlah*11000;
    diskon*=10;
    diskon/=100;
    total=jumlah*11000;
    total-=diskon;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<jumlah*11000<<endl;
    cout<<" Anda Mendapatkan Diskon 10%"<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
     
    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }
   else if(nomor =="2"){
    cout<<" Nasi Ayam Goreng\tRp.9000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    diskon=jumlah*9000;
    diskon*=10;
    diskon/=100;
    total=jumlah*9000;
    total-=diskon;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<jumlah*9000<<endl;
    cout<<" Anda Mendapatkan Diskon 10%"<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;

    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }

   else if(nomor =="3"){
    cout<<" Nasi Ikan Kukus\tRp.8000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    diskon=jumlah*8000;
    diskon*=10;
    diskon/=100;
    total=jumlah*8000;
    total-=diskon;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<jumlah*8000<<endl;
    cout<<" Anda Mendapatkan Diskon 10%"<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;

    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }

   else{
    cout<<" Maaf Menu Tidak Tersedia"<<endl;
    system("pause");
    goto pesan;
   }
  }

 }
 else{
  cout<<" ========================================"<<endl;
  cout<<" == MAAF ANDA TIDAK MENDAPATKAN DISKON =="<<endl;
  cout<<" ========================================"<<endl<<endl;
  cout<<" Masukkan umur Anda : ";
  cin>>umur;
  cout<<endl<<endl;
  if(umur>=12){
   cout<<" ====== MENU UNTUK ORANG DEWASA ======"<<endl<<endl;
   cout<<" [1] Nasi Goreng Pedas\t	Rp.12000"<<endl;
   cout<<" [2] Nasi Remes\t\t	Rp.9000"<<endl;
   cout<<" [3] Nasi Pecel Lele\t\tRp.13000"<<endl;
   cout<<" [4] Nasi Ayam Balado\t	Rp.15000"<<endl<<endl;
   cout<<" Masukkan Nomor Pesanan Anda	: ";
   cin>>nomor;
   if(nomor =="1"){
    cout<<" Nasi Goreng Pedas\tRp.12000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    total=jumlah*12000;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<total<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;

    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }
   else if(nomor =="2"){
    cout<<" Nasi Remes\tRp.9000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    total=jumlah*9000;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<total<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;

    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }
   
   else if(nomor =="3"){
    cout<<" Nasi Pecel Lele\tRp.13000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    total=jumlah*13000;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<total<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
     
    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }
   else if(nomor =="4"){
    cout<<" Nasi Ayam Balado\tRp.15000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    total=jumlah*15000;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<total<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;

    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }
   
   else{
    cout<<" Maaf Menu Tidak Tersedia"<<endl;
    system("pause");
    goto pesan;
   }

  }
  if(umur<12){
   cout<<" ====== MENU UNTUK ANAK ANAK ======"<<endl;
   cout<<" [1] Nasi Goreng\t	Rp.11000"<<endl;
   cout<<" [2] Nasi Ayam Goreng\t	Rp.9000"<<endl;
   cout<<" [3] Nasi Ikan Kukus\t\tRp.8000"<<endl<<endl;
   cout<<" Masukkan Nomor Pesanan Anda	: ";
   cin>>nomor;
   if(nomor =="1"){
    cout<<" Nasi Goreng\tRp.11000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    total=jumlah*11000;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<total<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;

    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }
   else if(nomor =="2"){
    cout<<" Nasi Ayam Goreng\tRp.9000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    total=jumlah*9000;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<total<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;

    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }

   else if(nomor =="3"){
    cout<<" Nasi Ikan Kukus\tRp.8000"<<endl;
    cout<<" Masukkan Jumlah Pesanan Anda 	: ";
    cin>>jumlah;
    total=jumlah*8000;
    cout<<" Pesanan Anda "<<jumlah<<" Rp. "<<total<<endl;
    cout<<" Total Harga Yang Harus Dibayarkan Rp. "<<total<<endl;
    cout<<" Masukkan Uang Anda Rp. ";
    cin>>uang;
    if(uang>=total){
     cout<<" Transaksi Anda Berhasil"<<endl;
     cout<<" Kembalian Anda Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;

    }
    else{
     cout<<" Uang Anda Tidak Cukup"<<endl;
     cout<<" Uang Anda Kurang Rp. "<<uang-total<<endl;
     cout<<" Tekan Apa Saja Untuk Pemesanan Kembali"<<endl;
     system("pause");
     goto pesan;
    }
   }

   else{
    cout<<" Maaf Menu Tidak Tersedia"<<endl;
    system("pause");
    goto pesan;
   }

  } 
 }
return 0;
}
