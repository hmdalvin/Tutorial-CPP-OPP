#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    string NIM;
    string jurusan;
    double IPK;
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1;
    data1.nama = "Ucup";
    data1.NIM = "1426272881";
    data1.jurusan = "Teknik Mesin";
    data1.IPK = 4;
    Mahasiswa data2;
    data2.nama = "Otong";
    data2.NIM = "134253531";
    data2.jurusan = "Teknik Elektro";
    data2.IPK = 2.8;
    cout << "Nama dari data1: " << data1.nama << endl;
    cout << "NIM dari data1: " << data1.NIM << endl;
    cout << "Jurusan dari data1: " << data1.jurusan << endl;
    cout << "IPK dari data1: " << data1.IPK << endl;
    cout << "\n" << endl;
    cout << "Nama dari data2: " << data2.nama << endl;
    cout << "NIM dari data2: " << data2.NIM << endl;
    cout << "Jurusan dari data2: " << data2.jurusan << endl;
    cout << "IPK dari data2: " << data2.IPK << endl;



    return 0;
}
