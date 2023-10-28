#include<iostream>
using namespace std;

int main(){
	system ("color c");
      string code_dial;      
    	 dial:
       cout<<"hubungi *123# untuk mengakses b.yu"<<endl;
             cout<<"code dial : ";cin>>code_dial;
       system("cls");
       if(code_dial=="*123#");
       else	    	
	   		cout<<"maaf kode yang anda masukan salah";
	   		if (code_dial!="*123#")
		   			goto dial;		system("cls");
 int pilih;
	char menu;
	menu:
			cout<<"6285877681452, pulsa: 300.987.432"<<endl;
			cout<<"1.5Gb 1h 5rb\n";
			cout<<"2.Gratisan\n";
			cout<<"3.INFO\n";
			cout<<"masukan pilihan ";cin>>pilih;
			system("cls"); 
		 switch(pilih) {
        case 1 :
                   cout<<"kamu akan berlanganan paket 5Gb 1h 5rb"<<endl;
                   cout<<"1.Ya \n";
				   cout<<"2.tidak\n";
                   cout<<"0.kembali\n";
                   cin>>pilih;
                   system("cls");
            if(pilih ==1)
                     goto proses;
           else if (pilih ==2)
                     goto end;
           else if (pilih==0)
                     goto menu;
                             		
              break;
        case 2 :
                   cout<<"1.gratis mobile legend 2hr"<<endl;
                   cout<<"2.gratis viu 2hr\n";
                   cout<<"0.menu utama\n";
                   cin>>pilih;
                   system("cls");
                  if(pilih==1)
                     goto proses;
           else if (pilih== 2)
                     goto proses;
           else if(pilih==0)
                     goto menu ;
           else           
                     
              break;
        case 3 :
                   cout<<"6285877681452, sisa pulsa: 300.987.432,aktif s/d 12-mei-2023"<<endl;
                   cout<<"perpanjang masa aktif?\n";
				   cout<<"1.ya\n2.tidak\n"; cin>>pilih;
				   system("cls");
            if(pilih==1)
                     goto proses;
           else if (pilih==2)
                     goto end ;
            else            
              break;
           default :
   			proses:
			   cout<<"pilihan anda sedang dalam proses";
			   end: 
		return 0;
}
}