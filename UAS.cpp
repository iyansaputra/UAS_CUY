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
	p[3].gaji = 50000000;
	p[3].durasi_lembur = 0;
	
	strcpy (p[4].nama_pegawai, "Joko");
	p[4].id_pegawai = 239;
	strcpy (p[4].jabatan_pegawai, "Direksi");
	strcpy (p[4].asal_kota, "Serang");
	p[4].umur_pegawai = 29;
	p[4].gaji = 20000000;
	p[4].durasi_lembur = 10;
	
	strcpy (p[5].nama_pegawai, "Dina");
	p[5].id_pegawai = 267;
	strcpy (p[5].jabatan_pegawai, "Staff");
	strcpy (p[5].asal_kota, "Bandung");
	p[5].umur_pegawai = 26;
	p[5].gaji = 16500000;
	p[5].durasi_lembur = 9;
	
	strcpy (p[6].nama_pegawai, "Eri");
	p[6].id_pegawai = 340;
	strcpy (p[6].jabatan_pegawai, "Staff");
	strcpy (p[6].asal_kota, "Jogja");
	p[6].umur_pegawai = 25;
	p[6].gaji = 16000000;
	p[6].durasi_lembur = 9;
	
		strcpy (p[7].nama_pegawai, "Eri");
	p[7].id_pegawai = 340;
	strcpy (p[7].jabatan_pegawai, "Staff");
	strcpy (p[7].asal_kota, "Jogja");
	p[7].umur_pegawai = 25;
	p[7].gaji = 16000000;
	p[7].durasi_lembur = 9;
	
	strcpy (p[8].nama_pegawai, "Eri");
	p[8].id_pegawai = 340;
	strcpy (p[8].jabatan_pegawai, "Staff");
	strcpy (p[8].asal_kota, "Jogja");
	p[8].umur_pegawai = 25;
	p[8].gaji = 16000000;
	p[8].durasi_lembur = 9;
	
	strcpy (p[9].nama_pegawai, "Eri");
	p[9].id_pegawai = 340;
	strcpy (p[9].jabatan_pegawai, "Staff");
	strcpy (p[9].asal_kota, "Jogja");
	p[9].umur_pegawai = 25;
	p[9].gaji = 16000000;
	p[9].durasi_lembur = 9;
}


int main (){
	Pegawai p[30];
	AddDataPegawai(p);
	
	int a, x, b, c, co, l, j, d, lembur, lanjut, i, min=0;
	
	printf ("+----------------+---------------+--------------+----------------+---------------+\n");
   	printf ("|  Nama Pegawai  |   Id Pegawai  |  Jabatan	 |  Asal Kota     | 	Umur	  |\n");
    	printf ("+----------------+---------------+--------------+----------------+---------------+\n");
	
	for (a=0; a<10; a++){
		printf ("|  	%s 	  |	  %i	  |  	%s	 | 	%s	  |	%i	  |\n", p[a].nama_pegawai, p[a].id_pegawai, p[a].jabatan_pegawai, p[a].asal_kota, p[a].umur_pegawai);
	}
	printf ("\n\n");
	
	do {
		//Menampilkan Menu Program
		printf ("-----------------------<<(PROGRAM DATA PEGAWAI)>>--------------------------------\n");
		printf ("==============\n");
		printf ("1. Input Data Baru\n");
		printf ("2. Tampilkan Seluruh Data (Ascending)\n");
		printf ("3. Tampilkan Seluruh Data (Descending)\n");
		printf ("4. Hitung Total Gaji Pegawai\n");
		printf ("5. Cari ID Pegawai\n");
		printf ("===========================\n");
		printf ("Masukan Pilihan Anda : ");
		scanf ("%d", &x);
		system ("cls");
		
		switch (x){
			case 1 : //Memasukan Data Baru
				printf ("Memasukan Data Baru :\n");
				printf ("======================\n");
				printf ("Masukan Data Pegawai Baru (MAX 10) : "); scanf ("%d", &b);
				co = b + 9;
				
				for (a=9; a<co; a++){
					printf ("Masukan Nama Pegawai : "); scanf ("%s", p[a].nama_pegawai);
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
							p[a].jabatan_pegawai, "Direksi";
						}
						else if (c==2){
							p[a].jabatan_pegawai, "Direktur Utama";
						}
						else if (c==3){
							p[a].jabatan_pegawai, "Direktur";
						}
						else if (c==4){
							p[a].jabatan_pegawai, "Manager";
						}
						else if (c==5){
							p[a].jabatan_pegawai, "Manager Pemasaran";
						}
						else if (c==6){
							p[a].jabatan_pegawai, "Staff";
						}
						else{
							printf ("Anda Salah Memasukan Angka\n");
						}
					
					printf ("Asal Kota Pegawai : "); scanf ("%s", &p[a].asal_kota);
					printf ("Umur Pegawai : "); scanf ("%d", &p[a].umur_pegawai);
					printf ("=======================\n");
					system ("cls");
				}
			break;
				
			case 2 : //menampilkan seluruh data secara ascending
				Pegawai temp;
				for (i=0; i<7; i++){
						min = i;
									
						for (j = i; j<10; j++){
							if(p[min].id_pegawai > p[j].id_pegawai){
								min = j;
							}
						}
						temp = p[i];
						p[i] = p[min];
						p[min] = temp;
					}
								
				for (a=0; a<co; a++){
					printf ("|  	%s  	  |	  %i      |  	%s	 | 	%s 	  |	%i\t 	  |\n", p[a].nama_pegawai, p[a].id_pegawai, p[a].jabatan_pegawai, p[a].asal_kota, p[a].umur_pegawai);
				}
			break;
				
			case 3 : //menampilkan seluruh data secara descending
				Pegawai temp2;
				for (i=0; i<7; i++){
						min = i;
						
						for (j = i; j<10; j++){
							if(p[min].id_pegawai < p[j].id_pegawai){
								min = j;
							}
						}
						temp = p[i];
						p[i] = p[min];
						p[min] = temp;
					}
					
				printf ("--------------------<<(PENGURUTAN DATA PEGAWAI SECARA ASCENDING)>>----------------\n");
				printf ("+----------------+---------------+--------------+----------------+---------------+\n");
	   			printf ("|  Nama Pegawai  |   Id Pegawai  |  Jabatan	 | Asal Kota   	  | 	Umur	  |\n");
	    		printf ("+----------------+---------------+--------------+----------------+---------------+\n");
				for (a=0; a<co; a++){
					printf ("|  	%s  	  |	  %i      |  	%s	 | 	%s 	  |	%i\t 	  |\n", p[a].nama_pegawai, p[a].id_pegawai, p[a].jabatan_pegawai, p[a].asal_kota, p[a].umur_pegawai);
				}	
			break;
			
				
			case 4 ://Menghitung gaji
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
				
			case 5 : //cari id pegawai
				int idCari, i;
				printf("Masukkan ID pegawai yang akan dicari :  ");
				scanf("%d", &idCari);
				
				for (i = 0; i < 15; i++) {
	 				 if (p[i].id_pegawai == idCari) {
					 printf("Pegawai dengan ID %d adalah \n %s \n", idCari, p[i].nama_pegawai);  	
					 printf(" Jabatan   : %s\n",p[i].jabatan_pegawai);
					 printf(" Asal kota : %s\n",p[i].asal_kota);
					 printf(" Umur      : %i\n",p[i].umur_pegawai);
	    		break;
	  			}
				}
				if (i == 15) {
	 			 printf("Pegawai dengan ID %d tidak ditemukan\n", idCari);
				}
			break;
		}
		
	}while (x!=6);

return 0;
}

