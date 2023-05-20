#include <iostream>


class Entity
{
public:
	
	Entity() // constructor
	{
		std::cout << "Created Entity!" << std::endl;

		X = 0.0f;
		Y = 0.0f;
	}


	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
	
	
	float X, Y;

	void Init()
	{
		X = 0.0f;
		Y = 0.0f;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

void Function()
{
	Entity e;
	e.Print();

	e.~Entity();
}

int main()
{
	Function();

	std::cin.get();

	return 0;
}
