/*
Funkcja wyswietla znaczenie liczby zespolonej podanej jak argument
*/
void wyswietl(Zespolona z1)
{
cout<<"("<<noshowpos<<z1.re<<showpos<<z1.im<<"i)"<<endl;

}
/*
Funkcja zaprasza wpisac znaczenia czesci rzeczywistej i urojonej liczby zespolonej
*/
void wpisz(Zespolona &x)
{
    cout<<"wpisz czesc rzeczywista  ";
    cin>>x.re;
    cout<<"wpisz czesc urojona  ";
    cin>>x.im;

}
int wybor(int wybierz)
{

    cout<<"wybierz\n dodawanie : 1\n odejmowanie : 2\n iloczyn : 3\n dzielenie : 4\n porownanie : 5\n sprzenzenie : 6\nzmiana znaku : 7"<<endl;
 cout<<"operator += : 8\n operator *= : 9\n operator ++i : 10\n operator i++ : 11\n koniec : 0"<<endl;
 cin>>wybierz;//wpowadzenie potrebujencego operatora
 return wybierz;
}