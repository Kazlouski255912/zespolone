
/*
Dodawanie liczb zespolonych:
Argumenty:
* Skl1 - pierwszy skladnik dodawania;
* Skl2 - drugi skladnik dodawania
Zwraca:
    Wartosc dodawania dwoch skladnikow przekazanych jako parametry
*/
Zespolona  operator + (Zespolona  Skl1,  Zespolona  Skl2)
{
  Zespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}
/*
Sprzenzenie liczb zespolonych:
Argumenty:
* Skl - liczba zespolona;
Zwraca:
    Wartosc sprzenzenia skladnika przekazanego jako parametr
*/
Zespolona Sprzenzenie(Zespolona Skl)
{
Zespolona Wynik;
Wynik.re = Skl.re;
Wynik.im = -Skl.im;
return Wynik;
}
/*
Odejmowanie liczb zespolonych:
Argumenty:
* Skl1 - pierwszy skladnik odejmowania;
* Skl2 - drugi skladnik odejmowania
Zwraca:
    Wartosc odejmowania dwoch skladnikow przekazanych jako parametry
*/
Zespolona  operator - (Zespolona  Skl1,  Zespolona  Skl2)
{
  Zespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}
/*
Iloczyn liczb zespolonych:
Argumenty:
* Skl1 - pierwszy skladnik iloczynu
* Skl2 - drugi skladnik iloczynu
Zwraca:
    iloczyn dwoch skladnikow przekazanych jako parametry
*/
Zespolona  operator * (Zespolona  Skl1,  Zespolona  Skl2)
{
  Zespolona  Wynik;

  Wynik.re = Skl1.re * Skl2.re;
  Wynik.re-= Skl1.im * Skl2.im;
  Wynik.im = Skl1.re * Skl2.im + Skl1.im * Skl2.re;
  return Wynik;
}
/*
ModulDoKwadratu liczby zespolonej:
Argumenty:
* Skl1 - liczba zespolona;
Zwraca:
    Wartosc bezwzgledna do kwadratu skladnika przekazanego jako parametr
*/
float ModulDoKwadratu(Zespolona Skl)
{
  float Wynik;
  Wynik=Skl.re*Skl.re+Skl.im*Skl.im;
  return Wynik;
}
float Modul(Zespolona Skl)
{
  float Wynik;
  Wynik=Skl.re*Skl.re+Skl.im*Skl.im;
  return sqrt(Wynik);
}

/*
Dzilenie liczb zespolonych:
Argumenty:
* Skl1 - pierwszy skladnik dzielenia;
* Skl2 - drugi skladnik dzielenie
Zwraca:
    Wartosc dzielenia dwoch skladnikow przekazanych jako parametry
*/
Zespolona  operator / (Zespolona  Skl1,  Zespolona  Skl2)
{
  Zespolona  Wynik;
  Zespolona z;
  z = Skl1*(Sprzenzenie(Skl2));
  Wynik.re = z.re/(ModulDoKwadratu(Skl2));
  Wynik.im= z.im/(ModulDoKwadratu(Skl2));
  
  return Wynik;
}
/*
Sprawdzanie prawidlowej odpowiedzi:
Argumenty:
* Skl1 - liczba zespolona wprowadzona przez uzytkownika;
* Skl2 - prawidlowa wartosc
Wynik:
Przy prawidlowo wprowadzonej liczbie zespolonej wyswietli sie "Prawidlowo"
Przy prawidlowo wprowadzonej liczbie zespolonej wyswietli sie "Wystapil Blad 
Prawidlowa odpowiedz  : Skl2"
*/
void Porownanie(Zespolona  Skl1,  Zespolona  Skl2)
{
  if(Skl1.re == Skl2.re){
    if(Skl1.im == Skl2.im)
  cout<<"Prawidlowo "<<endl;
  }
  else
  {
   cout<<"Wystapil Blad \n Prawidlowa odpowiedz  : "<<endl;
wyswietl(Skl2);
  }
  
}
/*
Porownanie liczb zespolonych:
Argumenty:
* Skl1 - pierwszy skladnik porownania;
* Skl2 - drugi skladnik porownania
*/
void  operator == (Zespolona  Skl1,  Zespolona  Skl2)
{
  if(Skl1.re == Skl2.re){
    if(Skl1.im == Skl2.im)
  cout<<"zespolone sa rowne "<<endl;
  }
  else
  {
   cout<<"zespolone sa rozne "<<endl;
  }
  
}
/*
Zmiana znaku liczby zespolonej:
Argumenty:
* Skl1 - liczba zespolona;
Zwraca:
    Wartosc ze zmienionym znakiem skladnika przekazanego jako parametr
*/
Zespolona Zmiana_znaku(Zespolona Skl1)
{
Zespolona Wynik;
Wynik.re = -Skl1.re;
Wynik.im = -Skl1.im;
return Wynik;
}
/*
Dodawanie liczb zespolonych:
Argumenty:
* Skl1 - pierwszy skladnik dodawania;
* Skl2 - drugi skladnik dodawania
Wynik:
    Zmiana wartosci Skl1 na Skl1+Skl2
*/
void operator +=(Zespolona &Skl1, Zespolona Skl2)
{
Skl1.re = Skl1.re + Skl2.re;
Skl1.im = Skl1.im + Skl2.im;
}
/*
Iloczyn liczb zespolonych:
Argumenty:
* Skl1 - pierwszy skladnik iloczynu
* Skl2 - drugi skladnik iloczynu
Wynik:
    Zmiana wartosci Skl1 na Skl1*Skl2
*/
void operator *=(Zespolona& Skl1, Zespolona Skl2)
{
Skl1 = Skl1 * Skl2;
}
/*
Preikrementacja liczby zespolonej:
Argument:
Skl1 : liczba zespolona
Wynik:
Zwieksza czesc rzeczywista i urojona o jeden
*/
void operator ++(Zespolona & Skl1)
{
  Skl1.re= Skl1.re +1;
  Skl1.im= Skl1.im +1;
}
/*
Postikrementacja liczby zespolonej:
Argument:
Skl1 : liczba zespolona
Wynik:
Zwieksza czesc rzeczywista i urojona o jeden
*/
void operator ++(Zespolona & Skl1,int)
{
  Skl1.re= Skl1.re +1;
  Skl1.im= Skl1.im +1;
}
/*
Znalezenie argumentu liczby zespolonej:
Argument funkcji:
Skl : liczba zespolona
Zwraca:
Znaczenie argumentu w radianach
*/
double Argument(Zespolona Skl)
{
  double modul,Re;
  modul = Modul(Skl);
  Re= Skl.re/modul;
  if (Skl.re>0)
return acos(Re);
else
{
 return PI - acos(Re);
}

}