#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
using namespace std;

// mat khau co it nhat 8 ky tu
// co ki tu @

class EmailLengthMin : public runtime_error
{
public:
	EmailLengthMin() : runtime_error("\nEmail phai co it nhat 8 ki tu") {}
};

class EmailLengthMax : public runtime_error
{
public:
	EmailLengthMax() : runtime_error("\nEmail khong duoc qua 16 ki tu") {}
};

class Character : public runtime_error
{
public:
	Character() : runtime_error("\nEmail phai co dau @") {}
};

void GetEmail(vector<char>& EmailInput, string email)
{
	cout << "\nNhap email: ";
	cin >> email;
	copy(email.begin(), email.end(), back_inserter(EmailInput));
}

void ShowEmail(vector <char> EmailInput)
{
	for (int i = 0; i < EmailInput.size(); i++)
	{
		cout << EmailInput[i];
	}
}

int main()
{
	string email;
	vector<char> EmailInput;
	GetEmail(EmailInput, email);
	ShowEmail(EmailInput);

	try {
		if (EmailInput.size() < 8)
		{
			throw EmailLengthMin();
		}
		if (EmailInput.size() > 16)
		{
			throw EmailLengthMax();
		}
	}
	catch (EmailLengthMin& exception)
	{
		cout << exception.what();
	}
	catch (EmailLengthMax& exception)
	{
		cout << exception.what();
	}

	try {
		vector<char>::iterator iterator;
		iterator = find(EmailInput.begin(), EmailInput.end(), '@');
		if (iterator == EmailInput.end())
		{
			throw Character();
		}
	}
	catch (Character& exception)
	{
		cout << exception.what();
	}

	cout << endl;
	system("pause");
	return 0;
}