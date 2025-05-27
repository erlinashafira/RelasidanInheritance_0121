#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main(){
    ibu varIbu = new ibu("dini");
    ibu varIbu2 = new ibu("novi");
    ibu varAnak1 = new anak("tono");
    ibu varAnak2 = new anak("rini");
    ibu varAnak3 = new anak("devi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;
}