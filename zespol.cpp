#include <iostream>
#include <cstring>
#include <cassert>
#include<iomanip>
using namespace std;
#include"struct.hh"
#include"funkcje.hh"
#include"operatory.hh"

int main(int argc, char *argv[])
{
    int n =1;
    while(n!=0){
    for (int i = 0; i < argc; i++) {
 Zespolona z1,z2,z3,z4;//stworzenie trzech zmiennych
 wpisz(z1);//wywolanie funkcji wpisz
 wpisz(z2);//wywolanie funkcji wpisz

 int wybor;
 do{
 cout<<"wybierz\n dodawanie : 1\n odejmowanie : 2\n iloczyn : 3\n dzielenie : 4\n porownanie : 5\n sprzenzenie : 6\nzmiana znaku : 7\n koniec : 0"<<endl;
 cin>>wybor;//wpowadzenie potrebujencego operatora
 switch (wybor)
 {
  case 1: z3 = z1 + z2;//wywolanie operatora dodawania
  wyswietl(z1);cout<<"+"<<endl;wyswietl(z2);
  wpisz(z4);
  wyswietl(z4);
 Porownanie(z4,z3);
     break;
  case 2: z3 = z1 - z2;//wywolanie operatora odejmowania
  wyswietl(z1);cout<<"-"<<endl;wyswietl(z2);
  wpisz(z4);
  wyswietl(z4);
 Porownanie(z4,z3);
     break;
  case 3: z3 = z1 * z2;//wywolanie operatora mnozenia
  wyswietl(z1);cout<<"*"<<endl;wyswietl(z2);
  wpisz(z4);
  wyswietl(z4);
 Porownanie(z4,z3); 
      break;
  case 4: z3 = z1 / z2;//wywolanie operatora dzielenia
  wyswietl(z1);cout<<"/"<<endl;wyswietl(z2);
  wpisz(z4);
  wyswietl(z4);
 Porownanie(z4,z3);
      break;
      case 5: z1 == z2;//wywolanie operatora porownania
      wyswietl(z1);cout<<"-"<<endl;wyswietl(z2);
       
      break;
  case 6: //wywolanie operatore sprzenzenia
  int sp;
  cout<<"wybierz ile chcesz sprzenzyc\n jedna : 1\n dwie : 2\n"<<endl;
  cin>>sp;
   if(sp == 1 || sp == 2)
   {
       if (sp == 1)
       {
       z1 = Sprzenzenie(z1);
       wyswietl(z1);
       }
       else
       {
       z1 = Sprzenzenie(z1);
         wyswietl(z1);   
       z2 = Sprzenzenie(z2);
       wyswietl(z2);
       }
   }
   else 
   cout<<"wystapil blad  ";
      break;
      case 7://wywolanie operatore zmiany znaku
      int zm;
  cout<<"wybierz ile chcesz zmienic znakow\n jedna : 1\n dwie : 2\n"<<endl;
  cin>>zm;
   if(zm == 1 || zm == 2)
   {
       if (zm == 1)
       {
       z1 = Zmiana_znaku(z1);
       wyswietl(z1);
       }
       else
       {
       z1 = Zmiana_znaku(z1);
         wyswietl(z1);   
       z2 = Zmiana_znaku(z2);
       wyswietl(z2);
       }
   }
   else 
   cout<<"wystapil blad  ";
      break;
 default:
 continue;
     break;
 }
 }while(wybor != 0);//petlia dziala do momentu poki nie bedzie wprowadzone 0
cout<<"Nacisnij  0  zeby zakonczyc"<<endl;
cin>>n;
    }
    }
}