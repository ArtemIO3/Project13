#include <iostream>
#include <string>
using namespace std;


class Transport
{
protected:
	string name;
	double MaxSpeed;
	string color;
	int numberOfSeats;
public:
	Transport() {}
	Transport(string n, double m, string c, int num)
	{
		name = n;
		MaxSpeed = m;
		color = c;
		numberOfSeats = num;
	}
	 void SetName(string n)
	{
		name = n;
	}
	string GetName()
	{
		return name;
	}
	void SetMaxSpeed(double m)
	{
		MaxSpeed = m;
	}
	double GetMaxSeed()
	{
		return MaxSpeed;
	}
	void SetColor(string c)
	{
		color = c;
	}
	string GetColor()
	{
		return color;
	}
	void SetnumberOfSeats(int num)
	{
		numberOfSeats = num;
	}
	int GetnumberOfSeats()
	{
		return numberOfSeats;
	}
	void Print()
	{
		cout << "Name: " << name << "\tMaxSpeed: " << MaxSpeed << "\tColor: " << color << "\tNumber OF Seats: " << numberOfSeats << endl;
	}
};
class Truck :public Transport
{
	double LiftingCapacity;
	double Height;
public:
	Truck(){}
	Truck(string n, double m, string c, int num,double l,double h)
	{
		name = n;
		MaxSpeed = m;
		color = c;
		numberOfSeats = num;
		LiftingCapacity = l;
		Height = h;
	}
	void SetLiftingCapacity(double l)
	{
		LiftingCapacity = l;
	}
	double GetLiftingCapacity()
	{
		return LiftingCapacity;
	}
	void SetHeight(double h)
	{
		Height = h;
	}
	double GetHeight()
	{
		return Height;
	}
	void Print()
	{
		Transport::Print();
		cout << "LiftingCapacity: " << LiftingCapacity << "\t Height: " << Height << endl;
	}
};

int main()
{
	Truck obj1("ada", 20, "red", 3, 3, 2.5);
		obj1.Print();
}