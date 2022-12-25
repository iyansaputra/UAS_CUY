#include <stdio.h>
#include <math.h>
#include <string>
#include <windows.h>

	struct Pegawai{
		char nama_pegawai[40];
		char asal_kota[20];
		char jabatan_pegawai[15];
		int id_pegawai;
		int umur_pegawai;
		int gaji;
		int durasi_lembur;
};

	struct Baru{
		char nama_baru[40];
		char kota_baru[20];
		char jabatan[15];
		int id_baru;
		int umur_baru;
	};

//Data Awal Program
void AddDataPegawai(struct Pegawai *p){
	strcpy (p[0].nama_pegawai, "Budi");
	p[0].id_pegawai = 345;
	strcpy (p[0].jabatan_pegawai, "Manajer");
	strcpy (p[0].asal_kota, "Surabaya");
	p[0].umur_pegawai = 25;
	p[0].gaji = 10000000;
	p[0].durasi_lembur = 4;
	
	strcpy (p[1].nama_pegawai, "Ani");
	p[1].id_pegawai = 230;
	strcpy (p[1].jabatan_pegawai, "Direktur");
	strcpy (p[1].asal_kota, "Sidoarjo");
	p[1].umur_pegawai = 30;
	p[1].gaji = 200000000;
	p[1].durasi_lembur = 0;
	
	strcpy (p[2].nama_pegawai, "Lala");
	p[2].id_pegawai = 134;
	strcpy (p[2].jabatan_pegawai, "Manajer Pemasaran");
	strcpy (p[2].asal_kota, "Semarang");
	p[2].umur_pegawai = 22;
	p[2].gaji = 12000000;
	p[2].durasi_lembur = 2;
	
	strcpy (p[3].nama_pegawai, "Didi");
	p[3].id_pegawai = 310;
	strcpy (p[3].jabatan_pegawai, "Direktur Utama");
	strcpy (p[3].asal_kota, "Jambi");
	p[3].umur_pegawai = 35;
	p[3].gaji = 500000000;
	p[3].durasi_lembur = 0;
	
	strcpy (p[4].nama_pegawai, "Joko");
	p[4].id_pegawai = 239;
	strcpy (p[4].jabatan_pegawai, "Direksi");
	strcpy (p[4].asal_kota, "Serang");
	p[4].umur_pegawai = 29;
	p[4].gaji = 200000000;
	p[4].durasi_lembur = 10;
}

