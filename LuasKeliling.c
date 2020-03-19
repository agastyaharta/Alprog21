#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define phi 3.14

void Menu();

void LuasBangunDatar();
void KelilingBangunDatar();
void KembaliLuas();
void KembaliKel();

void LSegitigaSembarang();
void LBelahKetupat();
void LJajargenjang();
void LTrapesium();
void LLingkaran();

void KSegitigaSembarang();
void KBelahKetupat();
void KJajargenjang();
void KTrapesium();
void KLingkaran();

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

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("1.Hitung Luas Bangun Datar\n");
    printf("2.Hitung Keliling Bangun Datar\n");
    printf("=================================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("cls");

    switch (masuk){
	    case 1:
	    LuasBangunDatar();
	    break;
	    case 2:
	    KelilingBangunDatar();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
	    break;
	 }

}

void LuasBangunDatar(){
  int masuk;
    printf("Pilih Bangun Datar Dibawah\n");
    printf("1.Segitiga Sembarang\n");
    printf("2.Belah Ketupat\n");
    printf("3.Jajargenjang\n");
    printf("4.Trapesium\n");
    printf("5.Lingkaran\n");
    printf("6.Back\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("cls");

	switch (masuk){
	    case 1:
	    LSegitigaSembarang();
	    break;
	    case 2:
	    LBelahKetupat();
	    break;
	    case 3:
	    LJajargenjang();
	    break;
	    case 4:
	    LTrapesium();
	    break;
	    case 5:
	    LLingkaran();
	    break;
	    case 6:
	    Menu();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
	    break;
	 }

}

void LSegitigaSembarang(){
 float a,b,c,s,luas;

    printf("==================================\n");
    printf("| Hitung Luas Segitiga Sembarang |\n");
    printf("==================================\n");
    printf(" Masukan nilai a (cm) : \n");
    scanf("%f",&a);
    printf("Masukan nilai b (cm) : \n");
    scanf("%f",&b);
    printf(" Masukan nilai c (cm) : \n");
    scanf("%f",&c);
    s = (a+b+c)/2;
    luas = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Luas Segitiga Sembarang adalah : %f cm2\n",luas);
    KembaliLuas();


}

void LBelahKetupat(){
    float da,db,luas;

    printf("==================================\n");
    printf("| Hitung Luas Belah Ketupat |\n");
    printf("==================================\n");
    printf(" Masukan nilai d1 (cm) : \n");
    scanf("%f",&da);
    printf("Masukan nilai d2 (cm) : \n");
    scanf("%f",&db);
    luas = da*db/2;
    printf("Luas Belah Ketupat adalah : %f cm2\n",luas);
    KembaliLuas();
}

void LJajargenjang(){
 float a,t,luas;

    printf("==================================\n");
    printf("| Hitung Luas Jajargenjang |\n");
    printf("==================================\n");
    printf("Masukan nilai alas (cm) : \n");
    scanf("%f",&a);
    printf("Masukan nilai tinggi (cm) : \n");
    scanf("%f",&t);
    luas = a*t;
    printf("Luas Jajargenjang adalah : %f cm2\n",luas);
    KembaliLuas();


}

void LTrapesium(){
 float a,b,t,luas;

    printf("==================================\n");
    printf("| Hitung Luas Trapesium |\n");
    printf("==================================\n");
    printf("Masukan nilai a (cm) : \n");
    scanf("%f",&a);
    printf("Masukan nilai b (cm) : \n");
    scanf("%f",&b);
    printf("Masukan nilai tinggi (cm) : \n");
    scanf("%f",&t);
    luas =(a+b)*t/2;
    printf("Luas Trapesium adalah : %f cm2\n",luas);
    KembaliLuas();


}

void LLingkaran(){
 float r,luas;

    printf("==================================\n");
    printf("| Hitung Luas Lingkaran|\n");
    printf("==================================\n");
    printf("Masukan nilai jari-jari (cm) : \n");
    scanf("%f",&r);
    luas = phi*r*r;
    printf("Luas Lingkaran adalah : %f cm2\n",luas);
    KembaliLuas();

}

void KelilingBangunDatar(){
  int masuk;
    printf("Pilih Bangun Datar Dibawah\n");
    printf("1.Segitiga Sembarang\n");
    printf("2.Belah Ketupat\n");
    printf("3.Jajargenjang\n");
    printf("4.Trapesium\n");
    printf("5.Lingkaran\n");
    printf("6.Back\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &masuk);
    system("cls");

	switch (masuk){
	    case 1:
	    KSegitigaSembarang();
	    break;
	    case 2:
	    KBelahKetupat();
	    break;
	    case 3:
	    KJajargenjang();
	    break;
	    case 4:
	    KTrapesium();
	    break;
	    case 5:
	    KBelahKetupat();
	    break;
	    case 6:
	    Menu();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
	    break;
	 }

}

void KSegitigaSembarang(){
 float a,b,c,kel;

    printf("======================================\n");
    printf("| Hitung Keliling Segitiga Sembarang |\n");
    printf("======================================\n");
    printf(" Masukan nilai a (cm) : \n");
    scanf("%f",&a);
    printf("Masukan nilai b (cm) : \n");
    scanf("%f",&b);
    printf(" Masukan nilai c (cm) : \n");
    scanf("%f",&c);
    kel = a+b+c;
    printf("Keliling Segitiga Sembarang adalah : %f cm\n",kel);
    KembaliKel();

}

void KBelahKetupat(){
    float s,kel;

    printf("==================================\n");
    printf("| Hitung Keliling Belah Ketupat |\n");
    printf("==================================\n");
    printf(" Masukan nilai sisi (cm) : \n");
    scanf("%f",&s);
    kel = 4*s;
    printf("Keliling Belah Ketupat adalah : %f cm\n",kel);
    KembaliKel();

}

void KJajargenjang(){
 float a,b,kel;

    printf("==================================\n");
    printf("| Hitung Luas Jajargenjang |\n");
    printf("==================================\n");
    printf("Masukan nilai alas (cm) : \n");
    scanf("%f",&a);
    printf("Masukan nilai sisi miring (cm) : \n");
    scanf("%f",&b);
    kel = 2*(a+b);
    printf("Keliling Jajargenjang adalah : %f cm\n",kel);
    KembaliKel();

 
}

void KTrapesium(){
 float a,b,c,d,kel;

    printf("==================================\n");
    printf("| Hitung Keliling Trapesium |\n");
    printf("==================================\n");
    printf("Masukan nilai panjang sisi a (cm) : \n");
    scanf("%f",&a);
    printf("Masukan nilai panjang sisi b (cm) : \n");
    scanf("%f",&b);
    printf("Masukan nilai panjang sisi c (cm) : \n");
    scanf("%f",&c);
    printf("Masukan nilai panjang sisi d (cm) : \n");
    scanf("%f",&d);
    kel =a+b+c+d;
    printf("Keliling Trapesium adalah : %f cm\n",kel);
    KembaliKel();


}

void KLingkaran(){
 float r,kel;

    printf("==================================\n");
    printf("| Keliling Luas Lingkaran|\n");
    printf("==================================\n");
    printf("Masukan nilai jari-jari (cm) : \n");
    scanf("%f",&r);
    kel = 2*phi*r;
    printf("Keliling Lingkaran adalah : %f cm\n",kel);
    KembaliKel();

}

void KembaliLuas(){
    int keluar;
    printf("=======================================\n");
    printf("1.MENU\n");
    printf("2.Kembali\n");
    printf("=======================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &keluar);
    system("cls");

	switch(keluar){
	    case 1:
	    Menu();
	    break;
	    case 2:
	    LuasBangunDatar();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
	    break;
	 }

}

void KembaliKel(){
    int keluar;
    printf("=======================================\n");
    printf("1.MENU\n");
    printf("2.Kembali\n");
    printf("=======================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    scanf("%d", &keluar);
    system("cls");

	switch(keluar){
	    case 1:
	    Menu();
	    break;
	    case 2:
	    KelilingBangunDatar();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
	    break;
	 }

}


