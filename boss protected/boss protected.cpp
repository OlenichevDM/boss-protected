#include <iostream>
#include <string>

using namespace std;

class Sotrudnik
{
private:
	string name;
protected:
	int age;
public:
	int salary;
	void display()
	{
		cout << "Name: " << name << "\tage: " << age << "\t\tsalary: " << salary << endl;
	}
	Sotrudnik() { };
	Sotrudnik(string name, int age, int salary) { this->name = name; this->age = age; this->salary = salary; }
	~Sotrudnik() { };

	void setPosition(string name) { this->name = name; };
	void setSalary(int salary) { this->salary = salary; };
	void setAge(int age) { this->age = age; };
};

class BigBoss : public Sotrudnik
{
private:
	int bonus = 15000;
	string name;
public:
	int GetBonus()
	{
		return bonus;
	}
	string GetName()
	{
		return name;
	}

	int salary_bonus;
	BigBoss() { };
	BigBoss(string name, int age, int salary) { this->name = name; this->age = age; this->salary = salary; }
	void display()
	{
		salary_bonus = salary + bonus;
		cout << "Name: " << name << "\tage: " << age << "\t\tsalary: " << salary << "\t\tBonus: " << bonus << "\tsalary_bonus: " << salary_bonus << endl;
	}
};

int main()
{
	Sotrudnik Worker("Evgeniy", 25, 37500);

	BigBoss Boss("Stepan", 45, 95000);

	Worker.display();
	Boss.display();
}