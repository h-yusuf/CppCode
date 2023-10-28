#include <iostream>
#include <ctime>
using namespace std;

int main() {
   time_t now = time(0);
   tm *ltm = localtime(&now);

   // Menampilkan waktu saat ini
   cout << "Waktu saat ini: ";
   cout << ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
   
   return 0;
}
