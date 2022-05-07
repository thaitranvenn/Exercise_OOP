#include<iostream>
using namespace std;
#include<string>
#include<conio.h>

// khai báo lớp cha: class XE
class XE
{
protected:
	string HoTenNguoiThue;
	float SoGioThue;

public:

	void NhapThongTin()
	{
		while (getchar() != '\n'); // xóa bộ nhớ đệm trước khi nhập chuỗi
		cout << "\nNhap ho ten nguoi thue: ";
		getline(cin, HoTenNguoiThue);
		cout << "\nNhap so gio thue: ";
		cin >> SoGioThue;
	}
	void XuatThongTin()
	{
		cout << "\nHo ten nguoi thue: " << HoTenNguoiThue;
		cout << "\nSo gio thue: " << SoGioThue;
	}
};

// khai báo lớp con: class XEDAP kế thừa lại class XE
class XEDAP : public XE
{
private:
public:

	float TinhTienThueXe()
	{
		return 10000 + ((SoGioThue - 1) * 8000);
	}
};


// khai báo lớp con: class XEMAY kế thừa lại class XE
class XEMAY : public XE
{
private:
	int LoaiXe;
	string BienSo;
public:
	void NhapThongTin()
	{
		XE::NhapThongTin();
		cout << "\nNhap loai xe can thue(100 - 250 phan khoi): ";
		cin >> LoaiXe;
		while (getchar() != '\n');
		cout << "\nNhap bien so: ";
		cin >> BienSo;
	}
	void XuatThongTin()
	{
		XE::XuatThongTin();
		cout << "\nLoai xe: " << LoaiXe;
		cout << "\nBien so: " << BienSo;
	}
	float TinhTienThueXe()
	{
		float s = 0;
		if (LoaiXe == 100)
		{
			s = 150000;
		}
		else
		{
			s = 200000;
		}
		return s + ((SoGioThue - 1) * 100000);
	}

	// GETTER - LOẠI XE
	int Getter_LoaiXe()
	{
		return LoaiXe;
	}
	int Setter_LoaiXe(int LOAIXE)
	{
		LoaiXe = LOAIXE;
	}
};

// phương thức xuất tất cả thông tin thuê xe
void Xuat_Thong_Tin_Thue_Xe(XEDAP ds_xedap[], int m, XEMAY ds_xemay[], int n)
{
	int dem = 1;
	cout << "\n\n\t\t DANH SACH THUE XE DAP\n";
	// xuất danh sách xe đạp
	for (int i = 0; i < m; i++)
	{
		cout << "\n\tTHONG TIN THUE XE DAP THU " << dem++ << endl;
		ds_xedap[i].XuatThongTin();
		cout << "\nTien thue: " << (size_t)ds_xedap->TinhTienThueXe();
		cout << endl;
	}

	dem = 1;
	cout << "\n\n\t\t DANH SACH THUE XE MAY\n";
	// xuất danh sách xe máy
	for (int i = 0; i < n; i++)
	{
		cout << "\n\tTHONG TIN THUE XE MAY THU " << dem++ << endl;
		ds_xemay[i].XuatThongTin();
		cout << "\nTien thue: " << (size_t)ds_xemay->TinhTienThueXe();
		cout << endl;
	}
}

// phương thức tính tổng tiền thuê xe đạp và xe máy
float Tinh_Tong_Tien_Thue_Xe(XEDAP ds_xedap[], int m, XEMAY ds_xemay[], int n)
{
	float sum = 0;
	// duyệt danh sách xe đạp
	for (int i = 0; i < m; i++)
	{
		sum += ds_xedap[i].TinhTienThueXe();
	}

	// duyệt danh sách xe máy
	for (int i = 0; i < n; i++)
	{
		sum += ds_xemay[i].TinhTienThueXe();
	}
	return sum;
}

// hàm quản lý các loại xe
void Menu(XEDAP ds_xedap[], int m, XEMAY ds_xemay[], int n)
{
	int choose;
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t ====== QUAN LY XE ======";
		cout << "\n\t1. Nhap danh sach thue xe dap va xe may";
		cout << "\n\t2. Xuat tat ca thong tin thue xe";
		cout << "\n\t3. Tinh tong so tien cho thue xe dap va xe may";
		cout << "\n\t4. Xuat tat ca cac thong tin lien quan den viec cho thue xe dap";
		cout << "\n\t5. Tinh tong so tien cho thue xe may loai 250 phan khoi";
		cout << "\n\t0. Ket thuc";
		cout << "\n\n\t\t ============== END ============";

		cout << "\nNhap lua chon: ";
		cin >> choose;

		if (choose == 1)
		{
			int chon;
			while (true)
			{
				system("cls");
				cout << "\n1. Thue XE DAP";
				cout << "\n2. Thue XE MAY";
				cout << "\n0. Ket thuc";

				cout << "\nNhap loai xe muon thue: ";
				cin >> chon;

				if (chon == 1)
				{
					XEDAP x;
					cout << "\n\n\t\t NHAP THONG TIN THUE XE DAP\n";
					x.NhapThongTin();
					ds_xedap[m] = x;
					m++;
				}

				else if (chon == 2)
				{
					XEMAY x;
					cout << "\n\n\t\t NHAP THONG TIN THUE XE MAY\n";
					x.NhapThongTin();
					ds_xemay[n] = x;
					n++;
				}
				else
				{
					break;
				}
			}
		}
		else if (choose == 2)
		{
			Xuat_Thong_Tin_Thue_Xe(ds_xedap, m, ds_xemay, n);
			system("pause");
		}
		else if (choose == 3)
		{
			cout << "\n\n\t\tTONG TIEN THUE XE: " << (size_t)Tinh_Tong_Tien_Thue_Xe(ds_xedap, m, ds_xemay, n);
			cout << endl;
			system("pause");
		}
		else if (choose == 4)
		{
			cout << "\n\n\t\t DANH SACH THUE XE DAP\n";
			// xuất danh sách xe đạp
			for (int i = 0; i < m; i++)
			{
				cout << "\n\tTHONG TIN THUE XE DAP THU " << i + 1 << endl;
				ds_xedap[i].XuatThongTin();
				cout << "\nTien Thue: " << (size_t)ds_xedap[i].TinhTienThueXe();
				cout << endl;
			}
			system("pause");
		}
		else if (choose == 5)
		{
			int dem = 1;
			cout << "\n\n\t\t DANH SACH THUE XE MAY LOAI 250 PHAN KHOI\n";
			// duyệt danh sách xe máy
			for (int i = 0; i < n; i++)
			{
				if (ds_xemay[i].Getter_LoaiXe() == 250)
				{
					cout << "\n\tTHONG TIN THUE XE MAY THU " << dem++ << endl;
					ds_xemay[i].XuatThongTin();
					cout << "\n\tTien thue xe: " << (size_t)ds_xemay[i].TinhTienThueXe();
					cout << endl;
				}
			}
			system("pause");
		}
		else
		{
			break;
		}
	}
}

int main()
{
	XEDAP ds_xedap[100];
	int m = 0;
	XEMAY ds_xemay[100];
	int n = 0;
	Menu(ds_xedap, m, ds_xemay, n);
	system("pause");
	return 0;
}