int main (){
	Pegawai p[5];
	AddDataPegawai(p);
	Baru n[10];
	
	int a, x, b, c, l, j, lembur, lanjut, i, min=0;

	printf ("+----------------+---------------+--------------+----------------+---------------+\n");
   	printf ("|  Nama Pegawai  |   Id Pegawai  |  Jabatan	 | Asal Kota   | 	Umur	  |\n");
    printf ("+----------------+---------------+--------------+----------------+---------------+\n");
		for (a=0; a<=4; a++){
			printf ("|  	%s\t  	  |	  %i\t    |  	%s\t	 | 	%s\t 	  |	%i\t 	  |\n", p[a].nama_pegawai, p[a].id_pegawai, p[a].jabatan_pegawai, p[a].asal_kota, p[a].umur_pegawai);
		}
	printf ("\n\n");
	
	do {
		//Menampilkan Menu Program
		printf ("-----------------------<<(PROGRAM DATA PEGAWAI)>>--------------------------------\n");
		printf ("==============\n");
		printf ("1. Input Data Baru\n");
		printf ("2. Tampilkan Seluruh Data (Ascending)\n");
		printf ("3. Hitung Gaji Pegawai\n");
		printf ("4. Cari ID Pegawai\n");
		printf ("===========================\n");
		printf ("Masukan Pilihan Anda : ");
		scanf ("%d", &x);
		system ("cls");
		
		switch (x){
			case 1 : //Memasukan Data Baru
				printf ("Memasukan Data Baru :\n");
				printf ("======================\n");
				printf ("Masukan Data Pegawai Baru (MAX 10) : "); scanf ("%d", &b);
				
				for (a=0; a<b; a++){
					printf ("Masukan Nama Pegawai : "); scanf ("%s", n[a].nama_baru);
					printf ("Masukan ID Pegawai : "); scanf ("%d", &p[a].id_pegawai);
					printf ("Masukan Jabatan Pegawai : \n");
					printf ("=============================\n");
					printf ("1. Direksi (CEO)\n");
					printf ("2. Direktur Utama\n");
					printf ("3. Direktur\n");
					printf ("4. Manager\n");
					printf ("5. Manager Pemasaran\n");
					printf ("6. Staff\n");
					printf ("Masukan Pilihan Jabatan : "); scanf ("%d", &c);
					
						if (c==1){
							n[a].jabatan, "Direksi";
						}
						else if (c==2){
							n[a].jabatan, "Direktur Utama";
						}
						else if (c==3){
							n[a].jabatan, "Direktur";
						}
						else if (c==4){
							n[a].jabatan, "Manager";
						}
						else if (c==5){
							n[a].jabatan, "Manager Pemasaran";
						}
						else if (c==6){
							n[a].jabatan, "Staff";
						}
						else{
							printf ("Anda Salah Memasukan Angka\n");
						}
					
					printf ("Asal Kota Pegawai : "); scanf ("%s", n[a].kota_baru);
					printf ("Umur Pegawai : "); scanf ("%d", &n[a].umur_baru);
					printf ("=======================\n");
					system ("cls");
				}
			break;
				
			case 2 : //menampilkan seluruh data
			Pegawai temp;
			for (i=0; i<5; i++){
					min = i;
					
					for (j = i; j<5; j++){
						if(p[min].id_pegawai > p[j].id_pegawai){
							min = j;
						}
					}
					temp = p[i];
					p[i] = p[min];
					p[min] = temp;
				}
				
			Baru temp1;
			for (i=0; i<10; i++){
					min = i;
					
					for (j = i; j<10; j++){
						if(n[min].id_baru > n[j].id_baru){
							min = j;
						}
					}
					temp1 = n[i];
					n[i] = n[min];
					n[min] = temp1;
				}
			printf ("-----------------------<<(PROGRAM DATA PEGAWAI)>>--------------------------------\n");
			printf ("+----------------+---------------+--------------+----------------+---------------+\n");
   			printf ("|  Nama Pegawai  |   Id Pegawai  |  Jabatan	 | Asal Kota   | 	Umur	  |\n");
    		printf ("+----------------+---------------+--------------+----------------+---------------+\n");
			for (a=0; a<=4; a++){
				printf ("|  	%s\t  	  |	  %i\t    |  	%s\t	 | 	%s\t 	  |	%i\t 	  |\n", p[a].nama_pegawai, p[a].id_pegawai, p[a].jabatan_pegawai, p[a].asal_kota, p[a].umur_pegawai);
			}
			for (a=0; a<b; a++){
				printf ("|  	%s\t  	  |	  %i\t    |  	%s\t	 | 	%s\t 	  |	%i\t 	  |\n", n[a].nama_baru, n[a].id_baru, n[a].jabatan, n[a].kota_baru, n[a].umur_baru);
			}	
			break;
				
			case 3 ://Menghitung gaji
				AddDataPegawai(p);
				
				do{
					printf ("Masukkan ID pegawai: "); scanf ("%d", &p[a].id_pegawai);
					printf ("Masukkan Nama Pegawai: "); scanf ("%s", &p[a].nama_pegawai);
					printf ("1. Lembur\n2. Tidak lembur\n"); scanf ("%d", &l);
					if (l==1){
						printf ("Durasi Lembur (Jam): "); scanf ("%d", &j);
						
						lembur=j*100000;
						printf ("Uang lembur= Rp.%d\n", lembur);
					}
					else{
						lembur=NULL;
					}
					printf ("1. Direksi (CEO)\n");
					printf ("2. Direktur Utama\n");
					printf ("3. Direktur\n");
					printf ("4. Manager\n");
					printf ("5. Manager Pemasaran\n");
					printf ("6. Staff\n");
					printf ("Masukan Pilihan Jabatan : "); scanf ("%d", &c);
					
					switch (c){
						case 1:
							printf ("Gaji = Rp.200.000.000 + Rp. %d\n", lembur);
						break;
						case 2:
							printf ("Gaji = Rp.500.000.000 + Rp. %d\n", lembur);
						break;
						case 3:
							printf ("Gaji = Rp.200.000.000 + Rp. %d\n", lembur);
						break;
						case 4:
							printf ("Gaji = Rp.10.000.000 + Rp. %d\n", lembur);
						break;
						case 5:
							printf ("Gaji = Rp.12.000.000 + Rp. %d\n", lembur);
						break;
						case 6:
							printf ("Gaji = Rp.4.000.000 + Rp. %d\n", lembur);
						break;
					}
					printf ("\nInput 1 untuk lanjut\nInput 0 untuk berhenti: "); scanf ("%d", &lanjut);
					printf ("\n");
					system ("cls");
				}while (lanjut!=0);
			break;
			case 4 : //cari id pegawai
				//lagi tak buat btw bukan user cpp
				void CariIDPegawai(struct Pegawai *p, char *nama){
				int found = 0;
				for(int i = 0; i < 15; i++){
					if(strcmp(p[i].nama_pegawai, nama) == 0){
				
			break;
		}
		
	}while (x!=5);

return 0;
}
