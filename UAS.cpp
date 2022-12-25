#include <stdio.h>
#include <math.h>
#include <string>
#include <windows.h>

typedef struct Pegawai{
	char *nama_pegawai, *asal_kota;
	int umur_pegawai, id_pegawai;
	char *pangkat, *jabatan;
	int gaji, durasi_bekerja, durasi_lembur;
}p;

//Data Awal Program
void AddDataPegawai(struct Pegawai *p){
	p[0].nama_pegawai = "Budi";
	p[0].id_pegawai = 345;
	p[0].asal_kota = "Surabaya";
	p[0].umur_pegawai = 25;
	p[0].jabatan = "Manajer";
	
	p[1].nama_pegawai = "Ani";
	p[1].id_pegawai = 230;
	p[1].asal_kota = "Sidoarjo";
	p[1].umur_pegawai = 30;
	p[1].jabatan = "Direktur";
	
	p[2].nama_pegawai = "Lala";
	p[2].id_pegawai = 134;
	p[2].asal_kota = "Semarang";
	p[2].umur_pegawai = 22;
	p[2].jabatan = "Manajer Pemasaran";
	
	p[3].nama_pegawai = "Didi";
	p[3].id_pegawai = 310;
	p[3].asal_kota = "Jambi";
	p[3].umur_pegawai = 35;
	p[3].jabatan = "Direktur Utama";
	
	p[4].nama_pegawai = "Joko";
	p[4].id_pegawai = 239;
	p[4].asal_kota = "Serang";
	p[4].umur_pegawai = 29;
	p[4].jabatan = "Direksi";
}

int main (){
	Pegawai p[15];
	AddDataPegawai(p);
	
	int a, x, b, c, l, j, lembur, lanjut;
	
	do {
		//Menampilkan Menu Program
		printf ("Program Data Pegawai\n");
		printf ("==============\n");
		printf ("1. Input Data Baru\n");
		printf ("2. Tampilkan Seluruh Data\n");
		printf ("3. Hitung Gaji Pegawai\n");
		printf ("4. Cari ID Pegawai\n");
		printf ("===========================\n");
		printf ("Masukan Pilihan Anda : ");
		scanf ("%d", &x);
		
		switch (x){
			case 1 : //Memasukan Data Baru
				printf ("Memasukan Data Baru :\n");
				("-----------------------<<(PROGRAM DATA PEGAWAI)>>--------------------------------\n");
				printf ("Masukan Total Data Pegawai Baru (MAX 10) : "); scanf ("%d", &b);
				
				for (a=0; a<b; a++){
					printf ("Masukan Nama Pegawai : "); scanf ("%s", &p[a].nama_pegawai);
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
							p[a].jabatan = "Direksi";
						}
						else if (c==2){
							p[a].jabatan = "Direktur Utama";
						}
						else if (c==3){
							p[a].jabatan = "Direktur";
						}
						else if (c==4){
							p[a].jabatan = "Manager";
						}
						else if (c==5){
							p[a].jabatan = "Manager Pemasaran";
						}
						else if (c==6){
							p[a].jabatan = "Staff";
						}
						else{
							printf ("Anda Salah Memasukan Angka\n");
						}
					
					printf ("Asal Kota Pegawai : "); scanf ("%s", &p[a].asal_kota);
					printf ("Umur Pegawai : "); scanf ("%d", &p[a].umur_pegawai);
					printf ("=================================================\n");
				}
			break;
				
			case 2 : //menampilkan seluruh data
			Pegawai temp;
			for (i=0; i<15; i++){
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
			printf ("-----------------------<<(PROGRAM DATA PEGAWAI)>>--------------------------------\n");
			printf ("+----------------+---------------+--------------+----------------+---------------+\n");
   			printf ("|  Nama_Pegawai  |   Id_Pegawai  |  Asal_Kota	 | Umur_Pegawai   | 	Jabatan	  |\n");
    			printf ("+----------------+---------------+--------------+----------------+---------------+\n");
 
			for (a=0; a<b; a++)
			{
			printf ("|  	%s\t  	  |	  %d\t    |  	%d\t	 | 	%s\t 	  |	%s\t 	  |\n");
    			printf ("+----------------+---------------+--------------+----------------+---------------+\n", p[a].nama_pegawai, p[a].id_pegawai, p[a].asal_kota, p[a].umur_pegawai, p[a].jabatan);
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
			case 4 :
				
			break;
		}
		
	}while (x!=5);

return 0;
}
