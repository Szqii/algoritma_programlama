#define SARI "\x1b[1;33m"
#define KRMZ "\x1b[1;31m"
#define RESET "\x1b[0m"
#define MAVI "\x1b[1;36m"

struct skor {
    char nick[50];
    int puan;
}yeni_kullanici[50];

int i=0;

void oyun_oyna() {


int z;
char cevap;
int puan=0;
int sayac;


for(sayac=0; sayac<5; sayac++) {

  srand(time(NULL));
  z= 1+(rand()%S-1);

  printf("\n%d. soru: %s",sayac+1,yeni_soru[z].soru);
  printf("A- %s",yeni_soru[z].option_a);
  printf("B- %s",yeni_soru[z].option_b);
  printf("C- %s",yeni_soru[z].option_c);
  printf("D- %s",yeni_soru[z].option_d);
  printf("Cevabınızı giriniz:");
  scanf("%s", &cevap);


  if(cevap=='A') {
    if(!strcmp(yeni_soru[z].correct_option,yeni_soru[z].option_a)) {
    printf(MAVI"Doğru cevap! "RESET);
    puan ++;
  }
  	else{
  		printf(KRMZ"Yanlış Cevap"RESET);
  	}
  }
  else if(cevap=='B') {
    if(!strcmp(yeni_soru[z].correct_option,yeni_soru[z].option_b)) {
    printf(MAVI"Doğru cevap! "RESET);
    puan ++;
  }
  	else{
  		printf(KRMZ"Yanlış Cevap"RESET);
  	}
  }
  else if(cevap=='C') {
    if(!strcmp(yeni_soru[z].correct_option,yeni_soru[z].option_c)) {
    printf(MAVI"Doğru cevap! "RESET);
    puan ++;
  }
  	else{
  		printf(KRMZ"Yanlış Cevap"RESET);
  	}
  }
  else if(cevap=='D') {
    if(!strcmp(yeni_soru[z].correct_option,yeni_soru[z].option_d)) {
    printf(MAVI"Doğru cevap! "RESET);
    puan ++;
  }
  	else{
  		printf(KRMZ"Geçersiz bir değer girdiniz. Cevap yanlış sayılacaktır."RESET);
  	}
  }
}
  getchar();
  FILE *f;
  f = fopen("skorlar.txt","a");
  printf("Kullanıcı adınızı giriniz :\n");
  fgets(yeni_kullanici[i].nick,50,stdin);

  yeni_kullanici[i].puan = puan;
  fprintf(f,"\t%d\t%s\n",yeni_kullanici[i].nick, yeni_kullanici[i].puan);
  fclose(f);
  i++;

}
