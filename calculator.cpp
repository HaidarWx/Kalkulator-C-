
#include <iostream>

using namespace std;
int main() {
    float operasi = 0;
    float x = 0;
    float y = 0;
    float hasil = 0;
    cout << "[KALKULATOR MENGGUNAKAN C++. Made by Hai☆Dar]" << endl;
    cout << "☆☆☆☆☆☆☆☆KETERANGAN☆☆☆☆☆☆☆" << endl;
    cout << "Penjumlahan (+) = 1" << endl;
    cout << "Pengurangan (-) = 2" << endl;
    cout << "Perkalian   (x) = 3" << endl;
    cout << "Pembagian   (:) = 4" << endl;
   
    cout << "Pilih Operasi [1/2/3/4]" << endl << "Operasi = " ;
    cin >> operasi;
    if(operasi == 1) {
         cout << "Masukan Angka Pertama = "  ;
         cin >> x;
         cout << "Masukan Angka Kedua = " ;
         cin >> y;
         hasil = x + y;
         cout << "Hasilnya Adalah = " << hasil << endl;
    }else if(operasi == 2) {
         cout << "Masukan Angka Pertama = "  ;
         cin >> x;
         cout << "Masukan Angka Kedua = "  ;
         cin >> y;
         hasil = x - y;
         cout << "Hasilnya Adalah = " << hasil << endl;
    }else if(operasi == 3) {
         cout << "Masukan Angka Pertama = "  ;
         cin >> x;
         cout << "Masukan Angka Kedua = "  ;
         cin >> y;
         hasil = x * y;
         cout << "Hasilnya Adalah = " << hasil << endl;
    }else if(operasi == 4) {
         cout << "Masukan Angka Pertama = "  ;
         cin >> x;
         cout << "Masukan Angka Kedua = "  ;
         cin >> y;
         hasil = x / y;
         cout << "Hasilnya Adalah = " << hasil << endl;
    }else {
        cout << "Anda Belum Memasukan Angka" << endl;
    }
    
    return 0;
}

