#include <iostream>
#include <new>
#include <cstring>

class samochod{
	char marka[10];
	public:
		samochod(char[10]);
		virtual void wypisz();
		void wypisz_marke();
};

class samochod_dostawczy: public samochod {
	int masa_towaru;
	public:
		samochod_dostawczy(char[10], int);
		void wypisz();
};

samochod::samochod(char znaki[10]){
	strcpy(marka, znaki);
}

void samochod::wypisz(){
	std::cout<<"Marka samochodu to: "<<marka<<std::endl;
}

void samochod::wypisz_marke(){
	std::cout<<"Marka samochodu to: "<<marka<<std::endl;
}

samochod_dostawczy::samochod_dostawczy(char znaki[10], int masa): samochod(znaki){
	masa_towaru = masa;
}

void samochod_dostawczy::wypisz(){
	wypisz_marke();
	std::cout<<"Masa towaru: "<<masa_towaru<<std::endl;
}

int main() {
	char marka[10];
	std::cout<<"Podaj marke samochodu: "<<std::endl;
	std::cin>>marka;
	samochod pierwszy(marka);
	pierwszy.wypisz();
	char marka2[10];
	int masa;
	std::cout<<"Podaj marke samochodu dostawczego: "<<std::endl;
	std::cin>>marka2;
	std::cout<<"Podaj mase towaru samochodu dostawczego: "<<std::endl;
	std::cin>>masa;
	samochod_dostawczy drugi(marka2, masa);
	drugi.wypisz();
	return 0;
}
