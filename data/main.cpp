#include <iostream>

class data{
	private:
		int dzien;
		int miesiac;
		int rok;
	public:
		data();
		friend std::istream& operator>>(std::istream&, data&);
		friend std::ostream& operator<<(std::ostream&, data&);
};

	data::data(){
		dzien = 0;
		miesiac = 0;
		rok = 0;
	}

	std::istream& operator>>(std::istream& wejscie, data& obiekt){
		wejscie>>obiekt.dzien;
		wejscie>>obiekt.miesiac;
		wejscie>>obiekt.rok;
		return wejscie;
	}
	
	std::ostream& operator<<(std::ostream& wyjscie, data& obiekt){
		wyjscie<<"Podano date: "<<obiekt.dzien<<"."<<obiekt.miesiac<<"."<<obiekt.rok<<std::endl;
		return wyjscie;
	}

int main(int argc, char** argv) {
	data obiekt1;
	std::cin>>obiekt1;
	std::cout<<obiekt1;
	return 0;
}
