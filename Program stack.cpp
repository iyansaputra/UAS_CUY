#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_STACK 10

typedef struct STACK{
	int top;
	char data [10][20];
};
struct STACK tumpuk;

void inisialisasi(){
	tumpuk.top = -1;
}

int IsFull(){ //untuk mengecek apakah stack penuh atau tidak
	if(tumpuk.top == MAX_STACK-1) {
		return 1;
	} else {
		return 0;
	}
}

int IsEmpty(){ //untuk mengecek apakah stack kosong atau nojoppoppomp
	if(tumpuk.top == -1){ //-1 dikarenakan array dimulai dari 0
		return 1;	   
	} else {
		return 0;
	}
}

void push(char d[10]) { //maksimal data yang dimasukkan 10
	tumpuk.top++; strcpy(tumpuk.data[tumpuk.top],d); //menyalin string ke lokasi lain
}

void cari (){ //kode program cari
	char datacari[20];
	printf("cari buku: ");
	scanf("%s", datacari);
	for(int i=tumpuk.top; i>= 0; i--){
		if(strcmp(datacari,tumpuk.data[i])==0){ //untuk membandingkan dua buah string
			printf ("buku ditemukan: %s\n", datacari);
			return;
		}
	}
}

void tampilstack(){ //kode program untuk tampil
	for(int i=tumpuk.top; i>= 0; i--){ 
		printf ("buku : %s\n",tumpuk.data[i]);
	}
}

void edit(){ //kode program edit
	tampilstack();
	char editdata[20];
	printf ("buku yang ingin diganti: ");
	scanf("%s", editdata);
	for(int i = tumpuk.top; i>= 0; i--){
		if(strcmp(editdata,tumpuk.data[i]) ==0);
		char databaru[20];
		printf("Buku baru: ");
		scanf("%s", databaru);
		strcpy(tumpuk.data[i], databaru); //untuk menyalin string ke lokasi lain
		return;
	}
}

int main()
{
	int p;
	char buku[10];
	p=0;
	while (p !=5){
	printf ("1. Tambahkan buku dalam rak\n");
	printf ("2. Cari buku\n");
	printf ("3. Edit\n");
	printf ("4. Tampilkan isi rak buku\n");
	printf ("5. keluar\n");
	printf ("Masukkan pilihan anda: ");
	scanf ("%d", &p);
	switch (p){ //perulangan
		case 1: //kondisi
			if(IsFull()==1)
				printf ("Rak penuh");
			else{
				printf ("Masukkan judul buku: ");
				scanf ("%s", buku);
				push(buku);
			}
		break; 
		case 2:
			cari();
		break;
		case 3:
			edit();
		break;
		case 4:
			tampilstack(); 
		break;
		case 5:
			printf ("Terimakasih");
		break; //untuk keluar dari perulangan	
		}
	}
}

