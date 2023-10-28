#include <iostream>
#include <ctime>
#include <Windows.h> // header file untuk menggunakan fungsi Sleep()

using namespace std;

int main() {
    while (true) {
        // Mengambil waktu saat ini
        time_t now = time(0);
        tm *ltm = localtime(&now);

        // Menampilkan waktu saat ini
        cout <<endl<<endl<<endl;
        cout << "Waktu saat ini: ";
        cout << (ltm->tm_hour < 10 ? "0" : "") << ltm->tm_hour << ":";
        cout << (ltm->tm_min < 10 ? "0" : "") << ltm->tm_min << ":";
        cout << (ltm->tm_sec < 10 ? "0" : "") << ltm->tm_sec << endl;

        // Delay selama 1 detik = 1000
        Sleep(1000);
        system("cls");
    }

    return 0;
}
