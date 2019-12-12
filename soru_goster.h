// SORULARI EKRANA YAZDIRIR.

void soru_goruntule() {

  for(int i=1; i<S; i++) {

    printf("\n%d. soru: %s\n",i, yeni_soru[i].soru);
    printf("A- %s",yeni_soru[i].option_a);
    printf("B- %s",yeni_soru[i].option_b);
    printf("C- %s",yeni_soru[i].option_c);
    printf("D- %s",yeni_soru[i].option_d);
    printf("Doğru seçenek: %s\n", yeni_soru[i].correct_option);
  }
}

void soru_goruntuleUp(int a){

  printf("\n%d. soru: %s\n",a, yeni_soru[a].soru);
  printf("A- %s",yeni_soru[a].option_a);
  printf("B- %s",yeni_soru[a].option_b);
  printf("C- %s",yeni_soru[a].option_c);
  printf("D- %s",yeni_soru[a].option_d);
  printf("Doğru seçenek: %s\n", yeni_soru[a].correct_option);


}
