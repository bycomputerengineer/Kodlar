#include <stdio.h>

int main()
{
	char s[100];
	//gets fonksiyonu ile c�mle okunabilir (bo�luklar dahil).
	//scanf %s ile kelime okunabiliyor. scanf %s bo�luklar� alm�yor.
	
	printf("\n\ncumle girin: ");
	gets(s);
	
	printf("\n\ncumle: ");
	puts(s);
	
	return 0;
}
