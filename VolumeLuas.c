#include<stdio.h>
#include<stdlib.h>
// #include<conio.h>
#include<math.h>
#define phi 3.14

void Menu();

void VolumeBangunRuang();
void LuasPermukaanBangunRuang();
void KembaliVol();
void KembaliLuas();

void VolTabung();
void VolBola();
void VolLimasSegiempat();
void VolPrismaSegitiga();
void VolKerucut();

void LPTabung();
void LPBola();
void LPLimasSegiempat();
void LPPrismaSegitiga();
void LPKerucut();

//=====================================================================
//FUNGSI VALIDASI INPUT

// Validasi Input Sub-Program
float input_validasi1() {
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
        printf("\nINPUT TIDAK BOLEH BILANGAN NEGATIF DAN HURUF ALFABET\n");
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
//FUNGSI VOLUME

float hitungVolTabung(float jari, float tinggi){
	float vol = phi*(jari*jari)*tinggi;
	
	return vol;
}

float hitungVolBola(float jari){
	float vol = 1.3333333*phi*jari*jari*jari;
	
	return vol;
}

float hitungVolLimasSegiempat(float sisi, float tinggi){
	float vol = 0.3333333*(sisi*sisi)*tinggi;
	
	return vol;
}

float hitungVolPrismaSegitiga(float alas, float tinggiAlas,float tinggi){
	float vol = (0.5*alas*tinggiAlas)*tinggi;
	
	return vol;
}

float hitungVolkerucut(float jari, float tinggi){
	float vol = 0.3333333*phi*jari*jari*tinggi;
	
	return vol;
}


//=====================================================================
//FUNGSI LUAS PERMUKAAN

float hitungLPTabung(float jari, float tinggi){
	float luas = (2*phi*(jari*jari))+(2*phi*jari*tinggi);
	
	return luas;
}

float hitungLPBola(float jari){
	float luas = 4*phi*jari*jari;
	
	return luas;
}

float hitungLPLimasSegiempat(float sisi, float tinggi, float alasSegitiga, float tinggiSegitiga){
	float luas = (sisi*sisi)+(4*(0.5*alasSegitiga*tinggiSegitiga));
	
	return luas;
}

float hitungLPPrismaSegitiga(float alas, float tinggiAlas,float tinggi, float sisiSegitiga1, float sisiSegitiga2, float sisiSegitiga3){
	float luas = (tinggi*(sisiSegitiga1+sisiSegitiga2+sisiSegitiga3))+(2*(0.5*alas*tinggiAlas));
	
	return luas;
}

float hitungLPKerucut(float jari, float pelukis){
	float luas = (phi*(jari*jari))+(phi*jari*pelukis);
	
	return luas;
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

    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("1.Hitung Volume Bangun Ruang\n");
    printf("2.Hitung Luas Permukaan Bangun Ruang\n");
    printf("=================================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    masuk = input_validasi2(); // Validasi2-DONE
    printf("\n");
    system("clear");

    switch (masuk){
	    case 1:
	    VolumeBangunRuang();
	    break;
	    case 2:
	    LuasPermukaanBangunRuang();
	    break;
	    default:
	    printf("Nomor Menu Yang Anda Masukkan Tidak Ada\n");
        printf("Harap Masukan Input kembali\n");
        Menu();
	    break;
	 }

}


void VolumeBangunRuang(){
  	int masuk;
  	
    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("|PENGHITUNGAN VOLUME|\n");
    printf("===========================================================\n");
    printf("Pilih Bangun Ruang Dibawah\n");
    printf("1.Tabung\n");
    printf("2.Bola\n");
    printf("3.Limas Segiempat\n");
    printf("4.Prisma Segitiga\n");
    printf("5.Kerucut\n");
    printf("6.Back\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    masuk = input_validasi2(); // Validasi2-DONE
    system("clear");

	switch (masuk){
	    case 1:
	    VolTabung();
	    break;
	    case 2:
	    VolBola();
	    break;
	    case 3:
	   	VolLimasSegiempat();
	    break;
	    case 4:
	    VolPrismaSegitiga();
	    break;
	    case 5:
	    VolKerucut();
	    break;
	    case 6:
	    Menu();
	    break;
	    default:
	    printf("Nomor Menu Yang Anda Masukkan Tidak Ada\n");
        printf("Harap Masukan Input kembali\n");
        VolumeBangunRuang();
	    break;
	 }

}


void VolTabung(){
	float jari;
	float tinggi;
	float vol;
	
    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("| Hitung Volume Tabung |\n");
    printf("===========================================================\n");
    printf(" Masukan nilai jari-jari alas (cm) : \n");
    jari = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai tinggi (cm) : \n");
    tinggi = input_validasi1();  // Validasi1 - DONE
    vol = hitungVolTabung(jari, tinggi);
    printf("Volume tabung adalah : %f cm3\n",vol);
    KembaliVol();
}


void VolBola(){
    float jari;
    float vol;

    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("| Hitung Volume Bola |\n");
    printf("===========================================================\n");
    printf(" Masukan nilai jari-jari (cm) : \n");
    jari = input_validasi1(); // Validasi1 - DONE
    vol = hitungVolBola(jari);
    printf("Volume bola adalah : %f cm3\n",vol);
    KembaliVol();
}

// Validasi
void VolLimasSegiempat(){
	float tinggi;
	float sisi;
	float vol;
    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("| Hitung Volume Limas Segiempat |\n");
    printf("===========================================================\n");
    printf("Masukan nilai sisi (cm) : \n");
    sisi = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai tinggi (cm) : \n");
    tinggi = input_validasi1(); // Validasi1 - DONE
    vol = hitungVolLimasSegiempat( sisi, tinggi);
    printf("Volume Limas Segiempat adalah : %f cm3\n",vol);
    KembaliVol();
}

void VolPrismaSegitiga(){
	float alas;
	float tinggiAlas;
	float tinggi;
	float vol;

    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("| Hitung Volume Prisma Segitiga |\n");
    printf("===========================================================\n");
    printf("Masukan nilai alas (cm) : \n");
    alas = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai tinggi alas (cm) : \n");
    tinggiAlas = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai tinggi (cm) : \n");
    tinggi = input_validasi1(); // Validasi1 - DONE
    vol = hitungVolPrismaSegitiga( alas, tinggiAlas, tinggi);
    printf("Volume prisma segiempat adalah : %f cm3\n",vol);
    KembaliVol();


}

void VolKerucut(){
	float jari;
	float tinggi;
	float vol;

    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("| Hitung Volume Kerucut|\n");
    printf("===========================================================\n");
    printf("Masukan nilai jari-jari (cm) : \n");
    jari = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai tinggi (cm) : \n");
    tinggi = input_validasi1(); // Validasi1 - DONE
    vol = hitungVolkerucut( jari, tinggi);
    printf("Volume kerucut adalah : %f cm3\n",vol);
    KembaliVol();

}


void LuasPermukaanBangunRuang(){
  	int masuk;
  	printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("|PERHITUNGAN LUAS PERMUKAAN|\n");
    printf("===========================================================\n");
    printf("Pilih Bangun Ruang Dibawah\n");
    printf("1.Tabung\n");
    printf("2.Bola\n");
    printf("3.Limas Segiempat\n");
    printf("4.Prisma Segitiga\n");
    printf("5.Kerucut\n");
    printf("6.Back\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    masuk = input_validasi2(); // Validasi2-DONE
    system("clear");

	switch (masuk){
	    case 1:
	    LPTabung();
	    break;
	    case 2:
	    LPBola();
	    break;
	    case 3:
	    LPLimasSegiempat();
	    break;
	    case 4:
	    LPPrismaSegitiga();
	    break;
	    case 5:
	    LPKerucut();
	    break;
	    case 6:
	    Menu();
	    break;
	    default:
	    printf("Nomor Menu Yang Anda Masukkan Tidak Ada\n");
        printf("Harap Masukan Input kembali\n");
        LuasPermukaanBangunRuang();
	    break;
	 }

}


void LPTabung(){
	float jari;
	float tinggi;
	float luas;
    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("| Hitung Luas Permukaan Tabung |\n");
    printf("===========================================================\n");
    printf(" Masukan nilai jari-jari (cm) : \n");
    jari = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai tinggi (cm) : \n");
    tinggi = input_validasi1(); // Validasi1 - DONE
    luas = hitungLPTabung(jari, tinggi);
    printf("Luas permukaan tabung adalah : %f cm2\n",luas);
    KembaliLuas();

}


void LPBola(){
    float jari;
    float luas;

    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("| Hitung Luas Permukaan Bola |\n");
    printf("===========================================================\n");
    printf(" Masukan nilai jari-jari (cm) : \n");
    jari = input_validasi1(); // Validasi1 - DONE
    luas = hitungLPBola(jari);
    printf("Keliling Belah Ketupat adalah : %f cm2\n",luas);
    KembaliLuas();

}

// Validasi
void LPLimasSegiempat(){
	float sisi;
	float tinggi;
	float alasSegitiga;
	float tinggiSegitiga;
	float luas;

    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("| Hitung Luas Permukaan Limas Segiempat |\n");
    printf("===========================================================\n");
    printf("Masukan nilai sisi (cm) : \n");
    sisi = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai tinggi (cm) : \n");
    tinggi = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai alas segitiga (cm) : \n");
    alasSegitiga = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai tinggi segitiga (cm) : \n");
    tinggiSegitiga = input_validasi1(); // Validasi1 - DONE

    luas = hitungLPLimasSegiempat( sisi, tinggi, alasSegitiga, tinggiSegitiga);
    printf("Luas permukaan limas segiempat adalah : %f cm2\n",luas);
    KembaliLuas();
}

// Validasi 
void LPPrismaSegitiga(){
	float alas;
	float tinggiAlas;
	float tinggi;
	float sisiSegitiga1;
	float sisiSegitiga2;
	float sisiSegitiga3;
	float luas;

    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("| Hitung Luas Permukaan Prisma Segitiga |\n");
    printf("===========================================================\n");
    printf("Masukan nilai alas (cm) : \n");
    alas = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai tinggi alas (cm) : \n");
    tinggiAlas = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai tinggi (cm) : \n");
    tinggi = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai sisi a segitiga (cm) : \n");
    sisiSegitiga1 = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai sisi b segitiga (cm) : \n");
    sisiSegitiga2 = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai sisi c segitiga (cm) : \n");
    sisiSegitiga3 = input_validasi1(); // Validasi1 - DONE
    luas = hitungLPPrismaSegitiga( alas, tinggiAlas, tinggi, sisiSegitiga1, sisiSegitiga2, sisiSegitiga3);
    printf("Luas Permukaan Prisma Segitiga adalah : %f cm2\n",luas);
    KembaliLuas();


}

// Validasi
void LPKerucut(){
	float jari;
	float pelukis;
	float luas;

    printf("===========================================================\n");
    printf("|PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN RUANG|\n");
    printf("===========================================================\n");
    printf("===========================================================\n");
    printf("| Hitung Luas Permukaan Kerucut |\n");
    printf("===========================================================\n");
    printf("Masukan nilai jari-jari (cm) : \n");
    jari = input_validasi1(); // Validasi1 - DONE
    printf("Masukan nilai garis pelukis (cm) : \n");
    pelukis = input_validasi1();

    luas = hitungLPKerucut( jari, pelukis);
    printf("Keliling Lingkaran adalah : %f cm2\n",luas);
    KembaliLuas();

}

void KembaliVol(){
    int keluar;
    printf("=======================================\n");
    printf("1.MENU\n");
    printf("2.Kembali\n");
    printf("=======================================\n");
    printf("Masukan Nomor Menu Yang Anda Inginkan :\n");
    keluar = input_validasi2(); // Validasi2-DONE
    printf("\n");
    system("clear");

	switch(keluar){
	    case 1:
	    Menu();
	    break;
	    case 2:
	    VolumeBangunRuang();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
        printf("Harap Masukan Input kembali\n");
        KembaliVol();
	    break;
	 }

}

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
	    LuasPermukaanBangunRuang();
	    break;
	    default:
	    printf("Nomor menu yang anda masukkan tidak ada\n");
        printf("Harap Masukan Input kembali\n");
        KembaliLuas();
	    break;
	 }

}


