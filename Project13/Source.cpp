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
	Transport() { MaxSpeed = 0.0; numberOfSeats = 0; }
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
	Truck() { LiftingCapacity = 0.0; Height = 0.0; }
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
class Airplane : public Transport
{
	double NumberOfHoursInTheAir;
	double wingspan;
	int turbines;
public:
	Airplane() { NumberOfHoursInTheAir = 0.0; wingspan = 0.0; turbines = 0; }
	Airplane(string n, double m, string c, int num, double nu, double wing, int t)
	{
		name = n;
		MaxSpeed = m;
		color = c;
		numberOfSeats = num;
		NumberOfHoursInTheAir = nu;
		wingspan = wing;
		turbines = t;
	}
	void SetNumberOfHoursInTheAir(double nu)
	{
		NumberOfHoursInTheAir = nu;
	}
	double GetNumberOfHoursInTheAir()
	{
		return NumberOfHoursInTheAir;
	}
	void Setwingspan(double wing)
	{
		wingspan = wing;
	}
	double Getwingspan()
	{
		return wingspan;
	}
	void Setturbines(int t)
	{
		turbines = t;
	}
	int Getturbines()
	{
		return turbines;
	}
	void Print()
	{
		Transport::Print();
		cout << "NumberOfHoursInTheAir: " << NumberOfHoursInTheAir << "\t wingspan: " << wingspan << "\t turbines: " << turbines << endl;
	}
};

class Vessel : public Transport
{
	string FuleType;
	double NumberOfKnockouts;
	double UnderwaterWatch;
public:
	Vessel() { NumberOfKnockouts = 0.0; UnderwaterWatch = 0.0; }
	Vessel(string n, double m, string c, int num, string f, double kno, double und)
	{
		name = n;
		MaxSpeed = m;
		color = c;
		numberOfSeats = num;
		FuleType = f;
		NumberOfKnockouts = kno;
		UnderwaterWatch = und;
	}
	void SetFuleType(string f)
	{
		FuleType = f;
	}
	string GetFuleType()
	{
		return FuleType;
	}
	void SetNumberOfKnockouts(double kno)
	{
		NumberOfKnockouts = kno;
	}
	double GetNumberOfKnockouts()
	{
		return NumberOfKnockouts;
	}
	void SetUnderwaterWatch(double und)
	{
		UnderwaterWatch = und;
	}
	double GetUnderwaterWatch()
	{
		return UnderwaterWatch;
	}
	void Print()
	{
		Transport::Print();
		cout << "FuleType: " << FuleType << "\t NumberOfKnockouts: " << NumberOfKnockouts << "\t UnderwaterWatch: " << UnderwaterWatch << endl;
	}
};

int main()
{
	Truck obj1("kamaz", 120, "red", 2, 5000, 3.5);
	obj1.Print();
	Airplane obj2("boing", 800, "white", 150, 5, 60, 4);
	obj2.Print();
	Vessel obj3("titanic", 40, "blue", 2000, "natural gas", 10, 300);
	obj3.Print();
}