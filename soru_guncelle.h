// GUNCELLENECEK SORUYU EKRANA YAZDIRIR

void soru_guncelleme() {

  int secimSoru;
  int secimGuncelle;

  printf("Kaçıncı soruyu güncellemek istersiniz? ");
  scanf("%d", &secimSoru);


  if(secimSoru>S){

    printf("Böyle bir soru bulunmamaktadır. Ana menüye dönmek için bir tuşa basınız.\n");
    getchar();
    ana_menu();

  }

  else {

  soru_goruntuleUp(secimSoru);

  printf("Güncellemek istediğiniz şeyi seçiniz.\n");
  printf("1- Soru\n");
  printf("2- A şıkkı\n");
  printf("3- B şıkkı\n");
  printf("4- C şıkkı\n");
  printf("5- D şıkkı\n");
  printf("6- Doğru şık\n");

  scanf("%d", &secimGuncelle);

  if(secimGuncelle==1){

    printf("Güncellenecek soru: %s\n", yeni_soru[secimSoru].soru);
    printf("Yeni soruyu giriniz:");
    getchar();
    fgets(yeni_soru[secimSoru].soru,120,stdin);
    printf("---> Güncelleme başarılı.\n");
  }

  else if(secimGuncelle==2){

    printf("Güncellenecek şık: %s\n", yeni_soru[secimSoru].option_a);
    printf("Yeni şıkkı giriniz:");
    getchar();
    fgets(yeni_soru[secimSoru].option_a,120,stdin);
    printf("---> Güncelleme başarılı.\n");
  }

  else if(secimGuncelle==3){

    printf("Güncellenecek şık: %s\n", yeni_soru[secimSoru].option_b);
    printf("Yeni şıkkı giriniz:");
    getchar();
    fgets(yeni_soru[secimSoru].option_b,120,stdin);
    printf("---> Güncelleme başarılı.\n");
  }

  else if(secimGuncelle==4){

    printf("Güncellenecek şık: %s\n", yeni_soru[secimSoru].option_c);
    printf("Yeni şıkkı giriniz:");
    getchar();
    fgets(yeni_soru[secimSoru].option_c,120,stdin);
    printf("---> Güncelleme başarılı.\n");
  }

  else if(secimGuncelle==5){

    printf("Güncellenecek şık: %s\n", yeni_soru[secimSoru].option_d);
    printf("Yeni şıkkı giriniz:");
    getchar();
    fgets(yeni_soru[secimSoru].option_d,120,stdin);
    printf("---> Güncelleme başarılı.\n");
  }

  else if(secimGuncelle==6){

    printf("Doğru şık: %s\n", yeni_soru[secimSoru].correct_option);
    printf("Yeni doğru şıkkı giriniz:");
    getchar();
    fgets(yeni_soru[secimSoru].correct_option,120,stdin);
    printf("---> Güncelleme başarılı.\n");
  }

  else {
    printf("Geçersiz bir değer girdiniz.\n");
    printf("Güncelleme başarısız! Ana menüye dönmek için bir tuşa basınız. ");
    getchar();
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

 printf("Ana menüye dönmek için bir tuşa basınız..\n");
 getchar();
}
