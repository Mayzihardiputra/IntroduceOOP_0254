#include <iostream>
using namespace std;

class persegipanjang
{

public:
    float panjang, lebar, luas;

    void inputData()
    {
        cout << " input panjang: ";
        cin >> panjang;
        cout << " input lebar: ";
        cin >> lebar;
    }

    void menghitungluas()
    {
        luas = panjang * lebar;
    }

    void output()
    {
        cout << "luas persegi panjang =" << luas << endl;
    }
};

int main()
{
    persegipanjang per;
    per.inputData();
    per.menghitungluas();
    per.output();
    return 0;
}