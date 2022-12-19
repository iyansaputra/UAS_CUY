#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <windows.h>

typedef struct Pegawai{
	char *nama_pegawai, *asal_kota;
	int umur_pegawai;
	char *pangkat, *jabatan;
	int gaji, durasi_bekerja, durasi_lembur;
}p;

//Memasukan Data
void AddDataPegawai(struct Pegawai *p){
	p[0].nama_pegawai = "";
	p[0].asal_kota = "";
	p[0].umur_pegawai = "";
	p[0].jabatan = "";
	p[0].pangkat = "";
	
	p[1].nama_pegawai = "";
	p[1].asal_kota = "";
	p[1].umur_pegawai = "";
	p[1].jabatan = "";
	p[1].pangkat = "";
	
	p[2].nama_pegawai = "";
	p[2].asal_kota = "";
	p[2].umur_pegawai = "";
	p[2].jabatan = "";
	p[2].pangkat = "";
	
	p[3].nama_pegawai = "";
	p[3].asal_kota = "";
	p[3].umur_pegawai = "";
	p[3].jabatan = "";
	p[3].pangkat = "";
	
	p[4].nama_pegawai = "";
	p[4].asal_kota = "";
	p[4].umur_pegawai = "";
	p[4].jabatan = "";
	p[4].pangkat = "";
}

int main (){
	Pegawai p[15];
	AddDataPegawai(p);
	
	int a, x;
	
	do {
		printf ("Program\n");
		printf ("==============\n");
		printf ("1. ")
	}
}
