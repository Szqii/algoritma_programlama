// GUNCELLENECEK SORUYU EKRANA YAZDIRIR
#define SARI "\x1b[1;33m"
#define KRMZ "\x1b[1;31m"
#define RESET "\x1b[0m"
#define MAVI "\x1b[1;36m"
#include "stdlib.h"



void soru_guncelleme() {

  int secimSoru;
  int secimGuncelle;

  printf("Kaçıncı soruyu güncellemek istersiniz? ");
  scanf("%d", &secimSoru);
  system("clear||cls");
  system("clear||cls");


  if(secimSoru>S){

    printf("Böyle bir soru bulunmamaktadır. Ana menüye dönmek için bir tuşa basınız.\n");
    getchar();
    ana_menu();

  }

  else {

  soru_goruntuleUp(secimSoru);

  printf(KRMZ"Güncellemek istediğiniz şeyi seçiniz.\n"RESET);
  printf(KRMZ"1 ☛"RESET"  Soru\n");
  printf(KRMZ"2 ☛"RESET"  A şıkkı\n");
  printf(KRMZ"3 ☛"RESET"  B şıkkı\n");
  printf(KRMZ"4 ☛"RESET"  C şıkkı\n");
  printf(KRMZ"5 ☛"RESET"  D şıkkı\n");
  printf(KRMZ"6 ☛"RESET"  Doğru şık\n");

  scanf("%d", &secimGuncelle);


  if(secimGuncelle==1){

    system("clear||cls");
    system("clear||cls");
    printf(SARI"Güncellenecek soru:"RESET" %s\n", yeni_soru[secimSoru].soru);
    printf(SARI"Yeni soruyu giriniz:"RESET);
    getchar();
    fgets(yeni_soru[secimSoru].soru,120,stdin);
    printf(KRMZ"---> Güncelleme başarılı.\n"RESET);
  }

  else if(secimGuncelle==2){

    system("clear||cls");
    system("clear||cls");
    printf(SARI"Güncellenecek şık:"RESET" %s\n", yeni_soru[secimSoru].option_a);
    printf(SARI"Yeni şıkkı giriniz:"RESET);
    getchar();
    fgets(yeni_soru[secimSoru].option_a,120,stdin);
    printf(KRMZ"---> Güncelleme başarılı.\n"RESET);
  }

  else if(secimGuncelle==3){

    system("clear||cls");
    system("clear||cls");
    printf(SARI"Güncellenecek şık:"RESET" %s\n", yeni_soru[secimSoru].option_b);
    printf(SARI"Yeni şıkkı giriniz:"RESET);
    getchar();
    fgets(yeni_soru[secimSoru].option_b,120,stdin);
    printf(KRMZ"---> Güncelleme başarılı.\n"RESET);
  }

  else if(secimGuncelle==4){

    system("clear||cls");
    system("clear||cls");
    printf(SARI"Güncellenecek şık:"RESET" %s\n", yeni_soru[secimSoru].option_c);
    printf(SARI"Yeni şıkkı giriniz:"RESET);
    getchar();
    fgets(yeni_soru[secimSoru].option_c,120,stdin);
    printf(KRMZ"---> Güncelleme başarılı.\n"RESET);
  }

  else if(secimGuncelle==5){

    system("clear||cls");
    system("clear||cls");
    printf(SARI"Güncellenecek şık:"RESET" %s\n", yeni_soru[secimSoru].option_d);
    printf(SARI"Yeni şıkkı giriniz:"RESET);
    getchar();
    fgets(yeni_soru[secimSoru].option_d,120,stdin);
    printf(KRMZ"---> Güncelleme başarılı.\n"RESET);
  }

  else if(secimGuncelle==6){

    system("clear||cls");
    system("clear||cls");
    printf(SARI"Doğru şık:"RESET" %s\n", yeni_soru[secimSoru].correct_option);
    printf(SARI"Yeni doğru şıkkı giriniz:"RESET);
    getchar();
    fgets(yeni_soru[secimSoru].correct_option,120,stdin);
    printf(KRMZ"---> Güncelleme başarılı.\n"RESET);
  }

  else {
    printf(KRMZ"Geçersiz bir değer girdiniz!\n"RESET);
    printf(KRMZ"Güncelleme başarısız!\n -----> Ana menüye dönmek için bir tuşa basınız...\n "RESET);
    getchar();
    getchar();
    system("clear||cls");
    system("clear||cls");
    ana_menu();
  }

  FILE *fp;
  fp = fopen("dosya.txt","w");

  for(int i=0; i<S; i++){

    fputs(yeni_soru[i].soru,fp);
    fputs(yeni_soru[i].option_a,fp);
    fputs(yeni_soru[i].option_b,fp);
    fputs(yeni_soru[i].option_c,fp);
    fputs(yeni_soru[i].option_d,fp);
    fputs(yeni_soru[i].correct_option,fp);
  }

  fclose(fp);
 }

 printf(KRMZ"Ana menüye dönmek için bir tuşa basınız..\n"RESET);
 getchar();
}
