#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	home:
    int data[10][10];
    int i,j,cari,n,ganti,c;
    

    cout<<endl;

    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Nilai matriks ke["<<i+1<<","<<j+1<<"] : ";
            cin>>data[i][j];
        }
    }

    cout<<endl;

    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cout<<data[i][j]<< " " ;
        cout<<endl;
    }
    
    	cout<<"mengedit data \n";
    	
    		cout << "\nMasukkan nilai data yang akan diubah = "; cin >> ganti;
    		
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
		
		if (data[i][j] == ganti)
			{
				cout << "Masukka nilai baru = "; cin >> data[i][j];
			}
		}
	}	
		    /*for(i=0;i<3;i++){
		    	
		    	for(j=0;j<3;j++){	
			
		    	cout<<"mengubah data ke ["<<i+1<<","<<j+1<<"] : ";cin>>data[i][j];
		   		 }
			}*/
	cout<<"Data setelah di ubah \n";
	for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        cout<<data[i][j]<< " " ;
        cout<<endl;
    }
    cout<<"mencari nilai "<<endl;
    cout<<"Nilai yang di cari ";cin>>cari;
    
    for( i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
		
    		if(data[i][j] == cari){
			cout<<"Nilai yang di cari di indeks ke- ["<<i+1<<"]["<<j+1<<"]"<<endl;
		}
	}
	}
	
		cout<<endl;
    cout<<"menghapus data \n";
    
    	
     for (i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
		{		
        cout<<data[i][j]<< " " ;
    	}
        cout<<endl;
    }
    	cout<<"Masukkan colum ke-brp yang ingin dihapus : ";cin>>n;
    	cout<<"Masukkan 3 ke-brp yang ingin dihapus : ";cin>>c;
    	   	
		
	for (i=n-1;i<3-1;i++)	
    {
		for(j=c-1;j<3-1;j++)
		{
		data[i][j]=data[i+1][j+1];
		}
 }

		int enter;
	
	for (i=0;i<3;i++)
    {
    
        for(j=0;j<3;j++){
			if (i==n && j==c){			
				return 0;
			}		
			cout<<data[i][j]<< " " ;        	
   			}
    cout<<endl;
}
	cin>>enter;
	goto home;
    getch();

}
