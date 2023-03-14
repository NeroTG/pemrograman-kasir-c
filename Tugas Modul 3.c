#include<stdio.h>

int main(void){
	
	int i, menu, pilih, jumlah, grandtotal=0, bayar=0;
	char penjelasan;
	
	awal:
	printf("=========Warung Prima========\n");
	printf("No.\tNama\t\tHarga\n");
	printf("1.\tRawon\t\tRp.15.000\n");
	printf("2.\tNasi Pecel\tRp.8000\n");
	printf("3.\tEs Teh\t\tRp.2.500\n");
	printf("=============================\n");
	printf("Masukkan total menu yang ingin dipesan: ");
	scanf("%d",&menu);
	
	for ( i = 0; i < menu; i++){
		

		printf("\nPilih Pesanan yang akan anda pesan: ");
		scanf("%d", &pilih);
		printf("====================\n");
		
	switch (pilih){
		case 1:
			printf("Anda Memilih Rawon\n\n");
			printf("Masukkan Jumlah yang anda pesan: ");
			scanf("%d", &jumlah);
			printf("====================\n");
			printf("Qty\t: %d\n", jumlah);
			printf("Harga\t:Rp. %d\n", jumlah * 15000);
			printf("====================\n");
			grandtotal += jumlah * 15000;
			break;
		case 2:
			printf("Anda Memilih Nasi Pecel\n\n");
			printf("Masukkan Jumlah yang anda pesan: ");
			scanf("%d", &jumlah);
			printf("====================\n");
			printf("Qty\t: %d\n", jumlah);
			printf("Harga\t:Rp. %d\n", jumlah * 8000);
			printf("====================\n");
			grandtotal += jumlah * 8000;
			break;
		case 3:
			printf("Anda Memilih Es Teh\n\n");
			printf("Masukkan Jumlah yang anda pesan: ");
			scanf("%d", &jumlah);
			printf("====================\n");
			printf("Qty\t: %d\n", jumlah);
			printf("Harga\t:Rp. %d\n", jumlah * 2500);
			printf("====================\n");
			grandtotal += jumlah * 2500;
			break;
	   }
	}
	
	printf("Total Harga :Rp. %d\n", grandtotal);
	
	bawah:
	if(bayar == 0 || bayar < grandtotal){
		
		printf("Nominal Pembayaran :Rp. ");
		scanf("%d", &bayar);
	}	
	printf("====================\n");
	if(bayar != 0 && bayar >= grandtotal){
		printf("Tunai : Rp. %d\n", bayar);
		printf("Kembali : Rp. %d\n", bayar - grandtotal);
	}else if(bayar !=0 && bayar < grandtotal){
		printf("Maaf, uang anda kurang Rp.%d\n", grandtotal - bayar);
		goto bawah;
	}
	printf("====================\n");
	
	printf("Apakah anda mau melanjutkan program ? [Y/N]");
	scanf("%s", &penjelasan);
	
	switch(penjelasan){
		case 'n':
		case 'N':
		      return 0;
		      break;
		case 'y':
		case 'Y':
		      i = menu = pilih = jumlah = grandtotal = bayar=0;
		      
		      goto awal;
			  break;
	}
	
	
	
	
}
