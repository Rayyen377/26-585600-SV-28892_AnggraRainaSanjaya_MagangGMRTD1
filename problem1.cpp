#include <iostream>
using namespace std;

int main(){
    int n, k, m;
    cout << "Masukkan maksimal kapasitas Robot Angkut: ";
    cin >> k;
    cout << "Masukkan n buah barang yang terdapat pada kotak 1: ";
    cin >> n;
    cout << "Masukkan m buah barang yang terdapat dalam kotak 2: ";
    cin >> m;

        int kotak_1 = n*2;
        int kotak_2 = m;
        int total_semua = kotak_1 + kotak_2;
        int langkah = -1, kotak_3 = 0;
        

        if (total_semua == 0) {
        langkah = 0;
        cout << "Jumlah langkahnya yaitu " << langkah;
        return 0;
        }

        //pengecekan apakah kotak1 udah sesuai dengan pembagian
        while (kotak_1 > total_semua/3){
            if (kotak_2 < total_semua/3){
            langkah++;
                if (k == 2){
                kotak_2 = k + kotak_2;
                kotak_1 = kotak_1 - k;
                }else{
                int cap_1 = k / 2;
                int bawaan = cap_1 * 2;
                kotak_2 = kotak_2 + bawaan;
                kotak_1 = kotak_1 - bawaan;
            }
            langkah++;
            }else if (kotak_3 < total_semua/3){
                langkah++;
            if (k == 2){
                kotak_3 = k + kotak_3;
                kotak_1 = kotak_1 - k;
            }else{
                int cap_1 = k / 2;
                int bawaan = cap_1 * 2;
                kotak_2 = kotak_2 + bawaan;
                kotak_1 = kotak_1 - bawaan;
            }
            langkah++;
            }
        }
        //
        while (kotak_2 > total_semua/3){
            if (kotak_1 < total_semua/3){
            langkah++;
                if (k == 1){
                kotak_1 = k + kotak_1;
                kotak_2 = kotak_2 - k;
                }else{
                int cap_2 = k;
                kotak_1 = kotak_1 + cap_2;
                kotak_2 = kotak_2 - cap_2;
            }
            langkah++;
            }else if (kotak_3 < total_semua/3){
                langkah++;
            if (k == 2){
                kotak_3 = k + kotak_3;
                kotak_2 = kotak_2 - k;
            }else{
                int cap_2 = k;
                kotak_3 = kotak_3 + cap_2;
                kotak_2 = kotak_2 - cap_2;
            }
            langkah++;
            }
            
        }
        cout << "Jumlah langkahnya yaitu " << langkah;

    }
