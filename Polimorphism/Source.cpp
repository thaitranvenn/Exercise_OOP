/*Công ty phát triển phần mềm Ba Con Sâu có nhu cầu quản lý các nhân viên gồm:
Programmer(Nhân viên lập trình), Designer(Nhân viên thiết kế). Thông tin cơ bản các nhân viên đều có:
+ Mã nhân viên
+ Tên nhân viên
+ Ngày tháng năm sinh
+ Địa chỉ
+ Hệ số lương
+ Lương cơ bản
Lương của nhân viên được tính như sau:
+ Programmer: Lương cơ bản + hệ số lương + Tiền overtime
+ Designer: Lương cơ bản + hệ số lương + Bonus

Định dạng trong file NHANVIEN.TXT như sau:
+ Dòng đầu tiên chứa số lượng nhân viên trong công ty
+ Các dòng tiếp theo mỗi dòng là một thông tin của từng nhân viên
3
P110, Tran Tung Lam, 12/04/1985, 12 Quoc lo 1A Binh Tan Ho Chi Minh, 8.56, 8000000, 2000000
D310, Ly Thuong Kiet, 2/9/1991, 72 Nguyen Thi Minh Khai Quan 3 Ho Chi Minh, 4.66, 6000000, 1500000
P350, Lam Tieu Mai, 12/7/1991, 1/32 Nguyen Trai Quan 1 Ho Chi Minh, 3.76, 8000000,3000000

Yêu cầu:
1. Đọc file dữ liệu NHANVIEN.TXT
2. Thống kê lương nhân viên giảm dần ra tập tin THONGKELUONG.TXT
3. Sắp xếp nhân viên tăng dần theo năm sinh ra tập tin NAMSINHTANGDAN.TXT
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Khai báo cấu trúc lớp ngày tháng năm sinh
class NamSinh
{
private:
	int ngay;
	int thang;
	int nam;
public:
	// phương thức getter của ngày
	int Getter_Ngay()
	{
		return ngay;
	}

	// phương thức setter của ngày
	void Setter_Ngay(int NGAY)
	{
		NGAY = ngay;
	}

	// phương thức getter của tháng
	int Getter_Thang()
	{
		return thang;
	}

	// phương thức setter của tháng
	void Setter_Thang(int THANG)
	{
		THANG = thang;
	}

	// phương thức getter của năm
	int Getter_Nam()
	{
		return nam;
	}

	// phương thức setter của năm
	void Setter_Nam(int NAM)
	{
		NAM = nam;
	}
};

// Khai báo lớp cha: NhanVien
class NhanVien
{
protected:
	string maNhanVien;
	string tenNhanVien;
	NamSinh namsinh;
	string diaChi;
	float heSoLuong;
	float luongCoBan;

public:
	virtual void Doc_File(ifstream&);
	virtual void Xuat_Thong_Tin();
};

// Cài đặt phương thức đọc file của lớp cha
void NhanVien::Doc_File(ifstream& filein)
{
	getline(filein, maNhanVien, ',');
	filein.seekg(1, 1); // dịch con trỏ chỉ vị của file tại vị trí hiện tại sang bên phải 1 byte
	getline(filein, tenNhanVien, ',');
	int ngay;
	filein >> ngay;
	namsinh.Setter_Ngay(ngay);
	filein.seekg(1, 1); // dịch con trỏ chỉ vị của file tại vị trí hiện tại sang bên phải 1 byte
	int thang;
	filein >> thang;
	namsinh.Setter_Thang(thang);
	filein.seekg(1, 1); // dịch con trỏ chỉ vị của file tại vị trí hiện tại sang bên phải 1 byte
	int nam;
	filein >> nam;
	namsinh.Setter_Nam(nam);
	filein.seekg(2, 1); // dịch con trỏ chỉ vị của file tại vị trí hiện tại sang bên phải 2 byte
	getline(filein, diaChi, ',');
	filein >> heSoLuong;
	filein.seekg(1, 1); // dịch con trỏ chỉ vị của file tại vị trí hiện tại sang bên phải 1 byte
	filein >> luongCoBan;
	filein.seekg(1, 1); // dịch con trỏ chỉ vị của file tại vị trí hiện tại sang bên phải 1 byte
}

// Xuất thông tin
void NhanVien::Xuat_Thong_Tin()
{
	cout << "\nMa nhan vien: " << maNhanVien;
	cout << "\nHo ten nhan vien: " << tenNhanVien;
	cout << "\nNgay thang nam sinh: " << namsinh.Getter_Ngay() << '/' << namsinh.Getter_Thang() << '/' << namsinh.Getter_Nam();
	cout << "\nDia chi nhan vien: " << diaChi;
	cout << "\nHe so luong: " << heSoLuong;
	cout << "\nLuong co ban: " << (size_t)luongCoBan;
}

// Khai báo lớp con NhanVienLapTrinh kế thừa lại lớp cha: NhanVien
class NhanVienLapTrinh : public NhanVien
{
private:
	float tienLamNgoaiGio;
public:
	void Doc_File(ifstream&);
	void Xuat_Thong_Tin();

};

// Cài đặt file cho lớp NhanVienLapTrinh
void NhanVienLapTrinh::Doc_File(ifstream& filein)
{
	NhanVien::Doc_File(filein);
	filein >> tienLamNgoaiGio;
}


// Xuất thông tin NhanVienLapTrinh
void NhanVienLapTrinh::Xuat_Thong_Tin()
{
	NhanVien::Xuat_Thong_Tin();
	cout << "\nTien lam ngoai gio: " << (size_t)tienLamNgoaiGio;
}

// Khai báo lớp con NhanVienThietKe kế thừa lại lớp cha: NhanVien
class NhanVienThietKe : public NhanVien
{
private:
	float tienThuong;
public:
	void Doc_File(ifstream&);
	void Xuat_Thong_Tin();
};

// Cài đặt file cho lớp NhanVienThietKe
void NhanVienThietKe::Doc_File(ifstream& filein)
{
	NhanVien::Doc_File(filein);
	filein >> tienThuong;
}

// Xuất thông tin NhanVienThietKe
void NhanVienThietKe::Xuat_Thong_Tin()
{
	NhanVien::Xuat_Thong_Tin();
	cout << "\nTien thuong: " << (size_t)tienThuong;
}
void Menu(NhanVien* ds[], int& n)
{
	ifstream filein;
	filein.open("NHANVIEN.TXT", ios_base::in);

	while (true)
	{
		system("cls");
		cout << "\n\n\t\t ====MENU====";
		cout << "\n1. Doc thong tin nhan vien tu file NHANVIEN.TXT";
		cout << "\n2. Xuat danh sach nhan vien";
		cout << "\n0. Ket thuc";
		cout << "\n\n\t\t ====END====";

		int choose;
		cout << "\nNhap lua chon: ";
		cin >> choose;
		if (choose == 1)
		{
			filein >> n;
			NhanVien* x = NULL;
			for (int i = 0; i < n; i++)
			{
				char c;
				filein >> c;
				filein.seekg(-1, 1); // dịch sang trái 1 byte để về đầu dòng
				if (c == 'P')
				{
					x = new NhanVienLapTrinh();
					x->Doc_File(filein);
				}
				else if (c == 'D')
				{
					x = new NhanVienThietKe();
					x->Doc_File(filein);
				}
				ds[i] = x;
			}
		}
		else if (choose == 2)
		{
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n\t\t Thong tin nhan vien thu: " << i + 1 << endl;
				ds[i]->Xuat_Thong_Tin();
			}
			cout << endl << endl;
			system("pause");
		}
		else
		{
			break;
		}
	}
	filein.close();
}

int main()
{
	NhanVien* ds[100]; // Khai báo mảng 1 chiều các con trỏ lưu trữ các nhân viên
	int n;
	Menu(ds, n);
	system("pause");
	return 0;
}