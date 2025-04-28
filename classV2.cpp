#include <iostream>
using namespace std;

class PersgiPanjang{
    public:
        int panjang, lebar;
        void inputData(){
            cout << "Masukkan Panjang Persegi Panjang: ";
            cin >> panjang;
            cout << "Masukkan Lebar Persegi Panjang: ";
            cin >> lebar;
        }
    private:
        float luas(int p, int l){
            return p*l;
        }
    public:
        void outputData(){
            cout << "Luas Adalah " << luas(panjang, lebar) << endl;
        }
};

int main()
{
    PersgiPanjang pp;
    pp.inputData();
    pp.outputData();
}