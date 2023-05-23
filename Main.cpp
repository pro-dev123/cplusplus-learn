#include <iostream>


class Entity
{
public:
	float X, Y;

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

class Player : public Entity // Inheritance
{
public:
	char* Name;

	void Hello()
	{
		std::cout << "Hello, " << Name << "!" << std::endl;
	}
};

int main()
{
	Entity e = { 1.0f, 2.0f };
	e.Print();

	Player p;

	p.X = 4.0f;
	p.Y = 5.0f;

	p.Name = (char*) "hi990103";

	p.Print();
	p.Hello();

	std::cout << sizeof(e) << ", " << sizeof(p) << std::endl;

	std::cin.get();

	return 0;
}
