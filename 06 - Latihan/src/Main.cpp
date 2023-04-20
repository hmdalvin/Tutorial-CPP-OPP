#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    string NIM;
    string jurusan;

    Mahasiswa(string nama, string NIM, string jurusan)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::NIM = NIM;
        Mahasiswa::jurusan = jurusan;
    }

    string stringfy()
    {
        return "\n" + nama + " " + NIM + " " + jurusan;
    }
};

class DBase
{
public:
    ifstream in;
    ofstream out;
    string fileName;

    DBase(const char *fileName)
    {
        DBase::fileName = fileName;
    }

    void save(Mahasiswa data)
    {
        cout << data.nama << endl;
        cout << data.NIM << endl;
        cout << data.jurusan << endl;

        DBase::out.open(DBase::fileName, ios::app);
        DBase::out << data.stringfy();
        DBase::out.close();
    }

    void showAll()
    {
        DBase::in.open(DBase::fileName, ios::in);
        string nama, NIM, jurusan;
        int index = 1;
        while (!DBase::in.eof())
        {
            DBase::in >> nama;
            DBase::in >> NIM;
            DBase::in >> jurusan;
            cout << index++ << ".\t";
            cout << nama << ".\t\t";
            cout << NIM << ".\t";
            cout << jurusan << endl;
        }
        DBase::in.close();
    }
};

int main(int argc, char const *argv[])
{
    DBase database = DBase("data.txt");
    // tampilkan seluruh data di database
    database.showAll();
    
    // input user
    string nama, NIM, jurusan;
    cout << "Masukan Data Mahasiswa" << endl;
    cout << "Nama : ";
    cin >> nama;
    cout << "NIM : ";
    cin >> NIM;
    cout << "Jurusan : ";
    cin >> jurusan;

    // membuat object yang diperlukan
    Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);

    // save ke database
    database.save(dataMahasiswa);

    return 0;
}