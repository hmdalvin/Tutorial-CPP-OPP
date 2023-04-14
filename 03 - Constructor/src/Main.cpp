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

    // Constructor
    Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK)
    {
        Mahasiswa::nama = inputNama;
        Mahasiswa::NIM = inputNIM;
        Mahasiswa::jurusan = inputJurusan;
        Mahasiswa::IPK = inputIPK;

        cout << Mahasiswa::nama << endl;
        cout << Mahasiswa::NIM << endl;
        cout << Mahasiswa::jurusan << endl;
        cout << Mahasiswa::IPK << endl;
    }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("dimas", "1345234", "teknik elektro", 3.8);
    Mahasiswa mahasiswa2 = Mahasiswa("kevin", "13253728", "teknik peternakan", 2.8);

    return 0;
}