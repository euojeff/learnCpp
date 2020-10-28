#include <iostream>

class Nested
{
private:
	int count;

public:
	Nested();
	~Nested();
	void Incr();
	int GetCount();
};


class Test
{
private:
	int count;
	Nested* nested;

public:
	Test();
	~Test();
	void Incr();
	int GetCount();
};

void chamar(Test inst) {
	std::cout << "Chamar" << std::endl;
	std::cout << inst.GetCount() << std::endl;
	inst.Incr();
	std::cout << "Chamar" << std::endl;
	std::cout << inst.GetCount() << std::endl;
}

void chamarP(Test* inst) {
	std::cout << "Chamar P" << std::endl;
	std::cout << inst->GetCount() << std::endl;
	inst->Incr();
	std::cout << "Chamar P" << std::endl;
	std::cout << inst->GetCount() << std::endl;
}

int main() {
	Test* inst = new Test();
	std::cout << "MAIN" << std::endl;
	inst->Incr();
	std::cout << inst->GetCount() << std::endl;
	chamarP(inst);
	std::cout << "MAIN" << std::endl;
	std::cout << inst->GetCount() << std::endl;
	delete inst;
	system("PAUSE");
	return 0;
}

Test::Test()
{
	count = 0;
	nested = new Nested;
}

Test::~Test()
{
	std::cout << "destruindo Test" << std::endl;
	delete nested;

}

void Test::Incr() {
	count++;
}

int Test::GetCount() {
	return count;
}


Nested::Nested()
{
	count = 0;
}

Nested::~Nested()
{
	std::cout << "destruindo Nested" << std::endl;
}

void Nested::Incr() {
	count++;
}

int Nested::GetCount() {
	return count;
}