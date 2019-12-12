#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ana_menu.h"
#include "soru_ekle.h"
#include "soru_sil.h"
#include "soru_goster.h"
#include "soru_guncelle.h"
#include "oyun_oyna.h"
// #include "cikis.h"
#include "ekran_temizle.h"
#define SARI "\x1b[33m"
#define KRMZ "\x1b[31m"
#define RESET "\x1b[0m"
#define MAVI "\x1b[36m"


int counter = 1;


int main() {



	ana_menu();


	while(1) {


		switch(islem_sec) {

			case 1:
				ekran_temizle();
        		soru_ekle();
				ekran_temizle();
				ana_menu();
				break;

			case 2:
				ekran_temizle();
				soru_sil();
				ekran_temizle();
				ana_menu();
				break;


			case 3:
				ekran_temizle();
				soru_goruntule();
				soru_guncelleme();
				ekran_temizle();
				ana_menu();
				break;



			case 4:
				ekran_temizle();
				oyun_oyna();
				ekran_temizle();
				ana_menu();
				break;



			case 5:
			//	ekran_temizle();
				ekran_temizle();
				ana_menu();
				break;

			case 6:
				ekran_temizle();
				//cikis();



			default:

				printf("Gecersiz deger giriniz. Ana menüye dönmek için bir tuşa basınız..\n");
				ana_menu();
				break;


		}

	}


	return 0;
}
