void soru_sil()
{
	printf("                                        ____________________                                               \n");
	printf("                                       |                    |                                              \n");
	printf("=====================================> | SORU SILME EKRANI  | <============================================\n");
	printf("                                       |____________________|                                                ");

	int noSilinen = 0;
	int sec;//Silinecek bilginin numarası.


		for(int i=1; i<S; i++) {

    printf("\n%d. soru: %s",i, yeni_soru[i].soru); }


	printf("\n----> Silmek istediginiz sorunun numarasini giriniz: ");
	scanf("%d",&noSilinen);


	noSilinen=noSilinen - 1;


	{
		strcpy(yeni_soru[noSilinen].soru,yeni_soru[S-1].soru);
		strcpy(yeni_soru[noSilinen].option_a,yeni_soru[S-1].option_a);
		strcpy(yeni_soru[noSilinen].option_b,yeni_soru[S-1].option_b);
		strcpy(yeni_soru[noSilinen].option_c,yeni_soru[S-1].option_c);
		strcpy(yeni_soru[noSilinen].option_d,yeni_soru[S-1].option_d);
		strcpy(yeni_soru[noSilinen].correct_option,yeni_soru[S-1].correct_option);

		S--;

		printf("\n\n---> Soru silme başarılı!\nAna menüye dönmek için bir tuşa basınız.\n");
		getchar();
	}
}
