#include <iostream>
#define h_b 90000
#define h_g 130000
#define h_c 110000
#define disbaj 0.15
#define diskon2 0.2
#define diskon3 0.1
#define pjk 0.05

using namespace std;

int main(){
	string nama,nim;	
	cout<<"--------------------------------------"<<endl;
	cout<<" nama prtugas =";cin>>nama;
	cout<<" nim petuga   =";cin>>nim;
	
int jb,jg,jc,selesai,Menu,ketik;
float TOTALL,jmlb,TOTAL1,TOTAL_1,TOTAL2,TOTAL_2,TOTAL_3,TOTAL3,total,TOTAL,disc_1,disc_2,disc_3,Total1,Total2,Total3,total_1,total_2,total_3,pjak;
char menu;
	menu:			
	cout<<"======================================\n"<<endl;
	cout<<"---------------FASHION----------------\n";
	cout<<"======================================\n";
	cout<<"1.harga baju    = 90.000/ pcs         \n";
	cout<<"2.harga gaun    = 130.000/ pcs        \n";
	cout<<"3.harga celana  = 110.000/ pcs        \n";
	cout<<"======================================\n";	
    cout<<" JUMLAH BAJU       = ";cin>>jb;
    cout<<" JUMLAH GAUN       = ";cin>>jg;
    cout<<" JUMLAH CELANA     = ";cin>>jc;
    cout<<"ketik apa saja untuk selesai ";
    cin>>ketik;
		system("cls");
		
	if(ketik){
	
		if(jb <=2 ){	
			total_1=jb*h_b;
			TOTAL1=total_1;
		}else {
			total_1 = jb*h_b ;
			disc_1 = total_1*disbaj ;
			Total1 = total_1 - disc_1 ;
			TOTAL1 = Total1;	
		}
		if(jg == 1){
			total_2=jg*h_g;
			TOTAL2=total_2;			
		}else {
			total_2=jg*h_g;
			disc_2=total_2*diskon2;
			Total2=total_2-disc_2;
			TOTAL2=Total2;			
		}
		if(jc == 1){
			total_3=jc*h_c;
			TOTAL3=total_3;
		}else {
			total_3=jc*h_c;
			disc_3=total_3*diskon2;
			Total3=total_3-disc_3;
			TOTAL3=Total3;
		}
		total=TOTAL1+TOTAL2+TOTAL3;
		pjak=(total*pjk); 
		TOTAL=total+pjak;
				
	}
	cout<<"================================================"<<endl;
	cout<<"          petugas	"<<nama<<"_"<<nim<<endl;
	cout<<"================================================"<<endl;	
	cout<<"================================================"<<endl;
	cout<<"\ntotal harga baju   = "<<TOTAL1;
	cout<<"\ntotal harga gaun   = "<<TOTAL2;
	cout<<"\ntotal harga celana = "<<TOTAL3;
	cout<<"\n=================================================";
	cout<<"\nTOTAL sebelum pajak="<<total;
	cout<<"\nPAJAK="<<pjak; 
	cout<<"\nTOTAL="<<TOTAL<<endl<<endl;
		
					cout<<"JUMLAH BAYAR : Rp ";cin>>jmlb;
						TOTALL=jmlb-TOTAL;
					cout<<"KEMBALIAN    : Rp "<<TOTALL;
	
	
	if(Menu)	
	cout<<"\nmasukan angka berapa saja untuk memilih kembali";cin>>Menu;
	system("cls");
	goto menu;
	
	
	 /*
		   ** *****
		   **	gimana caranya supaya nilai hasil yang keluar lebih dari 1 juta tidak eror
		   ***		
		   ** ***** */

	return 0;
	  
}