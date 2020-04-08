#include <stdio.h>
#include <stdlib.h>

int tanggalMaksPerBulan(int bulan);

void zodiak();

int clean();

int main(){
	char pilihan, enterCheck;
	system("cls");

	printf("===================================================\n");
	printf("|                 PROGRAM ZODIAK                  |\n");
	printf("===================================================\n\n\n");

	printf("    ==========================================\n");
	printf("    |                  MENU                  |\n");
	printf("    ==========================================\n");
	printf("    |           1. Zodiak                    |\n");
	printf("    |           2. Tutup Program             |\n");
	printf("    ==========================================\n\n\n");

	do{
		printf("Masukkan pilihan  (1/2)  : ");
		if(((scanf(" %c%c", &pilihan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){
			printf("Inputan salah! Mohon hanya memasukkan angka dari 1 hingga 2\n\n");
		}
		else{
			if(pilihan == '1'){
				zodiak();
				break;
			}
			else if(pilihan == '2'){
				exit(0);
				break;
			}
			else{
				printf("Inputan salah! Mohon hanya memasukkan angka dari 1 hingga 2\n\n");
			}
		}
	}while(1);

	return 0;
}

void zodiak(){
	char pilihan, enterCheck;
	int tanggal, bulan, tanggalMaks;


	system("cls");

	do{
		printf("Masukkan bulan(angka 1 hingga 12)       : ");
		if(((scanf("%d%c", &bulan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){
			printf("Inputan salah! Mohon hanya memasukkan angka dari 1 hingga 12\n\n");
		}
		else{
			if(bulan <= 0 || bulan > 12){
				printf("Inputan salah! Mohon hanya memasukkan angka dari 1 hingga 12\n\n");
			}
			else{
				break;
			}
		}
	}while(1);

	tanggalMaks = tanggalMaksPerBulan(bulan);


	do{
		printf("Masukkan tanggal(angka 1 hingga %d)     : ", tanggalMaks);
		if(((scanf("%d%c", &tanggal, &enterCheck)) != 2 || enterCheck != '\n') && clean()){
			printf("Inputan salah! Mohon hanya memasukkan angka dari 1 hingga %d\n\n", tanggalMaks);
		}
		else{
			if(tanggal <= 0 || tanggal > tanggalMaks){
				printf("Inputan salah! Mohon hanya memasukkan angka dari 1 hingga %d\n\n", tanggalMaks);
			}
			else{
				break;
			}
		}
	}while(1);

	if((tanggal >= 21 && bulan == 3) || (tanggal <= 19 && bulan == 4)){
		printf("\nZodiak Anda   : Aries");
	}
	else if((tanggal >= 20 && bulan == 4) || (tanggal <= 20 && bulan == 5)){
		printf("\nZodiak Anda   : Taurus");
	}
	else if((tanggal >= 21 && bulan == 5) || (tanggal <= 20 && bulan == 6)){
		printf("\nZodiak Anda   : Gemini");
	}
	else if((tanggal >= 21 && bulan == 6) || (tanggal <= 22 && bulan == 7)){
		printf("\nZodiak Anda   : Cancer");
	}
	else if((tanggal >= 23 && bulan == 7) || (tanggal <= 22 && bulan == 8)){
		printf("\nZodiak Anda   : Leo");
	}
	else if((tanggal >= 23 && bulan == 8) || (tanggal <= 22 && bulan == 9)){
		printf("\nZodiak Anda   : Virgo");
	}
	else if((tanggal >= 23 && bulan == 9) || (tanggal <= 22 && bulan == 10)){
		printf("\nZodiak Anda   : Libra");
	}
	else if((tanggal >= 23 && bulan == 10) || (tanggal <= 21 && bulan == 11)){
		printf("\nZodiak Anda   : Scorpio");
	}
	else if((tanggal >= 22 && bulan == 11) || (tanggal <= 21 && bulan == 12)){
		printf("\nZodiak Anda   : Sagitarius");
	}
	else if((tanggal >= 22 && bulan == 12) || (tanggal <= 19 && bulan == 1)){
		printf("\nZodiak Anda   : Capricorn");
	}
	else if((tanggal >= 20 && bulan == 1) || (tanggal <= 18 && bulan == 2)){
		printf("\nZodiak Anda   : Aquarius");
	}
	else if((tanggal >= 19 && bulan == 2) || (tanggal <= 20 && bulan == 3)){
		printf("\nZodiak Anda   : Pisces");
	}

	printf("\n\nApakah Anda ingin melakukan penghitungan zodiak ulang?\nTekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.");
	do{
		printf("\nMasukkan pilihan      : ");
		if(((scanf(" %c%c", &pilihan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){
			printf("Inputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n\n");
		}
		else{
			if(pilihan == 'Y' || pilihan == 'y'){
				zodiak();
				break;
			}
			else if(pilihan == 'N' || pilihan == 'n'){
				main();
				break;
			}
			else if(pilihan == 'K' || pilihan == 'k'){
				exit(0);
				break;
			}
			else{
				printf("Inputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.");
			}
		}
	}while(1);
}

int tanggalMaksPerBulan(int bulan){
	switch(bulan){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 2:
			return 29;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
	}
}

int clean(){
	while(getchar() != '\n');
	return 1;
}
