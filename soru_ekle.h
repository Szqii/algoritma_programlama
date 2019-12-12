// SORU EKLEME FONKSİYONU


int S=1;// Soru sayısını tutan değişken
struct sorum{
  char soru[120];
  char option_a[120];
  char option_b[120];
  char option_c[120];
  char option_d[120];
  char correct_option[120];
  int id;
}yeni_soru[BUFSIZ];
int counter;

void soru_ekle() {

  printf("                                        ____________________                                               \n");
  printf("                                       |                    |                                              \n");
  printf("=====================================> | SORU EKLEME EKRANI | <============================================\n");
  printf("                                       |____________________|                                              \n");

  printf("\n%d. Soruyu eklemek için gerekli bilgileri doldurunuz.\n",S);


  FILE *fp;
  fp = fopen("dosya.txt","a");

  printf("Soruyu giriniz: ");
  fgets(yeni_soru[S].soru,120,stdin);
  fputs(yeni_soru[S].soru,fp);


  printf("A şıkkını giriniz: ");
  fgets(yeni_soru[S].option_a,120,stdin);
  fputs(yeni_soru[S].option_a,fp);

  
  printf("B şıkkını giriniz: ");
  fgets(yeni_soru[S].option_b,120,stdin);
  fputs(yeni_soru[S].option_b,fp);


  printf("C şıkkını giriniz: ");
  fgets(yeni_soru[S].option_c,120,stdin);
  fputs(yeni_soru[S].option_c,fp);

  printf("D şıkkını giriniz: ");
  fgets(yeni_soru[S].option_d,120,stdin);
  fputs(yeni_soru[S].option_d,fp);

  printf("Doğru şıkkı giriniz: ");
  fgets(yeni_soru[S].correct_option,120,stdin);
  fputs(yeni_soru[S].correct_option,fp);
  fclose(fp);

  yeni_soru[S].id = counter;
  counter++;
  printf("\n-------> %d. soru başarıyla eklendi!\nAna menüye dönmek için bir tuşa basınız.\n", yeni_soru[S].id);
  S++;
  getchar();


}
