#include <iostream>

class liczbaZespolona{
	float re;
	float im;
	public:
		liczbaZespolona();
		liczbaZespolona(float, float);
		liczbaZespolona operator+(liczbaZespolona &);
		liczbaZespolona operator-(liczbaZespolona &);
		void wypisz();
};

liczbaZespolona::liczbaZespolona(){
	re = 1;
	im = 1;
}

liczbaZespolona::liczbaZespolona(float a, float b){
	re = a;
	im = b;
}

liczbaZespolona liczbaZespolona::operator+(liczbaZespolona &liczba){
	float a, b;
	a = re + liczba.re;
	b = im + liczba.im;
	return liczbaZespolona(a, b);
}

liczbaZespolona liczbaZespolona::operator-(liczbaZespolona &liczba){
	float a, b;
	a = re - liczba.re;
	b = im - liczba.im;
	return liczbaZespolona(a, b);
}

void liczbaZespolona::wypisz(){
	std::cout<<re<<"+i*"<<im;
}

void wypisz_sume(liczbaZespolona a, liczbaZespolona b, liczbaZespolona c){
	std::cout<<"Suma liczb zespolonych ";
	b.wypisz();
	std::cout<<" oraz ";
	c.wypisz();
	std::cout<<", wynosi: ";
	a.wypisz();
	std::cout<<std::endl;
}

int main() {
	int re, im;
	liczbaZespolona a;
	std::cout<<"Podaj czesc rzeczywista pierwszej liczby: ";
	std::cin>>re;
	std::cout<<"Podaj czesc urojona pierwszej liczby: ";
	std::cin>>im;
	liczbaZespolona b(re, im);
	std::cout<<"Podaj czesc rzeczywista drugiej liczby: ";
	std::cin>>re;
	std::cout<<"Podaj czesc urojona drugiej liczby: ";
	std::cin>>im;
	liczbaZespolona c(re, im);
	a=b+c;
	wypisz_sume(a, b, c);
	return 0;
}
