// PROGRAM BANGUN DATAR

#include<stdio.h>
#include<stdlib.h>
// #include<conio.h>
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
// FUNGSI VALIDASI INPUT

// Validasi Input Sub-Program
float input_validasi1(){
    int i = 1;
    int titik =0;
    int salah =0;
    float val;
    char angka[100];

    scanf("%s", &angka);

    while (angka[i] != '\0'){
        if(angka[0] == '-'){
            salah =1;
            angka[0] = '\0';
        } else if(angka[i]>='1' && angka[i]<='9' || angka[i] == '.' || angka[0] == '-')
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
        printf("INPUT TIDAK BOLEH BILANGAN NEGATIF DAN HURUF ALFABET\n");
        printf("Masukan angka salah masukan yang benar : \n");
        return input_validasi1();
    } else {
        return val;
    }

}
// Validasi Input Sub-Program

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

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("1.Hitung Luas Bangun Datar\n");
    printf("2.Hitung Keliling Bangun Datar\n");
    printf("=================================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    masuk = input_validasi2(); // Validasi2-DONE
    printf("\n");
    system("clear");

    switch (masuk){
	    case 1:
	    LuasBangunDatar();
	    break;
	    case 2:
	    KelilingBangunDatar();
	    break;
	    default:
	    printf("Nomor Menu Yang Anda Masukkan Tidak Ada\n");
        printf("Harap Masukan Input kembali\n");
        Menu();
	    break;
	 }

}

void LuasBangunDatar(){
  int masuk;

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
     printf("=================================================\n");
    printf("|PENGHITUNGAN LUAS|\n");
    printf("=================================================\n");
    printf("Pilih Bangun Datar Dibawah\n");
    printf("1.Segitiga Sembarang\n");
    printf("2.Belah Ketupat\n");
    printf("3.Jajargenjang\n");
    printf("4.Trapesium\n");
    printf("5.Lingkaran\n");
    printf("6.Kembali\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    masuk = input_validasi2(); // Validasi2-DONE
    system("clear");

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
	    printf("Nomor Menu Yang Anda Masukkan Tidak Ada\n");
        printf("Harap Masukan Input kembali\n");
        LuasBangunDatar();
	    break;
	 }

}

// Validasi udah 
void LSegitigaSembarang(){
    int temp;
    float a,b,c,s,luas,valint, valint2;

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("=================================================\n");
    printf("| Hitung Luas Segitiga Sembarang |\n");
    printf("=================================================\n");

    printf("Masukan Panjang Sisi a (cm) : \n");
    a=input_validasi1(); // Validasi1 - DONE
    printf("Masukan Panjang Sisi b (cm) : \n");
    b=input_validasi1(); // Validasi1 - DONE
    printf("Masukan Panjang Sisi c (cm) : \n");
    c=input_validasi1(); // Validasi1 - DONE
    if (a!=b && a!=c && b!=c && b!=a)
    {
        // kalo input beda
        // berhasil
        s = (a+b+c)/2;
        luas = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Luas Segitiga Sembarang adalah : %.2f cm2\n",luas);
    } else
    {
        // kalo input sama  
        printf("SISI TIDAK BOLEH SAMA \n");
        printf("Ulangi Masukkan angka \n");
        LSegitigaSembarang();
    }
    KembaliLuas();


}

// Validasi udah 
void LBelahKetupat(){
    int temp;
    float da,db,luas,valint;

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("=================================================\n");
    printf("| Hitung Luas Belah Ketupat |\n");
     printf("=================================================\n");
    printf(" Masukan Panjang d1 (cm) : \n");
    da = input_validasi1(); // Validasi1 - DONE
    printf("Masukan Panjang d2 (cm) : \n");
    db = input_validasi1(); // Validasi1 - DONE

    luas = da*db/2;
    printf("Luas Belah Ketupat adalah : %.2f cm2\n",luas);
    KembaliLuas();
}

// validasi udah 
void LJajargenjang(){
    int temp;
    float a,t,luas,valint;

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("=================================================\n");
    printf("| Hitung Luas Jajargenjang |\n");
    printf("=================================================\n");
    printf("Masukan Panjang Alas (cm) : \n");
    a = input_validasi1(); // Validasi1 - DONE
    printf("Masukan Tinggi (cm) : \n");
    t = input_validasi1();// Validasi1 - DONE
  
    printf("Luas Jajargenjang adalah : %.2f cm2\n",luas);
    KembaliLuas();


}

// validasi udah 
void LTrapesium(){
    int temp;
    float a,b,t,luas;

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("=================================================\n");
    printf("| Hitung Luas Trapesium |\n");
    printf("=================================================\n");
    printf("Masukan Panjang Sisi Atas (cm) : \n");
    a = input_validasi1(); // Validasi1 - DONE
    printf("Masukan Panjang Sisi Bawah (cm) : \n");
    b = input_validasi1(); // Validasi1 - DONE
    printf("Masukan tinggi (cm) : \n");
    t = input_validasi1(); // Validasi1 - DONE
    if (a!=b && b!=a)
    {
        // kalo input beda
        // berhasil
        luas =(a+b)*t/2;
        printf("Luas Trapesium adalah : %.2f cm2\n",luas);

    } else
    {
        // kalo input sama  
        printf("ANGKA UNTUK TINGGI DAN ALAS TIDAK BOLEH SAMA\n");
        printf("Ulangi Masukkan angka \n");
        LTrapesium();
    }
    
    KembaliLuas();


}

// validasi udah 
void LLingkaran(){
    int temp;
    float r,luas,valint;

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("=================================================\n");
    printf("| Hitung Luas Lingkaran|\n");
    printf("=================================================\n");
    printf("Masukan Panjang Jari-jari (cm) : \n");
    r = input_validasi1(); // Validasi1 - DONE

    luas = phi*r*r;
    printf("Luas Lingkaran adalah : %.2f cm2\n",luas);
    KembaliLuas();

}

