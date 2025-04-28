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
        cout << "Masukkan tipeMobil Anda: ";
        cin >> tipeMobil;
    }
};

int main()
{
    Mobil kt;
}