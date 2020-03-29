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
Dodawanie liczb zespolonych:
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
Porownanie liczb zespolonych:
Argumenty:
* Skl1 - pierwszy skladnik porownania;
* Skl2 - drugi skladnik porownania
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
