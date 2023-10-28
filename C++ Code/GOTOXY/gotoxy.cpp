#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y){
 COORD k = {x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), k);
}
int main(){
 for(int i=0; i<78; i++){
  for(int j=0; j<10; j+=9){
   gotoxy(i,j); cout<<char(1);
  }
 }
 for(int i=0; i<10; i++){
  for(int j=0; j<78; j+=77){
   gotoxy(j,i); cout<<char(1);
  }
 }
 gotoxy(1,4);cout<<"ALGORITMA DAN PEMROGRAMAN";
 gotoxy(1,15);cout<<" ";
}
