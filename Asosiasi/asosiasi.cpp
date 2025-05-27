#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien{
    public:
        string nama;
        vector<dokter*> daftar_dokter;
        pasien(string pNama): nama (pNama){
            cout << "Pasien \"" << nama << "\" ada\n";
        }

        ~pasien(){
            cout << "pasien \"" << nama
            << "\" tidak ada\n";
        }

        void tambahDokter(dokter*);
        void cetakDokter();
};

class dokter {
    public:
        string nama;
        vector<pasien*> daftar_pasien;

        dokter(string pNama): nama(pNama) {
            cout << "Daftar \"" << nama << "\" ada\n";
        }
        ~dokter() {
            cout << "Dokter \"" << nama <<
            << "\" tidak ada\n";
        }
        void tambahPasien(pasien*);
        void cetakPasien();
};

void pasien::tambahDokter(dokter* pDokter) {
    daftar_dokter.push_back(pDokter);
}

void pasien::cetakDokter(){
    cout << "Daftar dokter yang menangani pasien \""
    << ibu->nama << "\":\n";
    //auto digunakan
    for (auto a : daftar_dokter){
        cout << a->nama << "\n";
    }
    cout << endl;
}

int main() {
    dokter* verDokter1 = new dokter("dr.Budi");
    dokter* verDokter2 = new dokter("dr.Tono");
    pasien* verPasien1 = new pasien("Andi");;
    pasien* verDokter2 = new pasien("Lia");

    verDokter1->tambahPasien(verPasien1);
    verDokter1->tambahPasien(verPasien2);
    verDokter2->tambahPasien(verPasien1);

    verPasien1->tambahDokter(verDokter1);
    verPasien2->tambahDokter(verDokter1);
    verPasien1->tambahDokter(verDokter2);

    verDokter1->cetakPasien();
    verDokter2->cetakPasien();
    verPasien1->cetakPasien();
    verPasien1->cetakPasien();

    delete verPasien1;
    delete verPasien2;
    delete verDokter1;
    delete verDokter2;

    return 0;
}