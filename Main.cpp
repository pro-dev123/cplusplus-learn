#include <iostream>


class Entity
{
public:
	
	Entity() // constructor
	{
		X = 0.0f;
		Y = 0.0f;
	}

	Entity(float x, float y)
	{
		X = x;
		Y = y;
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


class Logger
{
public:
	Logger() = delete;

	static void Log()
	{
		std::cout << "LOG" << std::endl;
	}
};


int main()
{
	Entity e(10.0f, 5.0f);

	// e.Init();
	std::cout << e.X << std::endl;

	e.Print();

	Logger::Log();

	std::cin.get();

	return 0;
}
