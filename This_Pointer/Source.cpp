#include <iostream>
using namespace std;

class PhanSo
{
private:
	int tuso;
	int mauso;
public:
	PhanSo()
	{
		tuso = 0;
		mauso = 1;
	}

	~PhanSo()
	{
		tuso = 0;
		mauso = 1;
	}
	void Set()
	{
		cout << "\nNhap tu so: ";
		cin >> this->tuso;
		cout << "\nNhap mau so: ";
		cin >> this->mauso;
	}

	void Get()
	{
		cout << this->tuso << "/" << this->mauso << endl;
	}

	PhanSo Cong(PhanSo ps1, PhanSo ps2)
	{
		this->tuso = ps1.tuso * ps2.mauso + ps1.mauso * ps2.tuso;
		this->mauso = ps1.mauso * ps2.mauso;
		return *this;
	}

	PhanSo Tru(PhanSo ps1, PhanSo ps2)
	{

	}
	PhanSo Nhan(PhanSo ps1, PhanSo ps2)
	{

	}

	PhanSo Chia(PhanSo ps1, PhanSo ps2)
	{

	}

	PhanSo RutGon(PhanSo ps)
	{
		int a, b;
		a = abs(this->tuso);
		b = abs(this->mauso);
		while (a != b)
		{
			if (a > b)
			{
				a -= b;
			}
			else
			{
				b -= a;
			}
		}
		this->tuso /= a;
		this->mauso /= b;
		return *this;
	}
};

int main()
{
	PhanSo obj1, obj2, obj3;
	obj1.Set(); obj2.Set();

	obj3 = obj3.Cong(obj1, obj2); obj3.Get();

	obj3 = obj3.RutGon(obj3); obj3.Get();
	cout << endl;
	system("pause");
	return 0;
}