/*
program wczytuje 8 (do zdefiniowania) kolejnych dochodow miesiecznych
sumujac je i obliczajac sredni dochod.
na koniec program wypisuje oba wyniki.
*/


#include <iostream>
//#define N 4      bo w tej wersji zapytamy uzytkowanika o "n"


using namespace std;
main ()
{
	float dochod[n], suma, srednia;
	int miesiac, n; //n - to liczba miesiecy
	cout<<"PROGRAM LICZY DOCHODY"<<endl<<endl;
	cout<<"Z ilu miesiecy dochody sumujesz? ";
	cin>>n;
	
	miesiac=1;
	suma=0;
	for(miesiac=1; miesiac<=n ; miesiac++)
	{
		cout<<"Podaj dochod z m-ca nr "<<miesiac<<": ";

		cin>>dochod[miesiac-1];
		suma+=dochod[miesiac-1]; 
	}
	srednia=suma/n;
	cout<<"Dochod sumaryczny wynosi "<<suma<<endl;
	cout<<"Dochod sredni wynosi "<<srednia<<endl;
	system("pause");
	
}