void KelilingBangunDatar(){
  int masuk;
    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("=================================================\n");
    printf("|PENGHITUNGAN KELILING|\n");
    printf("=================================================\n");
    printf("Pilih Bangun Datar Dibawah\n");
    printf("1.Segitiga Sembarang\n");
    printf("2.Belah Ketupat\n");
    printf("3.Jajargenjang\n");
    printf("4.Trapesium\n");
    printf("5.Lingkaran\n");
    printf("6.Back\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    masuk = input_validasi2();
    system("clear");

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
	    printf("Nomor Menu Yang Anda Masukkan Tidak Ada\n");
        printf("Harap Masukan Input kembali\n");
        KelilingBangunDatar();
	    break;
	 }

}

void KSegitigaSembarang(){

    float a,b,c,kel;

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("======================================\n");
    printf("| Hitung Keliling Segitiga Sembarang |\n");
    printf("======================================\n");

    printf(" Masukan Panjang Sisi a (cm) : \n");
    a = input_validasi1(); // Validasi1 - DONE
    printf("Masukan Panjang Sisi b (cm) : \n");
    b = input_validasi1(); // Validasi1 - DONE
    printf(" Masukan Panjang Sisi c (cm) : \n");
    c = input_validasi1(); // Validasi1 - DONE
    if (a!=b && a!=c && b!=c && b!=a)
    {
        // kalo input beda
        kel = a+b+c;
        printf("Keliling Segitiga Sembarang adalah : %.2f cm2\n",kel);
    } else
    {
        // kalo input sama  
        printf("SISI TIDAK BOLEH SAMA \n");
        printf("Ulangi Masukkan angka \n");
        KSegitigaSembarang();
    }
  
    KembaliKel();

}

void KBelahKetupat(){
    int temp, valint; 
    float s,kel;

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("=================================================\n");
    printf("| Hitung Keliling Belah Ketupat |\n");
    printf("=================================================\n");
    printf(" Masukan Panjang Sisi (cm) : \n");
    s = input_validasi1(); // Validasi1 - DONE
    
    kel = 4*s;
    printf("Keliling Belah Ketupat adalah : %.2f cm\n",kel);
    KembaliKel();

}

void KJajargenjang(){
    int valint, temp;
    float a,b,kel;

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("=================================================\n");
    printf("| Hitung Luas Jajargenjang |\n");
    printf("=================================================\n");
    printf("Masukan Panjang Alas (cm) : \n");
    a = input_validasi1(); // Validasi1 - DONE
 
    printf("Masukan Panjang Sisi Miring (cm) : \n");
    b = input_validasi1(); // Validasi1 - DONE
   

    kel = 2*(a+b);
    printf("Keliling Jajargenjang adalah : %.2f cm\n",kel);
    KembaliKel();

 
}

void KTrapesium(){
    float a,b,c,d,kel;

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("=================================================\n");
    printf("| Hitung Keliling Trapesium |\n");
    printf("=================================================\n");

    printf("Masukan Panjang Sisi a (cm) : \n");
    a = input_validasi1(); // Validasi1 - DONE
    printf("Masukan Panjang Sisi b (cm) : \n");
    b = input_validasi1(); // Validasi1 - DONE
    printf("Masukan Panjang Sisi c (cm) : \n");
    c = input_validasi1(); // Validasi1 - DONE
    printf("Masukan Panjang Sisi d (cm) : \n");
    d = input_validasi1(); // Validasi1 - DONE
    if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
    {
        // kalo input beda
        // berhasil
        kel =a+b+c+d;
        printf("Keliling Trapesium adalah : %.2f cm2\n",kel);

    } else
    {
        // kalo input sama  
        printf("SISI TIDAK BOLEH SAMA\n");
        printf("Ulangi Masukkan angka \n");
        KTrapesium();
    }
   
    KembaliKel();


}

void KLingkaran(){
    int valint, temp;
    float r,kel;

    printf("=================================================\n");
    printf("|PROGRAM MENGHITUNG LUAS & KELILING BANGUN DATAR|\n");
    printf("=================================================\n");
    printf("=================================================\n");
    printf("| Keliling Luas Lingkaran|\n");
    printf("=================================================\n");
    printf("Masukan Panjang Jari-jari (cm) : \n");
    r = input_validasi1(); // Validasi1 - DONE
    kel = 2*phi*r;
    printf("Keliling Lingkaran adalah : %.2f cm\n",kel);
    KembaliKel();

}


// return 
void KembaliLuas(){
    int keluar;
    printf("=======================================\n");
    printf("1.MENU\n");
    printf("2.Kembali\n");
    printf("=======================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    keluar = input_validasi2();
    system("clear");

	switch(keluar){
	    case 1:
	    Menu();
	    break;
	    case 2:
	    LuasBangunDatar();
	    break;
	    default:
	    printf("Nomor Menu Yang Anda Masukkan Tidak Ada\n");
        printf("Harap Masukan Input kembali\n");
        KembaliLuas();
	    break;
	 }

}

//return 
void KembaliKel(){
    int keluar;
    printf("=======================================\n");
    printf("1.MENU\n");
    printf("2.Kembali\n");
    printf("=======================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    keluar = input_validasi2();
    system("clear");

	switch(keluar){
	    case 1:
	    Menu();
	    break;
	    case 2:
	    KelilingBangunDatar();
	    break;
	    default:
	    printf("Nomor Menu Yang Anda Masukkan Tidak Ada\n");
        printf("Harap Masukan Input kembali\n");
        KembaliKel();
	    break;
	 }

}




