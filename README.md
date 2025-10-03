# Ojek Tarif Simulator

---

## 👨‍💼👩‍💼 Pembuat Project
   - Dimas Antareza
     NPM (2507071021)
   - Luna Adelia
     NPM (2507071021)
   - Dimas Antareza
     NPM (2507071021)
   - Dimas Antareza
     NPM (2507071021)


---

## 📖 Latar Belakang
Seiring berkembangnya transportasi online, perhitungan tarif ojek semakin kompleks karena adanya variasi jarak dan potongan harga tertentu. Project **Ojek Tarif Simulator** dibuat untuk memudahkan pengguna menghitung tarif ojek berdasarkan jarak yang ditempuh, termasuk simulasi beberapa perjalanan sekaligus. Program ini dirancang agar mudah digunakan, akurat, dan dapat menjadi alat pembelajaran algoritma dasar dalam pemrograman C++.

---

## 💡 Fungsi Program
Program ini memiliki fungsi utama sebagai berikut:
1. Menghitung tarif perjalanan ojek berdasarkan jarak dengan skema diskon 10% per blok 1000 meter setelah blok pertama.
2. Menyediakan simulasi beberapa perjalanan sekaligus untuk mengetahui total tarif.
3. Memberikan opsi menu interaktif yang mudah dipahami pengguna.
4. Menangani input yang tidak valid (misalnya jarak negatif atau pilihan menu salah).

---

## 🛠 Langkah-langkah Membuat Program
1. **Persiapan**: Buat project baru di VS Code dan buat file `main.cpp`.
2. **Membuat fungsi tarif**: Buat fungsi `hitungan_tarif(int jarak)` untuk menghitung tarif per perjalanan.
3. **Membuat menu interaktif**: Gunakan `do-while` dan `switch-case` untuk menu utama (hitung 1 perjalanan, simulasi banyak perjalanan, keluar).
4. **Menangani input pengguna**: Tambahkan validasi untuk input jarak negatif dan pilihan menu salah.
5. **Simulasi beberapa perjalanan**: Gunakan `vector` untuk menyimpan jarak dan tarif tiap perjalanan, lalu hitung total.
6. **Loop menu**: Tambahkan opsi kembali ke menu utama setelah menyelesaikan suatu perhitungan.
7. **Output**: Tampilkan tarif per perjalanan dan total perjalanan jika melakukan simulasi banyak perjalanan.

---

## ⚙️ Penjelasan Algoritma
1. **Hitungan tarif**:
   - Tarif awal = 5000 per blok pertama (1000 meter).
   - Untuk setiap blok berikutnya, tarif dikurangi 10% dari tarif blok sebelumnya.
   - Total tarif = jumlah tarif dari semua blok.
2. **Menu interaktif**:
   - `case 1`: Input jarak satu perjalanan → hitung tarif → tampilkan.
   - `case 2`: Input jumlah perjalanan → input jarak tiap perjalanan → hitung tarif tiap perjalanan → tampilkan rincian dan total.
   - `case 3`: Keluar program.
3. **Validasi input**:
   - Jika jarak < 0 → tampilkan pesan error.
   - Jika menu salah → tampilkan pesan error.
4. **Looping**:
   - Program kembali ke menu utama jika pengguna memilih `y`/`Y` setelah menyelesaikan perhitungan.

---

## 📄 Contoh Input & Output

| Menu | Input | Output |
|------|-------|--------|
| 1 (Hitung Tarif) | 2500 | Tarif : Rp 13550<br>Apakah ingin kembali ke menu? (y/n) : n<br>Program Selesai Terima Kasih! |
| 2 (Simulasi Beberapa Perjalanan) | 3 perjalanan: 1200, 800, 2500 | === Rincian Tarif Perjalanan ===<br>Perjalanan ke-1 (1200 m): Rp 9500<br>Perjalanan ke-2 (800 m): Rp 5000<br>Perjalanan ke-3 (2500 m): Rp 13550<br>Total semua perjalanan : Rp 28550<br>Apakah ingin kembali ke menu? (y/n) : n |
| Error (Jarak Negatif) | -500 | Input tidak valid, jarak tidak boleh negatif<br>Apakah ingin kembali ke menu? (y/n) : |
| Error (Menu Salah) | 5 | Pilihan tidak valid, silahkan coba lagi.<br>Apakah ingin kembali ke menu? (y/n) : |

---

## 🚀 Proyeksi Kedepan
Beberapa pengembangan yang bisa dilakukan di masa depan:
1. Menambahkan opsi tarif berdasarkan waktu (misalnya tarif malam atau tarif rush hour).
2. Menyimpan riwayat perjalanan ke file eksternal (CSV atau TXT).
3. Menambahkan fitur diskon promo atau voucher.
4. Mengembangkan versi GUI menggunakan library C++ seperti Qt atau SFML.
5. Mengintegrasikan dengan data GPS untuk simulasi jarak yang lebih realistis.

---

