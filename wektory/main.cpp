#include <iostream>

template <typename T>
class wektor2{
	T x;
	T y;
	public:
		wektor2();
		void dodaj(wektor2<T>&);
		void wypisz();
};

template <typename T>
wektor2<T>::wektor2(){
	std::cout<<"Podaj wspolzedna x: ";
	std::cin>>x;
	std::cout<<"Podaj wspolzedna y: ";
	std::cin>>y;
}

template <typename T>
void wektor2<T>::wypisz(){
	std::cout<<"X: "<<x<<", Y: "<<y<<std::endl;
}

template <typename T>
void wektor2<T>::dodaj(wektor2<T>& obiekt){
	x = x + obiekt.x;
	y = y + obiekt.y;
	wektor2<T>::wypisz();
}

int main() {
	wektor2<int> nowy_int;
	wektor2<int> nowy_int2;
	wektor2<float> nowy_float;
//	wektor2<float> nowy_float2;
	wektor2<double> nowy_double;
//	wektor2<double> nowy_double2;
	
	nowy_int.dodaj(nowy_int2);
	
	nowy_int.wypisz();
//	nowy_float.dodaj(nowy_float2);
//	nowy_double.dodaj(nowy_double2);
// zakomentowane bo z tresci zadania wynikaloby, ze samych dzialan na wektorach robic nie mamy

	return 0;
}
