#include <iostream>
using namespace std;

class Mobil
{
public:
    string merkMobil, tipeMobil;

private:
    int hargaMobil;

public:
    void inputData(){
        cout << "Masukkan Nama Mobil Anda: ";
        cin >> merkMobil;
        cout << "Masukkan tipe Mobil Anda: ";
        cin >> tipeMobil;
        cout << "Masukkan Harga Mobil Anda: ";
        cin >> hargaMobil;
    }
    void outputDataPrivate(){
        cout << "Harga Mobil: " << hargaMobil << endl;
    }
};

int main()
{
    Mobil tatangSutarma;
    tatangSutarma.inputData();
    cout << "Nama Mobil: " << tatangSutarma.merkMobil << endl;
    cout << "Tipe Mobil: " << tatangSutarma.tipeMobil << endl;
    tatangSutarma.outputDataPrivate();
    return 0;
}