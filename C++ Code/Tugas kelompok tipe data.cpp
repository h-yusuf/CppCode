#include <iostream>
#include <math.h>
#include <conio.h>


using namespace std;

int main(){
	char menu;
	int pilih,jmlh;
	float disc, total,ttl1,ttl2,ttl3,ttl4,ttl5,ttl6,ttl7,ttl8,ttl9,ttl10,ttl11,ttl12,
	 ttl ,item, harga, mgg, klg, smgk, mlnhj, mlnkng, salak, aplfj, aplhj, aplmr, pircntr, piryl, pirhj; 
	 cout<<"HAFIDH MUHAMMAD YUSUF_0831";
	 cout<<"JONATHAN PAKSI.A_0846";
	 cout<<"MUHAMMAD AZIZ F_0855";
	 cout<<"AKHMAD SAEFUL AMRI_0839";
	 cout<<"MUHAMMAD HILMAN_0820";
	
	cout<<"1.mangga 30000		"<<endl;
	cout<<"2.kelengkeng 40000	"<<endl;
	cout<<"3.semangka 15000		"<<endl;
	cout<<"4.melon hijau 5000   "<<endl;
	cout<<"5.melon kuning 6000  "<<endl;
	cout<<"6.salak 7000			"<<endl;
	cout<<"7.apel fuji 33000    "<<endl;
	cout<<"8.apel hijau 20000	"<<endl;
	cout<<"9.apel merah 40000	"<<endl;
	cout<<"10.pir century 40000	"<<endl;
	cout<<"11.pir yale 15000	"<<endl;
	cout<<"12.pir hijau 45000 \n	"<<endl;
	pilih:
	cout<<"masukan pilihan anda   = ";cin>>pilih;
	cout<<"masukan total berat buah = ";cin>>jmlh;
	if(pilih){		
		if (pilih==1){
		ttl1=30000*jmlh;
		cout<<"mangga "<<ttl1<<endl;
		goto pilih;	}
		else if (pilih==2){
		ttl2=40000*jmlh;
			cout<<"klng "<<ttl2<<endl;
			goto pilih;	}
		ttl3=15000*jmlh;
			cout<<"smk "<<ttl3<<endl;
			goto pilih;	}
		else if (pilih==4){
		ttl4=5000*jmlh;
			cout<<"mon jo  "<<ttl4<<endl;
			goto pilih;}
		else if (pilih==5){
		ttl5=6000*jmlh;
			cout<<"mon ning "<<ttl5<<endl;
			goto pilih;}
		else if (pilih==6){
		ttl6=7000*jmlh;
			cout<<"salak "<<ttl6<<endl;
			goto pilih;}
		else if (pilih==7){
		ttl7=33000*jmlh;
			cout<<"apel fu "<<ttl7<<endl;
			goto pilih;}
		else if (pilih==8){
		ttl8=20000*jmlh;
			cout<<"apel hi "<<ttl8<<endl;
			goto pilih;}
		else if (pilih==9){
		ttl9=40000*jmlh;	
			cout<<"apel mert "<<ttl9<<endl;
			goto pilih;}
		else if (pilih==10){
		ttl10=40000*jmlh;	
			cout<<"pir sen "<<ttl10<<endl;
			goto pilih;}
		else if (pilih==11){
		ttl11=15000*jmlh;
			cout<<"pir yel"<<ttl11<<endl;
			goto pilih;}
		else if (pilih==12){
		ttl12=45000*jmlh;
			cout<<"pir hi "<<ttl12<<endl;
			goto pilih;}
		else (pilih<=1 && pilih>12);{	
		cout<<"yang anda masukan salah";
	}
	/*total=(>500000)
	total=500000*0.1;
	buah=((klkng, apl_mr, pir_cty, pir_hj )>35000)=2kilo=1jus;
	buah=((klkng, apl_mr, pir_cty, pir_hj )>35000)>2kilo=1salad;*/
	
	   total=ttl1+ttl2+ttl3+ttl4+ttl5+ttl6+ttl7+ttl8+ttl9+ttl10+ttl11+ttl12;
	   cout<<"total"<<total;
	   cin>>total;
	  return 0; 
	}