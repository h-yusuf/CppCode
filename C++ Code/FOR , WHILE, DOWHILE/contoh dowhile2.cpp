#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int a,b,c;
	
	//Data Dinamis
	cout<< "\n Contoh Perulangan Dinamis ";
	cout<<endl;
	
	cout<< "\n Masukkan Batas Awal = ";
	cin>> a;
	cout<< "\n Masukkan Batas Akhir = ";
	cin>> b;
	cout<< "\n Masukkan Kelipatan Angka = ";
	cin>> c;

	cout<< " [ ";
	for (int i=a; a<=b; i++)
	{
		cout<< a << " ";
		a+=c;
	}
	
	cout<<" ] ";
	
	cout<< "\n SELESAI \n";
	
	getch ();
}
