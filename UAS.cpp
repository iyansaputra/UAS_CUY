#include <iostream>
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
	p[0].jabatan = "Karyawan";
	
	p[1].nama_pegawai = "Ani";
	p[1].id_pegawai = 230;
	p[1].asal_kota = "Sidoarjo";
	p[1].umur_pegawai = 30;
	p[1].jabatan = "Manajer";
	
	p[2].nama_pegawai = "Lala";
	p[2].id_pegawai = 134;
	p[2].asal_kota = "Semarang";
	p[2].umur_pegawai = 22;
	p[2].jabatan = "Karyawan";
	
	p[3].nama_pegawai = "Didi";
	p[3].id_pegawai = 310;
	p[3].asal_kota = "Jambi";
	p[3].umur_pegawai = 35;
	p[3].jabatan = "Direksi Utama";
	
	p[4].nama_pegawai = "Joko";
	p[4].id_pegawai = 239;
	p[4].asal_kota = "Serang";
	p[4].umur_pegawai = 29;
	p[4].jabatan = "Karyawan";
}

int main (){
	Pegawai p[15];
	AddDataPegawai(p);
	
	int a, x, b;
	
	do {
		//Menampilkan Menu Program
		printf ("Program\n");
		printf ("==============\n");
		printf ("1. Input Data Baru\n");
		printf ("2. Tampilkan Seluruh Data\n");
		printf ("3. Hitung Gaji Pegawai\n");
		printf ("4. Cari ID Pegawai\n");
		printf ("===========================\n");
		printf ("Masukan Pilihan Anda : ");
		scanf ("&d", &x);
		
		switch (x){
			case 1 : //Memasukan Data Baru
				printf ("Memasukan Data Baru :\n");
				printf ("============================\n");
				printf ("Masukan Total Data Pegawai Baru (MAX 10) : "); scanf ("%d", &b);
				
				for (a=0; a<b; a++){
					printf ("Masukan Nama Pegawai : "); scanf ("%s", p[a].nama_pegawai);
					printf ("Masukan ID Pegawai : "); scanf ("%s", p[a].id_pegawai);
					printf ("Masukan Jabatan Pegawai : \n");
					printf ("=============================\n");
					printf ("1. ");
					printf ("Asal Kota Pegawai : "); scanf ("%s", p[a].asal_kota);
					printf ("Umur Pegawai : "); scanf ("%d", p[a].umur_pegawai);
					printf ("Jabatan pegawai: "); scanf ("%s", p[a].jabatan);
				}
			break;
			case 2 : //menampilkan seluruh data
				for (a=0; a<b; a++){
					printf ("%s\t%d\%s\t%d\t%s", p[a].nama_pegawai, p[a].id_pegawai, p[a].asal_kota, p[a].umur_pegawai, p[a].jabatan);
				}
				printf ("==============================================================\n");
			break;
		}
		
	}while (x!=4);

return 0;
}
