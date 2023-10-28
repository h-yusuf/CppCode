#include <iostream>
#include <conio.h>
using namespace std;
 int main(){
	int a="*" , i=a;
	do{
		cout<<"\nNilai ke-"<<i<<"="<<a;
		a+=5;
		i++;
	}while(i<=10);
	getch();
}