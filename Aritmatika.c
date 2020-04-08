#include<stdio.h>
#include<stdlib.h>
// #include<conio.h>
#include<math.h>
#include<limits.h>

//=====================================================================
// PROSEDUR
void Menu();
void Kembali();
void Penjumlahan();
void Pengurangan();
void Perkalian();
void Pembagian();
void Modulus();

void clear_stream(FILE *in)
{
    int ch;
    
    clearerr(in);
    
    do
        ch = getc(in);
    while (ch != '\n' && ch != EOF);
    
    clearerr(in);
}
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

// Validasi untuk modulus tanpa desimal
int input_validasi1(){
    int i = 0;
    int titik =0;
    int salah =0;
    int val;
    char angka[100];

    scanf("%s", &angka);

    while (angka[i] != '\0'){
        if(angka[0] == '-'){
            salah =1;
            angka[0] = '\0';
        } else if(angka[i]>='0' && angka[i]<='9' || angka[i] == '-' || angka[0] == '.')
        {
            if(angka[i] == '.'){
                titik = titik + 1;
                    if(titik > 1 || angka[i+1] == '\0'){
                        salah = 1;
                        angka[i] = '\0';
                    }
            }
            i++;
        } else {
            salah = 1;
            angka[i] = '\0';
        }
        
    }
    
    val = atof(angka);

    if(salah==1){
        printf("INPUT TIDAK BOLEH BILANGAN DESIMAL DAN HURUF ALFABET\n");
        printf("Masukan angka salah masukan yang benar : \n");
        printf("Masukkan Angka: ");
        return input_validasi1();
    } else {
        return val;
    }

}

// Validasi Input Menu
float input_validasi2() {
    int i = 0;
    int titik =0;
    int salah =0;
    float val;
    char angka[100];

    scanf("%s", &angka);

    while (angka[i] != '\0'){
        if(angka[0] == '-'){
            salah =1;
            angka[0] = '\0';
        } else if(angka[i]>='0' && angka[i]<='9' || angka[i] == '.' || angka[0] == '-')
        {
            if(angka[i] == '.'){
                titik = titik + 1;
                    if(titik > 1 || angka[i+1] == '\0'){
                        salah = 1;
                        angka[i] = '\0';
                    }
            }
            i++;
        } else {
            salah = 1;
            angka[i] = '\0';
        }
        
    }
    
    val = atof(angka);

    if(salah==1){
        printf("INPUT TIDAK BOLEH HURUF ALFABET\n");
        printf("Masukkan input sesuai dengan pilihan yang tersedia: \n");
        return input_validasi1();
    } else {
        return val;
    }

}
// Validasi Input Menu

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
    masuk = input_validasi2();
    system("clear");

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
	    printf("Nomor Menu Yang Anda Masukkan Tidak Ada\n");
        printf("Harap Masukan Input kembali\n");
        Menu();
	    break;
	 }

}

