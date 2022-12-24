# P2_Komnum_E4

# Praktikum Komputasi Numerik E
Kelompok 4:
-Dian Lies Seviona Dabukke (5025211080)
-Shafa Nabilah Hanin (5025211222)
## Metode Romberg

Metode Romberg merupakan metode integrasi yang didasarkan pada ekstrapolasi Richardson
untuk memperoleh nilai integrasi yang semakin baik. Setiap penerapan ekstrapolasi
Richardson akan menaikkan orde galat pada hasil solusinya.
Langkah-langkah metode Romberg adalah sebagai berikut:
1. Tentukan nilai fungsi berdasarkan banyaknya iterasi yang dihitung dengan rumus 
h=(b-a)/n dimana h adalah interval dan n adalah pias. Dengan n=2^k
2. Tentukan nilai Ak yaitu perkiraan nilai integrasi dengan metode trapezoid dan jumlah pias  n=2^k dengan orde galat O(h^2)
3. Tentukan nilai Bk yang juga merupakan nilai perkiraan integrasi dengan orde galat O(h^4) serta menggunakan nilai Ak 
yang sudah didapat
4. Tentukan nilai Ck yang juga merupakan nilai perkiraan integrasi dengan orde galat O(h^6) serta menggunakan nilai Bk 
yang sudah didapat
5. Lakukan langkah tersebut hingga nilai k dan mencapai nilai hasil integrasi terbaik
