#include <iostream>
using namespace std;

class addAngka{
    
    public:
        
        int addPenjumlahan(int x, int y){
            int penjumlahan = x + y;
            cout << "Hasil Penjumlahan: "<< penjumlahan;
            return penjumlahan;
        }

        int addPengurangan(int x, int y){
            int pengurangan = x - y;
            cout << "Hasil Pengurangan: " << pengurangan;
            return pengurangan;
        }

        int addPerkalian(int x, int y){
            int perkalian = x * y;
            cout << "Hasil Perkalian: " << perkalian;
            return perkalian;
        }

        int addPembagian(int x, int y){
            if(y == 0){
                cout << "Error: Pembagian dengan nol tidak diperbolehkan";
                return 0;
            }
            int pembagian = x / y;
            cout << "Hasil Pembagian: " << pembagian;
            return pembagian;
        }

        int addModulus(int x, int y){
            int modulus = x % y;
            cout << "Hasil Modulus: " << modulus;
            return modulus;
        }
};

int main(){

    int num1, num2, pilihan;
    addAngka angkaObject;

    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    cout << "\nPilih operasi:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "5. Modulus\n";
    cout << "Masukkan pilihan (1-5): ";
    cin >> pilihan;

    switch (pilihan){
    case 1:
        angkaObject.addPenjumlahan(num1, num2);
        break;
    case 2:
        angkaObject.addPengurangan(num1, num2);
        break;
    case 3:
    angkaObject.addPerkalian(num1, num2);
        break;
    case 4:
    angkaObject.addPembagian(num1, num2);
        break;
    case 5:
    angkaObject.addModulus(num1, num2);
        break;
    default:
        cout << "Pilihan tidak valid!" << endl;
    }
    
    return 0;
}