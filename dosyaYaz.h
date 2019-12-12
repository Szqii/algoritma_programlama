void dosyaYaz()  //TEK FONKSIYONDA DOSYA YAZMA ISLEMI
{
	FILE *kayit;
	kayit = fopen("dosya.txt","w");

	if(kayit==NULL)
    	printf("Dosya Bulunamadi...");

    else
	{
		for (int i = 0; i < S+1; i++)
		{
			fprintf(kayit,"%s\n%s\ns\n%s\n%s",yeni_soru[S].soru, yeni_soru[S].option_a, yeni_soru[S].option_b, yeni_soru[S].option_c, yeni_soru[S].option_d);
		}
	}
	fclose(kayit);
}
