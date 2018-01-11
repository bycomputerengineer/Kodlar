//String Cevirme Fonksiyonlar�

//atoi "string"in i�eri�ini "integer"a �evirrir.
//atol "string"in i�eri�ini "long"a �evirir.
//atof "string"in i�eri�ini "double"a �evirir.
//strtod(string, ptr) "string" stringinin i�eri�ini "double"a �evirir. �evrilemeyen ilk karakterin adresini "ptr" isimli pointer'a atar.
//strtol(string, ptr) "string" stringinin i�eri�ini "long"a �evirir. �evrilmeyen ilk karakterin adresini "ptr" isimli pointer'a atar.


#include <stdio.h>
#include <stdlib.h> //atoi, tof, atol gibi fonksiyonlar stdlib'de.

int main()
{
    char string[100];

    int x;
    long y;
    double z;

    //kucuk sayilarlarla ve 15-20 basamakli sayilarla test edin.
    //Sonra kesirli say�larla test edin.
    printf("Sayi girin: ");
    gets(string);

    x=atoi(string); //stringin i�erigini integer' �evirir.
    y=atol(string); //stringin degerini long'a �evirir.
    z=atof(string); //string'in degerini double'a �evirir.

    printf("int= %d\n", x);
    printf("long= %ld\n", y);
    printf("double= %lf\n", z);

    double a;

    char *cevrilemeyen_kisim;
    a=strtod(string, cevrilemeyen_kisim);
    printf("a: %lf\n", a);
    printf("Sayidan sonraki: %s\n", cevrilemeyen_kisim);

    printf("\n");

    long b;

    // 10 -> onluk sayi taban�ndan �evirdigimiz i�in
    b= strtol(string, cevrilemeyen_kisim, 10);

    printf("b: %ld\n", b);
    printf("Cevrilemeyen kisim: %s\n", cevrilemeyen_kisim);

    return 0;
}
