#include <iostream>
#include <conio.h>
											///0821_hafidh muhammad yusuf
using namespace std;
main(){
	int cari,i,n,hapus;
	int A[2]; 
	cout<<"Input Data\n";
	for ( i=0;i<2;i++)
	{
		cout<<"Masukan Nilai "<<i+1<<" = ";cin>>A;
	}
	cout<<endl;
	for (int c=0;c<2;c++)
	{
		cout<<"Nilai pada elemen ke "<<c+1<<" adalah = "<<A[c]<<endl;
	}
	cout<<"\nMengubah Nilai\n";
	for (int u=0;u<2;u++)
	{
		cout<<"Nilai Baru "<<u+1<<" = ";cin>>A[u];
	}	
		cout<<"\ndata setelah di ubah \n";
	for (int h=0;h<2;h++)
	{
		cout<<" "<<A[h];
	}
		cout<<"\nNilai yang di cari ";cin>>cari;
		cout<<endl;
	for (int f=0;f<2;f++)
	{
		if(A[f] == cari){
			cout<<"Nilai yang di cari di indeks ke- "<<f+1<<endl;
		}
	}
	cout<<endl;
	
	cout<<"Hapus Data"<<endl;
	cout<<"Data yang lama\n";
	
  	for (i=0;i<2;i++)
    { 
		cout<<" "<<A;
	}
	
/*	cout << "\n\nMasukkan nilai data yang akan dihapus = "; 
	cin >> hapus;

	//Perulangan untuk mencari data yang di inputkan user di index array
	for (int j = 0; j < 2; j++)
	{
		if (hapus == A[j])
		{
			//Jika nilai yang di masukkan user sesuai dengan salah satu 
			//Nilai data di index array 
//			for (int k = j /* dimulai dari index nilai yang ditemukan */ //; k < 2; k++)
//			{
				//Menggeser niali data pada index array sampai jumlah maksimal data array
//				A[k]/* Nilai index saat ini */ = A[k + 1] /* Nilai index selanjutnya */;
//			}

			// Mengurangi jumlah array karena saah satu datanya telah dihapus
//		A -= 1;
//			break;
//		}
//	} 

	cout<<"\nMasukkan data ke-brp yang ingin dihapus : ";cin>>n;
		
	for (i=n-1;i<2-1;i++)
    { 
		A=A[i+1];
	}
		cout<<"\nData yang baru : \n";
	for (i=0;i<4;i++)
	
    { 
		cout<<" "<<A;   
	 }

	getch();
}
