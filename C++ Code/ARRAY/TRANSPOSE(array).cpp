#include <iostream>
#include <conio.h>

using namespace std;
//operasi matrik
int main(){
	 int MatrixA[3][3];
	int MatrixTranspose[3][3];
	
	//int matrix A
	for (int b=0;b,3;b++){
		
		for(int k=0;k<3;k++){
			cout<<"Matrix A ["<<b<<"] = ";
			cin>>MatrixA[b][k];
		}
	}
system("cls");
		//output matrix A
		cout<<endl<<"Matrix A\n";
	for (int b=0;b<3;b++){
		
		for(int k=0;k<3;k++){
			cout<<" "<<b<<"] = ";
		
		}
	}
cout<<endl;

	//Tranpose
	for (int b=0;b,3;b++){
		
		for(int k=0;k<3;k++)
		{
			
			MatrixTranspose[b][k]=MatrixA[k][b];
		}
	}
		//output Tranpose
		cout<<endl<<" Matrix transpose \n";
	for (int b=0;b<3;b++){
		
		for(int k=0;k<3;k++)
		{
			cout<< " " << MatrixTranspose[b][k];
		}
		cout<<endl;
	}
	//Nilai diagonal matrix transpose
		cout<<endl<<" nilai diagonal Transpose \n";
	for (int b=0;b<3;b++){
		
		for(int k=0;k<3;k++)
		{
			if(b==k)
			cout<< MatrixTranspose[b][k]<< " ";
		}
		cout<<endl;
	}
	//perkalian matrix dengan konstanta 
	int kali;
	cout<<endl<<" Hasil perkalian \n";
	for (int b=0;b<3;b++){
		
		for(int k=0;k<3;k++)
		{
			kali =MatrixA[b][k]*2;
			cout<<kali<< " ";
		}
		cout<<endl;
	}
getch();

}