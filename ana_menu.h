// ANA MENÜ FONSKİYONU

int islem_sec;

void ana_menu() {


	printf("                                        ____________________                                               \n");
  printf("                                       |                    |                                              \n");
  printf("=====================================> |      ANA MENÜ      | <============================================\n");
  printf("                                       |____________________|                                              \n");

	printf("\nYapmak istediginiz islemi seciniz.\n");
	printf("1.Soru ekle\n2.Soru sil\n3.Soruları göster ve güncelle\n4.Oyun oyna\n5.En yüksek skorları göster.\n6.Çık\n");
	scanf("%d", &islem_sec);
	getchar();

}
