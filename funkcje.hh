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
