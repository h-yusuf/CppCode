#include <iostream>
#define hb 90000
#define hg 130000
#define hc 110000
#define diskon1 0,15
#define diskon2 0,2
#define diskon3 0,1
#define pjk 0,05

using namespace std;

int main(){
	string nama,nim;
	
	cout<<"-------------------"<<endl;
	cout<<"masukan nama anda =";cin>>nama;
	cout<<"masukan nim anda  =";cin>>nim;
	
int pilih;
float hb,hg,hc,pcs;
char menu;
	menu:			
	cout<<"======================================\n"<<endl;
	cout<<"---------------FASHION----------------\n";
	cout<<"======================================\n";
	cout<<"1.harga baju    = 90.000/ pcs         \n";
	cout<<"2.harga gaun    = 130.000/ pcs        \n";
	cout<<"3.harga celana  = 110.000/ pcs        \n";
	cout<<"======================================\n";	
    cout<<"masukan pilihan anda  = ";cin>>pilih;
    cout<<"masukan jumlah barang = ";cin>>pcs;
    
		if(pilih==1){
			hb=90000*pcs
			
		
		}
		else if(pilih==2)
		hg=130000*pcs;
		else if(pilih==3)
		hc=110000*pcs;
		system("cls");	
		
	cout<<"========================================"<<endl;
	cout<<"total harga baju     = "<<hb;
	cout<<"\ntotal harga gaun   = "<<hg;
	cout<<"\ntotal harga celana = "<<hc;
	cout<<"\ntotal diskonan     = "; 
	
		
	
	
	
	
	
	
	
	  
}