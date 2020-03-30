#include <iostream>
#include <cstring>
#include <cassert>
#include<iomanip>
#include <cmath>
#define PI 3.14159265
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

 int wybierz;
 do{
 wybierz = wybor(wybierz);
 switch (wybierz)
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
      case 8:
      z1+=z2;
      wyswietl(z1);
      break;
      case 9:
      z1*=z2;
      wyswietl(z1);
      break;
      case 10:
      ++z1;
      wyswietl(z1);
      break;
      case 11:
      z1++;
      wyswietl(z1);
      break;
      case 12:
      double Arg;
      Arg= Argument(z1);
      cout<<"Argument  : "<<Arg<< "radian"<<endl;
      break;
 default:
 continue;
     break;
 }
 }while(wybierz != 0);//petlia dziala do momentu poki nie bedzie wprowadzone 0
cout<<"Nacisnij  0  zeby zakonczyc, inna liczba przedluza "<<endl;
cin>>n;
    }
    }
}