#include <iostream>
#include <cstring>

void problem_z_alokacja(){
	std::cout<<"Wystapil problem z alokacja pamieci"<<std::endl;
}

class ksiazka{
	char *tytul_filmu;
	static int ilosc_ksiazek;
	public:
		ksiazka(char *);
		void wypisz();
		ksiazka operator=(const ksiazka &);
};

int ksiazka::ilosc_ksiazek = 0;

ksiazka::ksiazka(char *w){
	ilosc_ksiazek++;
	tytul_filmu = new char[20];
	std::set_new_handler(problem_z_alokacja);
	strcpy(tytul_filmu, w);
}

void ksiazka::wypisz(){
	std::cout<<"Tytul filmu: "<<tytul_filmu<<std::endl;
	std::cout<<"Ilosc ksiazek: "<<ilosc_ksiazek<<std::endl;
}

ksiazka ksiazka::operator=(const ksiazka & kopia){
	if(this==&kopia) return *this;
	delete[] tytul_filmu;
	tytul_filmu=new char[20];
	std::set_new_handler(problem_z_alokacja);
	strcpy(tytul_filmu, kopia.tytul_filmu);
	return *this;
}

int main() {
	ksiazka pierwsza("Kocham programowanie.");
	pierwsza.wypisz();
	ksiazka druga("Bardzo kocham");
	pierwsza = druga;
	pierwsza.wypisz();
	return 0;
}
