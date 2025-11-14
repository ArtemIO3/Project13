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
class Car : public Transport
{
	string typeOFfuel;
	int wheel;
public:
	Car() {  }
	Car(string n, double m, string c, int num, int whe,string type)
	{
		name = n;
		MaxSpeed = m;
		color = c;
		numberOfSeats = num;
		wheel = whe;
		typeOFfuel = type;
	}
	void SettypeOFfuel(string type)
	{
		typeOFfuel = type;
	}
	string GettypeOFfeul()
	{
		return typeOFfuel;
	}
	void SetWheel(int whe)
	{
		wheel = whe;
	}
	int GetWheel()
	{
		return wheel;
	}
	void Print()
	{
		Transport::Print();
		cout << "typeOFfuel: " << typeOFfuel << "\tWheel: " << wheel << endl;
	}
};
class Bike : public Transport
{
	string typeOfBike;
	int wheel;
public:
	Bike(){}
	Bike(string n, double m, string c, int num,string typ,int wh)
	{
		name = n;
		MaxSpeed = m;
		color = c;
		numberOfSeats = num;
		typeOfBike = typ;
		wheel = wh;
	}
	void SettypeOfBike(string typ)
	{
		typeOfBike = typ;
	}
	string GettypeOfBike()
	{
		return typeOfBike;
	}
	void SetWheel(int wh)
	{
		wheel = wh;
	}
	int GetWheel()
	{
		return wheel;
	}
	void Print()
	{
		Transport::Print();
		cout << "Type OF Bike: " << typeOfBike << "\t Wheel: " << wheel << endl;
	}
};
class Tank : Transport
{
	string typeOfbulets;
	string typeOdDriving;
public:
	Tank() {}
	Tank(string n, double m, string c, int num, string typeOf, string typeO)
	{
		name = n;
		MaxSpeed = m;
		color = c;
		numberOfSeats = num;
		typeOfbulets = typeOf;
		typeOdDriving = typeO;
	}
	void SettypeOfbulets(string typeOf)
	{
		typeOfbulets = typeOf;
	}
	string GettypeOfbulets()
	{
		return typeOfbulets;
	}
	void SettypeOdDriving(string typeO)
	{
		typeOdDriving = typeO;
	}
	string GettypeOdDriving()
	{
		return typeOdDriving;
	}
	void Print()
	{
		Transport::Print();
		cout << "TypeOfbulets: " << typeOfbulets << "\t typeOdDriving: " << typeOdDriving << endl;
	}
};
int main()
{
	Truck obj1("kamaz", 120, "red", 2, 5000, 3.5);
	obj1.Print();
	obj1.SetLiftingCapacity(23);
	obj1.GetLiftingCapacity();
	obj1.SetHeight(3213);
	obj1.GetHeight();
	obj1.Print();
	cout << endl;
	Airplane obj2("boing", 800, "white", 150, 5, 60, 4);
	obj2.Print();
	obj2.SetNumberOfHoursInTheAir(6);
	obj2.GetNumberOfHoursInTheAir();
	obj2.Setwingspan(7);
	obj2.Getwingspan();
	obj2.Setturbines(10);
	obj2.Getturbines();
	obj2.Print();
	cout << endl;
	Vessel obj3("titanic", 40, "blue", 2000, "natural gas", 10, 300);
	obj3.Print();
	obj3.SetFuleType("gasoline");
	obj3.GetFuleType();
	obj3.SetNumberOfKnockouts(34);
	obj3.GetNumberOfKnockouts();
	obj3.SetUnderwaterWatch(100);
	obj3.GetUnderwaterWatch();
	cout << endl;
	Car obj4("BMW", 300, "green", 5,4,"gasoline");
	obj4.Print();
	obj4.SettypeOFfuel("gas");
	obj4.GettypeOFfeul();
	obj4.SetWheel(6);
	obj4.GetWheel();
	cout << endl;
	Bike obj5("ThunderRide X5", 40, "yellow", 1, "mountain", 2);
	obj5.Print();
	obj5.SettypeOfBike("sporting");
	obj5.GettypeOfBike();
	obj5.SetWheel(3);
	obj5.GetWheel();
	cout << endl;
	Tank obj6("Leopard 2A4", 68, "green", 4, "APFSDS-T", "tracked");
	obj6.Print();
	obj6.SettypeOdDriving("wheel");
	obj6.GettypeOdDriving();
	obj6.SettypeOfbulets("tracked");
	obj6.GettypeOfbulets();
}