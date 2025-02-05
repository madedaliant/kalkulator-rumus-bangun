#include <iostream>
#include <string>
#include <conio.h> // untuk clear screen
#include <cmath> // untuk pangkat
using namespace std;

// bangun datar

void Persegi() {
    int looper = 1, pilih[2], sisi;
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "=============" << endl;
        cout << "Rumus Persegi" << endl;
        cout << "=============" << endl << endl;

        cout << "1. Luas" << endl;
        cout << "2. Keliling" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Luas = Sisi * Sisi" << endl;
            cout << "Masukan ukuran sisi: ";
            cin >> sisi;
            hasil = sisi * sisi;
            cout << endl << "Luas persegi adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Keliling = 4 * Sisi" << endl;
            cout << "Masukan ukuran sisi: ";
            cin >> sisi;
            hasil = 4 * sisi;
            cout << endl << "Keliling persegi adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void PersegiPanjang() {
    int looper = 1, pilih[2], ukuran[2];
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "=====================" << endl;
        cout << "Rumus Persegi Panjang" << endl;
        cout << "=====================" << endl << endl;

        cout << "1. Luas" << endl;
        cout << "2. Keliling" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Luas = Panjang * Lebar" << endl;
            cout << "Masukan ukuran panjang: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran lebar: ";
            cin >> ukuran[1];
            hasil = ukuran[0] * ukuran[1];
            cout << endl << "Luas persegi panjang adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Keliling = 2 * (Panjang + Lebar)" << endl;
            cout << "Masukan ukuran panjang: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran lebar: ";
            cin >> ukuran[1];
            hasil = 2 * (ukuran[0] + ukuran[1]);
            cout << endl << "Keliling persegi panjang adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void Segitiga() {
    int looper = 1, pilih[2], ukuran[3];
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "==============" << endl;
        cout << "Rumus Segitiga" << endl;
        cout << "==============" << endl << endl;

        cout << "1. Luas" << endl;
        cout << "2. Keliling" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Luas = 0.5 * Alas * Tinggi" << endl;
            cout << "Masukan ukuran alas: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran tinggi: ";
            cin >> ukuran[1];
            hasil = 0.5 * ukuran[0] * ukuran[1];
            cout << endl << "Luas segitiga adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Keliling = A + B + C" << endl;
            cout << "Masukan ukuran sisi A: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran sisi B: ";
            cin >> ukuran[1];
            cout << "Masukan ukuran sisi C: ";
            cin >> ukuran[2];
            hasil = ukuran[0] + ukuran[1] + ukuran[2];
            cout << endl << "Keliling segitiga adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void Lingkaran() {
    int looper = 1, pilih[2], jarijari;
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "===============" << endl;
        cout << "Rumus Lingkaran" << endl;
        cout << "===============" << endl << endl;

        cout << "1. Luas" << endl;
        cout << "2. Keliling" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Luas = 3.14 * JariJari * JariJari" << endl;
            cout << "Masukan ukuran jari-jari: ";
            cin >> jarijari;
            hasil = 3.14 * jarijari * jarijari;
            cout << endl << "Luas lingkaran adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Keliling = 2 * 3.14 * JariJari" << endl;
            cout << "Masukan ukuran jari-jari: ";
            cin >> jarijari;
            hasil = 2 * 3.14 * jarijari;
            cout << endl << "Keliling lingkaran adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void JajarGenjang() {
    int looper = 1, pilih[2], ukuran[3];
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "===================" << endl;
        cout << "Rumus Jajar Genjang" << endl;
        cout << "===================" << endl << endl;

        cout << "1. Luas" << endl;
        cout << "2. Keliling" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Luas = Alas * Tinggi" << endl;
            cout << "Masukan ukuran alas: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran tinggi: ";
            cin >> ukuran[1];
            hasil = ukuran[0] * ukuran[1];
            cout << endl << "Luas jajar genjang adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Keliling = 2 * (Alas + SisiMiring)" << endl;
            cout << "Masukan ukuran alas: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran sisi miring: ";
            cin >> ukuran[2];
            hasil = 2 * (ukuran[0] + ukuran[2]);
            cout << endl << "Keliling jajar genjang adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void Trapesium() {
    int looper = 1, pilih[2], ukuran[4];
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "===============" << endl;
        cout << "Rumus Trapesium" << endl;
        cout << "===============" << endl << endl;

        cout << "1. Luas" << endl;
        cout << "2. Keliling" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Luas = 0.5 * (SisiAtas + SisiBawah) * Tinggi" << endl;
            cout << "Masukan ukuran sisi atas: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran sisi bawah: ";
            cin >> ukuran[1];
            cout << "Masukan ukuran tinggi: ";
            cin >> ukuran[2];
            hasil = 0.5 * (ukuran[0] + ukuran[1]) * ukuran[2];
            cout << endl << "Luas trapesium adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Keliling = A + B + C + D" << endl;
            cout << "Masukan ukuran sisi A: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran sisi B: ";
            cin >> ukuran[1];
            cout << "Masukan ukuran sisi C: ";
            cin >> ukuran[2];
            cout << "Masukan ukuran sisi D: ";
            cin >> ukuran[3];
            hasil = ukuran[0] + ukuran[1] + ukuran[2] + ukuran[3];
            cout << endl << "Keliling trapesium adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void LayangLayang() {
    int looper = 1, pilih[2], ukuran[4];
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "===================" << endl;
        cout << "Rumus Layang-Layang" << endl;
        cout << "===================" << endl << endl;

        cout << "1. Luas" << endl;
        cout << "2. Keliling" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Luas = 0.5 * D1 * D2" << endl;
            cout << "Masukan ukuran D1: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran D2: ";
            cin >> ukuran[1];
            hasil = 0.5 * ukuran[0] * ukuran[1];
            cout << endl << "Luas layang-layang adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Keliling = 2 * (SisiPendek + SisiPanjang)" << endl;
            cout << "Masukan ukuran sisi pendek: ";
            cin >> ukuran[2];
            cout << "Masukan ukuran sisi panjang: ";
            cin >> ukuran[3];
            hasil = 2 * (ukuran[2] + ukuran[3]);
            cout << endl << "Keliling layang-layang adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

// bangun ruang

void Kubus() {
    int looper = 1, pilih[2], sisi;
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "===========" << endl;
        cout << "Rumus Kubus" << endl;
        cout << "===========" << endl << endl;

        cout << "1. Volume" << endl;
        cout << "2. Luas Permukaan" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Volume = Sisi * Sisi * Sisi" << endl;
            cout << "Masukan ukuran sisi: ";
            cin >> sisi;
            hasil = sisi * sisi * sisi;
            cout << endl << "Volume kubus adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Luas Permukaan = 6 * Sisi * Sisi" << endl;
            cout << "Masukan ukuran sisi: ";
            cin >> sisi;
            hasil = 6 * sisi * sisi;
            cout << endl << "Luas permukaan kubus adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void Balok() {
    int looper = 1, pilih[2], ukuran[3];
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "===========" << endl;
        cout << "Rumus Balok" << endl;
        cout << "===========" << endl << endl;

        cout << "1. Volume" << endl;
        cout << "2. Luas Permukaan" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Volume = Panjang * Lebar * Tinggi" << endl;
            cout << "Masukan ukuran panjang: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran lebar: ";
            cin >> ukuran[1];
            cout << "Masukan ukuran tinggi: ";
            cin >> ukuran[2];
            hasil = ukuran[0] * ukuran[1] * ukuran[2];
            cout << endl << "Volume balok adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Luas Permukaan = 2 * (Panjang * Lebar + Panjang * Tinggi + Lebar * Tinggi)" << endl;
            cout << "Masukan ukuran panjang: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran lebar: ";
            cin >> ukuran[1];
            cout << "Masukan ukuran tinggi: ";
            cin >> ukuran[2];
            hasil = 2 * (ukuran[0] * ukuran[1] + ukuran[0] * ukuran[2] + ukuran[1] * ukuran[2]);
            cout << endl << "Luas permukaan balok adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void Tabung() {
    int looper = 1, pilih[2], ukuran[2];
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "============" << endl;
        cout << "Rumus Tabung" << endl;
        cout << "============" << endl << endl;

        cout << "1. Volume" << endl;
        cout << "2. Luas Permukaan" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Volume =  3.14 * JariJari * JariJari * Tinggi" << endl;
            cout << "Masukan ukuran jari-jari: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran tinggi: ";
            cin >> ukuran[1];
            hasil = 3.14 * ukuran[0] * ukuran[0] * ukuran[1];
            cout << endl << "Volume tabung adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Luas Permukaan = 2 * 3.14 * JariJari * (JariJari + Tinggi)" << endl;
            cout << "Masukan ukuran jari-jari: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran tinggi: ";
            cin >> ukuran[1];
            hasil = 2 * 3.14 * ukuran[0] * (ukuran[0] + ukuran[1]);
            cout << endl << "Luas permukaan tabung adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void Bola() {
    int looper = 1, pilih[2], jarijari;
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "==========" << endl;
        cout << "Rumus Bola" << endl;
        cout << "==========" << endl << endl;

        cout << "1. Volume" << endl;
        cout << "2. Luas Permukaan" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Volume =  4/3 * 3.14 * JariJari^3" << endl;
            cout << "Masukan ukuran jari-jari: ";
            cin >> jarijari;
            hasil = (4.0 / 3.0) * 3.14 * pow(jarijari, 3);
            cout << endl << "Volume bola adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Luas Permukaan = 4 * 3.14 * JariJari * JariJari;" << endl;
            cout << "Masukan ukuran jari-jari: ";
            cin >> jarijari;
            hasil = 4 * 3.14 * jarijari * jarijari;;
            cout << endl << "Luas permukaan bola adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void Kerucut() {
    int looper = 1, pilih[2], ukuran[3];
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "=============" << endl;
        cout << "Rumus Kerucut" << endl;
        cout << "=============" << endl << endl;

        cout << "1. Volume" << endl;
        cout << "2. Luas Permukaan" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Volume =  1/3 * 3.14 * JariJari * JariJari * Tinggi" << endl;
            cout << "Masukan ukuran jari-jari: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran tinggi: ";
            cin >> ukuran[1];
            hasil = (1.0 / 3.0) * 3.14 * ukuran[0] * ukuran[0] * ukuran[1];
            cout << endl << "Volume kerucut adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Luas Permukaan = 3.14 * JariJari * (JariJari + GarisPelukis);" << endl;
            cout << "Masukan ukuran jari-jari: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran garis pelukis: ";
            cin >> ukuran[2];
            hasil = 3.14 * ukuran[0] * (ukuran[0] + ukuran[2]);
            cout << endl << "Luas permukaan kerucut adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void LimasSegiempat() {
    int looper = 1, pilih[2], ukuran[2];
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "=====================" << endl;
        cout << "Rumus Limas Segiempat" << endl;
        cout << "=====================" << endl << endl;

        cout << "1. Volume" << endl;
        cout << "2. Luas Alas" << endl;
        cout << "1. Luas Selimut" << endl;
        cout << "4. Luas Permukaan" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Volume =  1/3 * LuasAlas * TinggiLimas" << endl;
            cout << "Masukan ukuran luas alas: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran tinggi limas: ";
            cin >> ukuran[1];
            hasil = (1.0 / 3.0) * ukuran[0] * ukuran[1];
            cout << endl << "Volume limas segiempat adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Luas Alas = SisiAlas * SisiAlas;" << endl;
            cout << "Masukan ukuran sisi alas: ";
            cin >> ukuran[0];
            hasil = ukuran[0] * ukuran[0];
            cout << endl << "Luas alas limas segiempat adalah = " << hasil << endl;
        } else if (pilih[0] == 3) {
            cout << endl << "Rumus Luas Selimut = 4 * (0.5 * SisiAlas * TinggiSisiTegak);" << endl;
            cout << "Masukan ukuran sisi alas: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran tinggi sisi tegak: ";
            cin >> ukuran[1];
            hasil = 4 * (0.5 * ukuran[0] * ukuran[1]);
            cout << endl << "Luas alas limas segiempat adalah = " << hasil << endl;
        } else if (pilih[0] == 4) {
            cout << endl << "Rumus Luas Permukaan = LuasAlas + LuasSelimut;" << endl;
            cout << "Masukan ukuran luas alas: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran luas selimut: ";
            cin >> ukuran[1];
            hasil = ukuran[0] + ukuran[1];
            cout << endl << "Luas alas limas segiempat adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

void PrismaSegitiga() {
    int looper = 1, pilih[2], ukuran[4];
    float hasil;

    while (looper == 1){
        looper = 0;
        system("cls");
        cout << "=====================" << endl;
        cout << "Rumus Prisma Segitiga" << endl;
        cout << "=====================" << endl << endl;

        cout << "1. Volume" << endl;
        cout << "2. Luas Alas" << endl;
        cout << "1. Luas Sisi Tegak" << endl;
        cout << "4. Luas Permukaan" << endl << endl;

        cout << "Pilih Rumus: ";
        cin >> pilih[0];

        if (pilih[0] == 1) {
            cout << endl << "Rumus Volume =  0.5 * PanjangAlas * TinggiSegitiga * TinggiPrisma" << endl;
            cout << "Masukan ukuran panjang alas: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran tinggi segitiga: ";
            cin >> ukuran[1];
            cout << "Masukan ukuran tinggi prisma: ";
            cin >> ukuran[2];
            hasil = 0.5 * ukuran[0] * ukuran[1] * ukuran[2];
            cout << endl << "Volume prisma segitiga adalah = " << hasil << endl;
        } else if (pilih[0] == 2) {
            cout << endl << "Rumus Luas Alas = 0.5 * PanjangAlas * TinggiSegitiga;" << endl;
            cout << "Masukan ukuran panjang alas: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran tinggi segitiga: ";
            cin >> ukuran[1];
            hasil = 0.5 * ukuran[0] * ukuran[1];
            cout << endl << "Luas alas prisma segitiga adalah = " << hasil << endl;
        } else if (pilih[0] == 3) {
            cout << endl << "Rumus Luas Sisi Tegak = (PanjangAlas + SisiMiring1 + sisiMiring2) * tinggiPrisma;" << endl;
            cout << "Masukan ukuran panjang alas: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran sisi miring 1: ";
            cin >> ukuran[1];
            cout << "Masukan ukuran sisi miring 2: ";
            cin >> ukuran[2];
            cout << "Masukan ukuran tinggi prisma: ";
            cin >> ukuran[3];
            hasil = (ukuran[0] + ukuran[1] + ukuran[2]) * ukuran[3];
            cout << endl << "Luas sisi tegak prisma segitiga adalah = " << hasil << endl;
        } else if (pilih[0] == 4) {
            cout << endl << "Rumus Luas Permukaan = 2 * LuasAlas + LuasSisiTegak;" << endl;
            cout << "Masukan ukuran luas alas: ";
            cin >> ukuran[0];
            cout << "Masukan ukuran luas sisi tegak: ";
            cin >> ukuran[1];
            hasil = 2 * ukuran[0] + ukuran[1];
            cout << endl << "Luas permukaan prisma segitiga adalah = " << hasil << endl;
        } else {
            cout << endl << "Input salah!" << endl;
        }

        cout << endl << "---------------" << endl;

        cout << endl << "Ulangi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;

        cout << endl << "Pilih Nomor: ";
        cin >> pilih[1];

        if (pilih[1] == 1) {
            looper = 1;
            system("cls");
        } else if (pilih[1] == 2) {
            looper = 0;
            system("cls");
        } else {
            looper = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }
}

// main menu

int main() {
    int looper[3] = {1, 1, 1}, pilih[3];

        while (looper[0] == 1){
        system("cls");
        cout << "=============================" << endl;
        cout << "Kalkulator Rumus Ruang Bangun" << endl;
        cout << "=============================" << endl << endl;

        cout << "1. Bangun Datar" << endl;
        cout << "2. Bangun Ruang" << endl;
        cout << "3. Keluar Aplikasi" << endl << endl;

        cout << "Pilih Nomor: ";
        cin >> pilih[0];

        if (pilih[0] == 1){
            looper[1] = 1;
            system("cls");
            while (looper[1] == 1){
                looper[1] = 0;
                system("cls");
                cout << "==================" << endl;
                cout << "Rumus Bangun Datar" << endl;
                cout << "==================" << endl << endl;

                cout << "1. Persegi" << endl;
                cout << "2. Persegi Panjang" << endl;
                cout << "3. Segitiga" << endl;
                cout << "4. Lingkaran" << endl;
                cout << "5. Jajar Genjang" << endl;
                cout << "6. Trapesium" << endl;
                cout << "7. Layang-layang" << endl;
                cout << "8. Kembali" << endl << endl;

                cout << "Pilih Nomor: ";
                cin >> pilih[1];

                if (pilih[1] == 1){
                    looper[1] = 1;
                    system("cls");
                    Persegi();
                } else if (pilih[1] == 2){
                    looper[1] = 1;
                    system("cls");
                    PersegiPanjang();
                } else if (pilih[1] == 3){
                    looper[1] = 1;
                    system("cls");
                    Segitiga();
                } else if (pilih[1] == 4){
                    looper[1] = 1;
                    system("cls");
                    Lingkaran();
                } else if (pilih[1] == 5){
                    looper[1] = 1;
                    system("cls");
                    JajarGenjang();
                } else if (pilih[1] == 6){
                    looper[1] = 1;
                    system("cls");
                    Trapesium();
                } else if (pilih[1] == 7){
                    looper[1] = 1;
                    system("cls");
                    LayangLayang();
                } else if (pilih[1] == 8){
                    system("cls");
                } else {
                    looper[1] = 1;
                    cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
                    getch();
                }
            }
        } else if (pilih[0] == 2) {
            looper[2] = 1;
            system("cls");
            while (looper[2] == 1){
                looper[2] = 0;
                system("cls");
                cout << "==================" << endl;
                cout << "Rumus Bangun Ruang" << endl;
                cout << "==================" << endl << endl;

                cout << "1. Kubus" << endl;
                cout << "2. Balok" << endl;
                cout << "3. Tabung" << endl;
                cout << "4. Bola" << endl;
                cout << "5. Kerucut" << endl;
                cout << "6. Limas Segiempat" << endl;
                cout << "7. Prisma Segitiga" << endl;
                cout << "8. Kembali" << endl << endl;

                cout << "Pilih Nomor: ";
                cin >> pilih[2];

                if (pilih[2] == 1){
                    looper[2] = 1;
                    system("cls");
                    Kubus();
                } else if (pilih[2] == 2){
                    looper[2] = 1;
                    system("cls");
                    Balok();
                } else if (pilih[2] == 3){
                    looper[2] = 1;
                    system("cls");
                    Tabung();
                } else if (pilih[2] == 4){
                    looper[2] = 1;
                    system("cls");
                    Bola();
                } else if (pilih[2] == 5){
                    looper[2] = 1;
                    system("cls");
                    Kerucut();
                } else if (pilih[2] == 6){
                    looper[2] = 1;
                    system("cls");
                    LimasSegiempat();
                } else if (pilih[2] == 7){
                    looper[2] = 1;
                    system("cls");
                    PrismaSegitiga();
                } else if (pilih[2] == 8){
                    system("cls");
                } else {
                    looper[2] = 1;
                    cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
                    getch();
                }
            }
        } else if (pilih[0] == 3) {
            looper[0] = 0;
                system("cls");
                cout << "==================" << endl;
                cout << "Keluar aplikasi..." << endl;
                cout << "==================" << endl << endl;
                cout << "Tekan tombol apapun untuk keluar. ";
                getch();
        } else {
            looper[0] = 1;
            cout << "Input salah! Tekan tombol apapun untuk melanjutkan. ";
            getch();
        }
    }



    return 0;
}

