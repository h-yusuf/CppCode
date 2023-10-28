#include <iostream>
#include <windows.h>

using namespace std;

//fungsi gotoxy
void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

int main(){
 //isi program disini
 int baris, kolom;
cout<<"Baris(x) : "; cin>>baris;
cout<<"Kolom(y) : "; cin>>kolom;
system("cls");
for(int j=0; j<kolom; j++){
 gotoxy(baris,j);cout<<j;
}
for(int i=0; i<baris; i++){
 gotoxy(i, kolom);cout<<i;
}o
gotoxy(baris,kolom);cout<<"**YAHHALOOOOt**";
cout<<"\nBaris : "<<baris<<endl;
cout<<"Kolom : "<<kolom;
}