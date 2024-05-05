//6.

#include <iostream>
using namespace std;

//1. - string: nama, alamat
//   - integer: usia
//   - float: tinggi badan

//2.
// 

//3.
struct Mahasiswa {
    string nim;
    string nama;
}

int main() {
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
}

// struct digunakan u/ mengumpulkan banyak info (berupa variabel) mjd 1 info

//4.

//5.
int main()
{
    int i;
    string nama[5];

    for (i = 150; i > 100; i -= 10)
    {
        cout << i << ". " << "SELAMAT PUASA" << endl;

    }
    cout << "Nilai i terakhir = " << i << endl;

    for (i = 0; i < 5; i++) {
        cout << "Masukkan nama ke-" << i << ":";
        cin >> nama[i];
    }

    for (i = 0; i < 5; i++) {
        cout << "Nama ke-" << i << ": " << nama[i] << endl;
    }
}