void Penjumlahan(){
	int masuk;
	float a;
	float b;
    int valint, temp;
	float hasil;
	
    printf("================================\n");
    printf("|PROGRAM PERHITUNGAN ARITMATIKA|\n");
    printf("================================\n");
    printf("================================\n");
    printf("|PROGRAM PENJUMLAHAN|\n");
    printf("================================\n");
    printf("Masukkan bilangan yang ingin di hitung:\n");
    printf("Masukkan Angka: ");
    valint = scanf("%f", &a);
    while(valint!=1){
		    while((temp=getchar()) != EOF && temp != '\n');
		    printf("Input Salah.. Harap Masukan angka : \n");
            printf("Masukkan Angka: ");
		    valint = scanf("%f", &a);
            }
    printf("Masukkan Angka: ");
    valint = scanf("%f", &b);
    while(valint!=1){
		    while((temp=getchar()) != EOF && temp != '\n');
		    printf("Input Salah.. Harap Masukan angka : \n");
            printf("Masukkan Angka: ");
		    valint = scanf("%f", &b);
            }
    printf("------------------------- + ");
    hasil = hitungPenjumlahan(a, b);
    printf("\nHasil = ");
    printf("%.2f \n", hasil);
    printf("================================\n");
    printf("1. Lanjut\n");
    printf("2. Kembali\n");
    printf("================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("clear");

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
    int valint, temp;
	float hasil;
	
    printf("================================\n");
    printf("|PROGRAM PERHITUNGAN ARITMATIKA|\n");
    printf("================================\n");
    printf("================================\n");
    printf("|PROGRAM PENGURANGAN|\n");
    printf("================================\n");
    printf("Masukkan bilangan yang ingin di hitung:\n");
    printf("Masukkan Angka: ");
    valint = scanf("%f", &a);
    while(valint!=1){
		    while((temp=getchar()) != EOF && temp != '\n');
		    printf("Input Salah.. Harap Masukan angka : \n");
            printf("Masukkan Angka: ");
		    valint = scanf("%f", &a);
            }
    printf("Masukkan Angka: ");
    valint = scanf("%f", &b);
     while(valint!=1){
		    while((temp=getchar()) != EOF && temp != '\n');
		    printf("Input Salah.. Harap Masukan angka : \n");
            printf("Masukkan Angka: ");
		    valint = scanf("%f", &b);
            }
    printf("------------------------- - ");
    
    hasil = hitungPengurangan(a, b);
    printf("\nHasil = ");
    printf("%.2f \n", hasil);
    printf("================================\n");
    printf("1. Lanjut\n");
    printf("2. Kembali\n");
    printf("================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("clear");

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
    int valint, temp;
	float hasil;
	
    printf("================================\n");
    printf("|PROGRAM PERHITUNGAN ARITMATIKA|\n");
    printf("================================\n");
    printf("================================\n");
    printf("|PROGRAM PERKALIAN|\n");
    printf("================================\n");
    printf("Masukkan bilangan yang ingin di hitung:\n");
    printf("Masukkan Angka: ");
    valint = scanf("%f", &a);
         while(valint!=1){
		    while((temp=getchar()) != EOF && temp != '\n');
		    printf("Input Salah.. Harap Masukan angka : \n");
            printf("Masukkan Angka: ");
		    valint = scanf("%f", &a);
            }
    printf("Masukkan Angka: ");
    valint = scanf("%f", &b);
         while(valint!=1){
		    while((temp=getchar()) != EOF && temp != '\n');
		    printf("Input Salah.. Harap Masukan angka : \n");
            printf("Masukkan Angka: ");
		    valint = scanf("%f", &b);
            }
    printf("------------------------ x ");
    hasil = hitungPerkalian(a, b);
    printf("\nHasil = ");
    printf("%.2f \n", hasil);
    printf("================================\n");
    printf("1. Lanjut\n");
    printf("2. Kembali\n");
    printf("================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("clear");

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

// gaboleh dibagi 0 
void Pembagian(){
	int masuk;
	float a;
	float b;
    int valint, temp;
	float hasil;
	
    printf("================================\n");
    printf("|PROGRAM PEMBAGIAN|\n");
    printf("================================\n");
    printf("Masukkan bilangan yang ingin di hitung:\n");
    printf("Masukkan Angka: ");
    valint = scanf("%f", &a);
     while(valint!=1){
		    while((temp=getchar()) != EOF && temp != '\n');
		    printf("Input Salah.. Harap Masukan angka : \n");
            printf("Masukkan Angka: ");
		    valint = scanf("%f", &a);
            }
    printf("Masukkan Angka: ");
    valint = scanf("%f", &b);
    while(valint!=1){
		    while((temp=getchar()) != EOF && temp != '\n');
		    printf("Input Salah.. Harap Masukan angka : \n");
            printf("Masukkan Angka: ");
		    valint = scanf("%f", &b);
            }
    printf("------------------------- : \n");

    if (b = 0) {
        hasil = hitungPembagian(a, b);
        printf("\nHasil = ");
        printf("%.2f \n", hasil);
    } else {
        printf ("Silahkan coba lagi\n");
        system("clear");
        Pembagian();
    }
    
    printf("================================\n");
    printf("1. Lanjut\n");
    printf("2. Kembali\n");
    printf("================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("clear");

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


// Program Modulus 
// validasi non desimal atau pembulatan 
void Modulus(){
	int masuk;
	int a;
	int b;
	int hasil;
    // int valint, temp;
	// char ch;

    printf("================================\n");
    printf("|PROGRAM PERHITUNGAN ARITMATIKA|\n");
    printf("================================\n");
    printf("================================\n");
    printf("|PROGRAM MODULUS|\n");
    printf("================================\n");
    printf("Masukkan bilangan yang ingin di hitung:\n");
    printf("Masukkan Angka: ");
    a = input_validasi1();
    printf("Masukkan Angka: ");
    b = input_validasi1();
    printf("------------------------- Mod ");
    hasil = hitungModulus(a, b);
    printf("\nHasil = ");
    printf("%d\n", hasil);
    printf("================================\n");
    printf("\n1. Lanjut\n");
    printf("2. Kembali\n");
    printf("================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("clear");

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


