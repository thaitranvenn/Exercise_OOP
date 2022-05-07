#include<iostream>
using namespace std;
#include<string>

class sinhvien
{
	// thuộc tính
private:
	string hoten;
	string maso;
	float diem_toan;
	float diem_ly;
	// phương thức
public:
	void Nhap_Thong_Tin();
	void Xuat_Thong_Tin();

	// cơ chế đóng gói GETTER VÀ SETTER

	// getter họ tên
	string Getter_HoTen()
	{
		return hoten;
	}
	// setter họ tên
	void Setter_HoTen(string HOTEN)
	{
		hoten = HOTEN;
	}

	// hàm tạo và hàm hủy
	sinhvien();
	~sinhvien();
};

void sinhvien::Nhap_Thong_Tin()
{
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap ma so sinh vien: ";
	getline(cin, maso);
	cout << "\nNhap diem toan: ";
	cin >> diem_toan;
	cout << "\nNhap diem ly: ";
	cin >> diem_ly;
}

void sinhvien::Xuat_Thong_Tin()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nMa so: " << maso;
	cout << "\nDiem toan: " << diem_toan;
	cout << "\nDiem ly: " << diem_ly;
}

sinhvien::sinhvien()
{}

sinhvien::~sinhvien()
{}

int main()
{
	sinhvien ThaiTran;
	cout << "\n\t NHAP THONG TIN SINH VIEN\n";
	ThaiTran.Nhap_Thong_Tin();
	//cout << ThaiTran.Getter_Hoten();
	//ThaiTran.Setter_Hoten("Tran Thai");
	cout << "\n\t XUAT THONG TIN SINH VIEN\n";
	ThaiTran.Xuat_Thong_Tin();
	cout << endl;
	system("pause");
	return 0;
}