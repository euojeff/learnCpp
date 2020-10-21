#include	<iostream>
#include	<iomanip>

constexpr auto pause = "PAUSE";

int main() {
	setlocale(LC_ALL, "PT-BR");

	int NumeroInt;
	float NumeroFloat;
	double NumeroDouble;
	char Caracter;
	

	NumeroInt = 100;
	NumeroFloat = 1.6516465164616846516465416459684;
	NumeroDouble = 1.265161651651651651651;
	Caracter = 'A';


	std::cout
		<< "$$$$$$$$$$$$$$" << std::endl
		<< "Valor NumeroInt " << NumeroInt << std::endl
		<< "Valor NumeroFloat " << std::setprecision(20) << NumeroFloat << std::endl
		<< "Valor NumeroDouble " << std::setprecision(10) << NumeroDouble << std::endl
		<< "Valor Caracter " << Caracter << std::endl
		<< "Tamanho NumeroInt " << sizeof(NumeroInt) << std::endl
		<< "Tamanho NumeroFloat " << sizeof(NumeroFloat) << std::endl
		<< "Tamanho NumeroDouble " << sizeof(NumeroDouble) << std::endl
		<< "Tamanho Caracter " << sizeof(Caracter) << std::endl
		<< "Endereço NumeroInt " << &NumeroInt << std::endl
		<< "Endereço NumeroFloat " << &NumeroFloat << std::endl
		<< "Endereço NumeroDouble " << &NumeroDouble << std::endl
		<< "Endereço Caracter " << (void *)&Caracter << std::endl
		<< "$$$$$$$$$$$$$$" << std::endl;

	system(pause);
	return 0;
}