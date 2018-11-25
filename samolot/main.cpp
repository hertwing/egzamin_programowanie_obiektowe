#include <iostream>

class samolot{
	private:
		int zasieg;
	public:
		samolot();
		virtual void wypisz();
		int zwroc_zasieg();
};

class samolot_transport: public samolot{
	private:
		int masa_ladunku;
	public:
		samolot_transport();
		void wypisz();
};

samolot::samolot(){
	std::cout<<"Podaj zasieg samolotu: ";
	std::cin>>zasieg;
}

void samolot::wypisz(){
	std::cout<<"Zasieg samolotu wynosi: "<<zasieg<<"."<<std::endl;
}

int samolot::zwroc_zasieg(){
	return zasieg;
}

samolot_transport::samolot_transport(): samolot(){
	std::cout<<"Podaj mase ladunku samolotu: ";
	std::cin>>masa_ladunku;
}

void samolot_transport::wypisz(){
	std::cout<<"Zasieg samolotu wynosi: "<<zwroc_zasieg()<<"."<<std::endl;
	std::cout<<"Masa ladunku samolotu wynosi: "<<masa_ladunku<<"."<<std::endl;
}

int main() {

	samolot samolot1;
	samolot_transport samolot2;
	
	std::cout<<"Obiekt 1:"<<std::endl;
	samolot1.wypisz();
	
	std::cout<<"Obiekt 2:"<<std::endl;
	samolot2.wypisz();
	
	return 0;
}
