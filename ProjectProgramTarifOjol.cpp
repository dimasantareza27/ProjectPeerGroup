#include <iostream>
#include <vector>
using namespace std;

// Fungsi hitung tarif
int hitungan_tarif(int jarak) {
    int blok = (jarak + 999) / 1000; // pembulatan blok 1000m
    if (blok < 1) blok = 1;

    int tarif_awal = 5000;
    int tarif_blok = tarif_awal;
    int total = 0;

    for (int i = 1; i <= blok; i++) {
        total += tarif_blok;
        tarif_blok = tarif_blok * 90 / 100; // potongan 10% tiap 1000m berikutnya
    }
    return total;
}

int main() {
    int pilihan;
    char lanjut;

    do {
        cout << "\n=== MENU TARIF OJEK BY KEL0MPOK [1] ===\n\n";
        cout << "1. hitung tarif 1 perjalanan\n";
        cout << "2. simulasi beberapa perjalanan\n";
        cout << "3. Keluar\n";
        cout << "silahkan pilih menu : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int jarak;
                cout << "masukan jarak yang akan ditempuh (meter): ";
                cin >> jarak;

                if (jarak < 0) {
                    cout << "input tidak valid, jarak tidak boleh negatif\n";
                } else {
                    int tarif = hitungan_tarif(jarak);
                    cout << "tarif : Rp " << tarif << endl;
                }
                break;
            }

            case 2: {
                int jumlah;
                cout << "\nberapa kali perjalanan yang ingin disimulasikan :  ";
                cin >> jumlah;

                vector<int> jarak(jumlah);
                vector<int> tarif(jumlah);
                int total_semua = 0;

                for (int i = 0; i < jumlah; i++) {
                    cout << "\nperjalanan ke-" << i + 1 << " (meter) : ";
                    cin >> jarak[i];

                    if (jarak[i] < 0) {
                        cout << "input tidak valid, jarak tidak boleh negatif.\n";
                        tarif[i] = 0;
                    } else {
                        tarif[i] = hitungan_tarif(jarak[i]);
                    }
                    total_semua += tarif[i];
                }

                cout << "\n=== Rincian Tarif Perjalanan ===\n";
                for (int i = 0; i < jumlah; i++) {
                    cout << "perjalanan ke-" << i + 1 << " (" << jarak[i] << " m): RP " << tarif[i] << endl;
                }
                cout << "-----------------------------------\n";
                cout << "total semua perjalanan : RP " << total_semua << endl;
                break;
            }

            case 3:
                cout << "Program Selesai Terima Kasih!\n";
                return 0;

            default:
                cout << "pilihan tidak valid, silahkan coba lagi.\n";
        }

        cout << "\napakah ingin kembali ke menu? (y/n) : ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Program Selesai Terima Kasih!\n";
    return 0;
}
