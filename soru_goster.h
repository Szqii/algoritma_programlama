// SORULARI EKRANA YAZDIRIR.
#define SARI "\x1b[1;33m"
#define KRMZ "\x1b[1;31m"
#define RESET "\x1b[0m"
#define MAVI "\x1b[1;36m"

void soru_goruntule() {

  for(int i=1; i<S; i++) {

    printf(MAVI"\n%d. soru:"RESET" %s\n",i, yeni_soru[i].soru);
    printf(MAVI"A-"RESET" %s",yeni_soru[i].option_a);
    printf(MAVI"B-"RESET" %s",yeni_soru[i].option_b);
    printf(MAVI"C-"RESET" %s",yeni_soru[i].option_c);
    printf(MAVI"D-"RESET" %s",yeni_soru[i].option_d);
    printf(MAVI"Doğru seçenek:"RESET" %s\n", yeni_soru[i].correct_option);
  }
}

void soru_goruntuleUp(int a){

  printf(MAVI"\n%d. soru:"RESET" %s\n",a, yeni_soru[a].soru);
  printf(MAVI"A-"RESET" %s",yeni_soru[a].option_a);
  printf(MAVI"B-"RESET" %s",yeni_soru[a].option_b);
  printf(MAVI"C-"RESET" %s",yeni_soru[a].option_c);
  printf(MAVI"D-"RESET" %s",yeni_soru[a].option_d);
  printf(MAVI"Doğru seçenek:"RESET" %s\n", yeni_soru[a].correct_option);


}
