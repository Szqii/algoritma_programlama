#include <stdio.h>
#define SARI "\x1b[1;33m"
#define KRMZ "\x1b[1;31m"
#define RESET "\x1b[0m"
#define MAVI "\x1b[1;36m"

struct question {
  char text[100];
  char option_a[100];
  char option_b[100];
  char option_c[100];
  char option_d[100];
  char correct_option[100];
  int id;
};

int id_counter =1;

void new_question() {

  struct question questionNew;
  printf("Soruyu giriniz: ");
  fgets(questionNew.text, 100, stdin);

  printf("A şıkkını giriniz: ");
  fgets(questionNew.option_a, 100, stdin);

  printf("B şıkkını giriniz: ");
  fgets(questionNew.option_b, 100, stdin);

  printf("C şıkkını giriniz: ");
  fgets(questionNew.option_c, 100, stdin);

  printf("D şıkkını giriniz: ");
  fgets(questionNew.option_d, 100, stdin);

  printf("Doğru şıkkın hangisi olduğunu giriniz: ");
  fgets(questionNew.correct_option, 100, stdin);

questionNew.id=id_counter;
id_counter++;


  FILE *f;
  f = fopen("Deneme.txt","a");

  fprintf(f, "\n%d. Soru\n%s\nA.%s\nB.%s\nC.%s\nD.%s\n",questionNew.id, questionNew.text, questionNew.option_a, questionNew.option_b, questionNew.option_c, questionNew.option_d);


}
