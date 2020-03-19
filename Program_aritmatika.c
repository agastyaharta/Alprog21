#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//=====================================================================
// PROSEDUR
void Menu();

void Kembali();

void Penjumlahan();
void Pengurangan();
void Perkalian();
void Pembagian();
void Modulus();

//=====================================================================
// FUNGSI
float hitungPenjumlahan(float a, float b){
 float hasil = a+b;
 
 return hasil;

}

float hitungPengurangan(float a, float b){
 float hasil = a-b;
 
 return hasil;

}

float hitungPerkalian(float a, float b){
 float hasil = a*b;
 
 return hasil;

}

float hitungPembagian(float a, float b){
 float hasil = a/b;
 
 return hasil;

}

int hitungModulus(int a, int b){
 int hasil = a%b;
 
 return hasil;

}

//=====================================================================
//MAIN

int main(){
    Menu();
    system("pause");
    return 0;
}
//=====================================================================
//MENU

void Menu(){
    int masuk;

    printf("================================\n");
    printf("|PROGRAM PERHITUNGAN ARITMATIKA|\n");
    printf("================================\n");
    printf("\t1. Penjumlahan\n");
    printf("\t2. Pengurangan\n");
    printf("\t3. Perkalian\n");
    printf("\t4. Pembagian\n");
    printf("\t5. Modulus\n");
    printf("================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("cls");

    switch (masuk){
	    case 1:
	    Penjumlahan();
	    break;
	    case 2:
	    Pengurangan();
	    break;
	    case 3:
	    Perkalian();
	    break;
	    case 4:
	    Pembagian();
	    break;
	    case 5:
	    Modulus();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
	    break;
	 }

}

void Penjumlahan(){
	int masuk;
	float a;
	float b;
	float hasil;
	
    printf("=====================\n");
    printf("|PROGRAM PENJUMLAHAN|\n");
    printf("=====================\n");
    printf("Masukkan bilangan yang ingin di hitung:\n");
    printf("     ");
    scanf("%f", &a);
    printf("     ");
    scanf("%f", &b);
    printf("---------- + ");
    hasil = hitungPenjumlahan(a, b);
    printf("\n= ");
    printf("%.2f", hasil);
    printf("\n1. Lanjut\n");
    printf("2. Kembali\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("cls");

	switch (masuk){
	    case 1:
	    Penjumlahan();
	    break;
	    case 2:
	    Menu();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
	    break;
	 }

}

void Pengurangan(){
	int masuk;
	float a;
	float b;
	float hasil;
	
    printf("=====================\n");
    printf("|PROGRAM PENGURANGAN|\n");
    printf("=====================\n");
    printf("Masukkan bilangan yang ingin di hitung:\n");
    printf("     ");
    scanf("%f", &a);
    printf("     ");
    scanf("%f", &b);
    printf("---------- - ");
    hasil = hitungPengurangan(a, b);
    printf("\n= ");
    printf("%.2f", hasil);
    printf("\n1. Lanjut\n");
    printf("2. Kembali\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("cls");

	switch (masuk){
	    case 1:
	    Pengurangan();
	    break;
	    case 2:
	    Menu();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
	    break;
	 }

}

void Perkalian(){
	int masuk;
	float a;
	float b;
	float hasil;
	
    printf("=====================\n");
    printf("|PROGRAM PERKALIAN|\n");
    printf("=====================\n");
    printf("Masukkan bilangan yang ingin di hitung:\n");
    printf("     ");
    scanf("%f", &a);
    printf("     ");
    scanf("%f", &b);
    printf("---------- x ");
    hasil = hitungPerkalian(a, b);
    printf("\n= ");
    printf("%.2f", hasil);
    printf("\n1. Lanjut\n");
    printf("2. Kembali\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("cls");

	switch (masuk){
	    case 1:
	    Perkalian();
	    break;
	    case 2:
	    Menu();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
	    break;
	 }
}

void Pembagian(){
	int masuk;
	float a;
	float b;
	float hasil;
	
    printf("=====================\n");
    printf("|PROGRAM PEMBAGIAN|\n");
    printf("=====================\n");
    printf("Masukkan bilangan yang ingin di hitung:\n");
    printf("     ");
    scanf("%f", &a);
    printf("     ");
    scanf("%f", &b);
    printf("---------- : ");
    hasil = hitungPembagian(a, b);
    printf("\n= ");
    printf("%.2f", hasil);
    printf("\n1. Lanjut\n");
    printf("2. Kembali\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("cls");

	switch (masuk){
	    case 1:
	    Pembagian();
	    break;
	    case 2:
	    Menu();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
	    break;
	 }
}

void Modulus(){
	int masuk;
	int a;
	int b;
	int hasil;
	
    printf("=====================\n");
    printf("|PROGRAM MODULUS|\n");
    printf("=====================\n");
    printf("Masukkan bilangan yang ingin di hitung:\n");
    printf("     ");
    scanf("%d", &a);
    printf("     ");
    scanf("%d", &b);
    printf("---------- - ");
    hasil = hitungModulus(a, b);
    printf("\n= ");
    printf("%d", hasil);
    printf("\n1. Lanjut\n");
    printf("2. Kembali\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("cls");

	switch (masuk){
	    case 1:
	    Modulus();
	    break;
	    case 2:
	    Menu();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
	    break;
	 }
}


