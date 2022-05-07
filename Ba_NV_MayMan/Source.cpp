/*Ở một xóm trọ Ba Con Sâu nọ, có 3 anh chàng từ tỉnh lẻ lên thành phố lập nghiệp. Với một quyết tâm và ý chí
hừng hực, 3 anh đã may mắn được nhận làm việc ở các công ty tầm cỡ quốc gia với các chức danh lần lượt như sau:
NHÂN VIÊN SỬA ỐNG NƯỚC
NHÂN VIÊN GIAO HÀNG
NHÂN VIÊN XE ÔM 4.0
1. Hãy phân tích và mô tả các thông tin cần thiết để quản lý 3 nhân viên trên
2. Tính tiền lương hàng tháng của 3 nhân viên trên
Biết:
NHÂN VIÊN SỬA ỐNG NƯỚC: số giờ sửa x 50000
NHÂN VIÊN GIAO HÀNG: số hàng giao x 33.500
NHÂN VIÊN XE ÔM 4.0: số km x 10000
Sau quá trình khảo sát thị trường và thấy được tiềm năng của các chị em nội trợ về nhu cầu liên hệ các anh
thợ SỬA ỐNG NƯỚC ngày càng tăng, đồng thời dịch vụ GIAO HÀNG ngày càng cao, song song đó
cuộc cách mạng công nghệ 4.0 ngày càng được ứng dụng rộng rãi, và nền kinh tế chia sẻ cũng dần được hình thành
dẫn đến việc các anh XE ÔM 4.0 cũng ăn nên làm ra.
Và điều gì đến cũng đã đến - trời không phụ lòng người, với tất cả niềm đam mê và yêu nghề của mình - 3 anh chàng
tỉnh lẻ ngày nào giờ đã quyết định ngồi lại với nhau để cùng chơi một cuộc chơi lớn hơn, mang tầm cỡ xuyên quốc gia
và cạnh tranh trực tiếp với các ông lớn trên thế giới như Lazada, Alibaba, Amazon, Grab, Go-Viet, JAV...
Công ty Ba Con Sói quyết định thuê thêm nhiều nhân viên nhằm đáp ứng nhu cầu của khách hàng và cụ thể
là không muốn bỏ qua miếng bánh béo bỡ này.
3. Hãy giúp công ty Ba Con Sói viết một ứng dụng quản lý các nhân viên đã đề cập.
4. Tính tổng tiền lương hàng tháng của các nhân viên
5. Thống kê các nhân viên giảm dần theo lương*/

#include<iostream>
using namespace std;
#include<string>

/* ======= KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN SỬA ỐNG NƯỚC =======*/
class NhanVienSuaOngNuoc
{
private:
	string hoten;
	int tuoi;
	string gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	float so_h_sua;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienSuaOngNuoc();
	~NhanVienSuaOngNuoc();
};

// hàm nhập thông tin nhân viên sửa ống nước
void NhanVienSuaOngNuoc::Nhap()
{
	cin.ignore();
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	cin.ignore();
	cout << "\nNhap gioi tinh: ";
	getline(cin, gioi_tinh);
	cout << "\nNhap dia chi: ";
	getline(cin, dia_chi);
	cout << "\nNhap so dien thoai: ";
	getline(cin, sdt);
	cout << "\nNhap chieu cao: ";
	cin >> chieu_cao;
	cout << "\nNhap can nang: ";
	cin >> can_nang;
	cout << "\nNhap so gio sua: ";
	cin >> so_h_sua;
}

// hàm xuất thông tin nhân viên sửa ống nước
void NhanVienSuaOngNuoc::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nTuoi: " << tuoi;
	cout << "\nGioi tinh: " << gioi_tinh;
	cout << "\nDia chi: " << dia_chi;
	cout << "\nSo dien thoai: " << sdt;
	cout << "\nChieu cao: " << chieu_cao;
	cout << "\nCan nang: " << can_nang;
	cout << "\nSo gio sua: " << so_h_sua;
	cout << "\nTien luong: " << (size_t)Tinh_Tien_Luong();
}

// hàm tính tiền lương nhân viên sửa ống nước
float NhanVienSuaOngNuoc::Tinh_Tien_Luong()
{
	return so_h_sua * 50000;
}

// hàm tạo
NhanVienSuaOngNuoc::NhanVienSuaOngNuoc()
{

}
// hàm hủy
NhanVienSuaOngNuoc::~NhanVienSuaOngNuoc()
{

}

/* ======= KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN GIAO HÀNG =======*/
class NhanVienGiaoHang
{
private:
	string hoten;
	int tuoi;
	string gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	int so_hang_giao;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienGiaoHang();
	~NhanVienGiaoHang();
};

// hàm nhập thông tin nhân viên giao hàng
void NhanVienGiaoHang::Nhap()
{
	cin.ignore();
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	cin.ignore();
	cout << "\nNhap gioi tinh: ";
	getline(cin, gioi_tinh);
	cout << "\nNhap dia chi: ";
	getline(cin, dia_chi);
	cout << "\nNhap so dien thoai: ";
	getline(cin, sdt);
	cout << "\nNhap chieu cao: ";
	cin >> chieu_cao;
	cout << "\nNhap can nang: ";
	cin >> can_nang;
	cout << "\nNhap so hang giao: ";
	cin >> so_hang_giao;
}

// hàm xuất thông tin nhân viên giao hàng
void NhanVienGiaoHang::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nTuoi: " << tuoi;
	cout << "\nGioi tinh: " << gioi_tinh;
	cout << "\nDia chi: " << dia_chi;
	cout << "\nSo dien thoai: " << sdt;
	cout << "\nChieu cao: " << chieu_cao;
	cout << "\nCan nang: " << can_nang;
	cout << "\nSo hang giao: " << so_hang_giao;
	cout << "\nTien luong: " << (size_t)Tinh_Tien_Luong();
}

// hàm tính tiền lương nhân viên giao hàng
float NhanVienGiaoHang::Tinh_Tien_Luong()
{
	return so_hang_giao * 33500;
}

// hàm tạo
NhanVienGiaoHang::NhanVienGiaoHang()
{

}

// hàm hủy
NhanVienGiaoHang::~NhanVienGiaoHang()
{

}

/* ======= KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN XE ÔM 4.0 =======*/
class NhanVienXeOmCongNghe
{
private:
	string hoten;
	int tuoi;
	string gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	float so_km;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienXeOmCongNghe();
	~NhanVienXeOmCongNghe();
};

// hàm nhập thông tin nhân viên xe ôm 4.0
void NhanVienXeOmCongNghe::Nhap()
{
	cin.ignore();
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	cin.ignore();
	cout << "\nNhap gioi tinh: ";
	getline(cin, gioi_tinh);
	cout << "\nNhap dia chi: ";
	getline(cin, dia_chi);
	cout << "\nNhap so dien thoai: ";
	getline(cin, sdt);
	cout << "\nNhap chieu cao: ";
	cin >> chieu_cao;
	cout << "\nNhap can nang: ";
	cin >> can_nang;
	cout << "\nNhap so km chay duoc: ";
	cin >> so_km;
}

// hàm xuất thông tin nhân viên xe ôm 4.0
void NhanVienXeOmCongNghe::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nTuoi: " << tuoi;
	cout << "\nGioi tinh: " << gioi_tinh;
	cout << "\nDia chi: " << dia_chi;
	cout << "\nSo dien thoai: " << sdt;
	cout << "\nChieu cao: " << chieu_cao;
	cout << "\nCan nang: " << can_nang;
	cout << "\nSo km chay duoc: " << so_km;
	cout << "\nTien luong: " << (size_t)Tinh_Tien_Luong();
}

// hàm tính tiền lương nhân viên xe ôm
float NhanVienXeOmCongNghe::Tinh_Tien_Luong()
{
	return so_km * 10000;
}

// hàm tạo
NhanVienXeOmCongNghe::NhanVienXeOmCongNghe()
{

}

// hàm hủy
NhanVienXeOmCongNghe::~NhanVienXeOmCongNghe()
{

}

// hàm tính tổng tiền lương của các NHÂN VIÊN SỬA ỐNG NƯỚC
double Tong_tien_nv_suaongnuoc(NhanVienSuaOngNuoc ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += ds[i].Tinh_Tien_Luong();
	}
	return sum;
}

// hàm tính tổng tiền lương của các NHÂN VIÊN GIAO HÀNG
double Tong_tien_nv_giaohang(NhanVienGiaoHang ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += ds[i].Tinh_Tien_Luong();
	}
	return sum;
}

// hàm tính tổng tiền lương của các NHÂN VIÊN XE ÔM CÔNG NGHỆ
double Tong_tien_nv_xeomcn(NhanVienXeOmCongNghe ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += ds[i].Tinh_Tien_Luong();
	}
	return sum;
}

// hàm hoán vị 2 đối tượng NHÂN VIÊN SỬA ỐNG NƯỚC
void Hoan_vi_Suaongnuoc(NhanVienSuaOngNuoc& x, NhanVienSuaOngNuoc& y)
{
	NhanVienSuaOngNuoc tam = x;
	x = y;
	y = tam;
}

// hàm hoán vị 2 đối tượng NHÂN VIÊN GIAO HÀNG
void Hoan_vi_Giaohang(NhanVienGiaoHang& x, NhanVienGiaoHang& y)
{
	NhanVienGiaoHang tam = x;
	x = y;
	y = tam;
}

// hàm hoán vị 2 đối tượng NHÂN VIÊN XE ÔM CÔNG NGHỆ
void Hoan_vi_XeomCN(NhanVienXeOmCongNghe& x, NhanVienXeOmCongNghe& y)
{
	NhanVienXeOmCongNghe tam = x;
	x = y;
	y = tam;
}

// hàm sắp xếp danh sách nhân viên SỬA ỐNG NƯỚC giảm dần theo lương
void Sap_xep_suaongnuoc(NhanVienSuaOngNuoc ds[], int m)
{
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (ds[i].Tinh_Tien_Luong() < ds[j].Tinh_Tien_Luong())
			{
				Hoan_vi_Suaongnuoc(ds[i], ds[j]);
			}
		}
	}
}

// hàm sắp xếp danh sách nhân viên GIAO HÀNG giảm dần theo lương
void Sap_xep_giaohang(NhanVienGiaoHang ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].Tinh_Tien_Luong() < ds[j].Tinh_Tien_Luong())
			{
				Hoan_vi_Giaohang(ds[i], ds[j]);
			}
		}
	}
}

// hàm sắp xếp danh sách nhân viên XE ÔM CÔNG NGHỆ giảm dần theo lương
void Sap_xep_xeomCN(NhanVienXeOmCongNghe ds[], int l)
{
	for (int i = 0; i < l - 1; i++)
	{
		for (int j = i + 1; j < l; j++)
		{
			if (ds[i].Tinh_Tien_Luong() < ds[j].Tinh_Tien_Luong())
			{
				Hoan_vi_XeomCN(ds[i], ds[j]);
			}
		}
	}
}

// thiết kế menu xử lí
void Menu(NhanVienSuaOngNuoc ds_nv_suaongnuoc[], NhanVienGiaoHang ds_nv_giaohang[], NhanVienXeOmCongNghe ds_nv_xeomcn[], int m, int n, int l)
{
	int luachon;
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t ======= CHUONG TRINH QUAN LY ======";
		cout << "\n0. KET THUC";
		cout << "\n1. Nhap thong tin nhan vien SUA ONG NUOC";
		cout << "\n2. Nhap thong tin nhan vien GIAO HANG";
		cout << "\n3. Nhap thong tin nhan vien XE OM CONG NGHE";
		cout << "\n4. Xuat danh sach thong tin nhan vien SUA ONG NUOC";
		cout << "\n5. Xuat danh sach thong tin nhan vien GIAO HANG";
		cout << "\n6. Xuat danh sach thong tin nhan vien XE OM CONG NGHE";
		cout << "\n7. Tong tien luong cua 3 loai nhan vien";
		cout << "\n8. Sap xep danh sach nhan vien giam dan theo luong";

		cout << "\n\n\t\t  =============== END ==============";

		cout << "\nNhap lua chon: ";
		cin >> luachon;

		if (luachon < 0 || luachon > 8)
		{
			cout << "\n\t LUA CHON KHONG HOP LE.XIN KIEM TRA LAI !!!";
		}

		else if (luachon == 0)
		{
			break;
		}
		else if (luachon == 1)
		{
			NhanVienSuaOngNuoc nv_suaongnuoc;
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN SUA ONG NUOC \n";
			nv_suaongnuoc.Nhap();

			// thêm đối tượng giá trị "nv_suaongnuoc" vào danh sách "ds_nv_suaongnuoc"
			ds_nv_suaongnuoc[m] = nv_suaongnuoc;
			m++;
		}

		else if (luachon == 2)
		{
			NhanVienGiaoHang nv_giaohang;
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN GIAO HANG \n";
			nv_giaohang.Nhap();

			// thêm đối tượng giá trị "nv_giaohang" vào danh sách "ds_nv_giaohang"
			ds_nv_giaohang[n] = nv_giaohang;
			n++;
		}

		else if (luachon == 3)
		{
			NhanVienXeOmCongNghe nv_xeomcn;
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN XE OM CONG NGHE \n";
			nv_xeomcn.Nhap();

			// thêm đối tượng giá trị "nv_xeomcn" vào danh sách "ds_nv_xeomcn"
			ds_nv_xeomcn[l] = nv_xeomcn;
			l++;
		}

		else if (luachon == 4)
		{
			cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN SUA ONG NUOC\n";
			for (int i = 0; i < m; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN SUA ONG NUOC THU " << i + 1;
				ds_nv_suaongnuoc[i].Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)Tong_tien_nv_suaongnuoc(ds_nv_suaongnuoc, m);
			cout << endl;
			system("pause");
		}

		else if (luachon == 5)
		{
			cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN GIAO HANG \n";
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN GIAO HANG THU " << i + 1;
				ds_nv_giaohang[i].Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)Tong_tien_nv_giaohang(ds_nv_giaohang, n);
			cout << endl;
			system("pause");
		}

		else if (luachon == 6)
		{
			cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN XE OM CONG NGHE \n";
			for (int i = 0; i < l; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN XE OM CONG NGHE THU " << i + 1;
				ds_nv_xeomcn[i].Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)Tong_tien_nv_xeomcn(ds_nv_xeomcn, l);
			cout << endl;
			system("pause");
		}

		else if (luachon == 7)
		{
			cout << "\n\n\t\t TONG TIEN CONG TY CAN TRA HANG THANG: " << (size_t)(Tong_tien_nv_suaongnuoc(ds_nv_suaongnuoc, m) + Tong_tien_nv_giaohang(ds_nv_giaohang, n) + Tong_tien_nv_xeomcn(ds_nv_xeomcn, l));
			cout << endl;
			system("pause");
		}
		else if (luachon == 8)
		{
			cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN SUA ONG NUOC \n";
			Sap_xep_suaongnuoc(ds_nv_suaongnuoc, m);
			for (int i = 0; i < m; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN SUA ONG NUOC THU " << i + 1;
				ds_nv_suaongnuoc[i].Xuat();
			}
			cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN GIAO HANG \n";
			Sap_xep_giaohang(ds_nv_giaohang, n);
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN GIAO HANG THU " << i + 1;
				ds_nv_giaohang[i].Xuat();
			}
			cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN XE OM CONG NGHE \n";
			Sap_xep_xeomCN(ds_nv_xeomcn, l);
			for (int i = 0; i < l; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN XE OM CONG NGHE THU " << i + 1;
				ds_nv_xeomcn[i].Xuat();
			}
			system("pause");
		}
	}
}

int main()
{
	// tạo ra 3 đối tượng giá trị 
	NhanVienSuaOngNuoc ds_nv_suaongnuoc[100]; // mảng 1 chiều các nhân viên sửa ống nước - mỗi phần tử là một đối tượng giá trị
	NhanVienGiaoHang ds_nv_giaohang[100]; // mảng 1 chiều các nhân viên giao hàng - mỗi phần tử là một đối tượng giá trị
	NhanVienXeOmCongNghe ds_nv_xeomcn[100]; // mảng 1 chiều các nhân viên xe ôm công nghệ - mỗi phần tử là một đối tượng giá trị

	int m = 0; // số lượng nhân viên sửa ống nước
	int n = 0; // số lượng nhân viên giao hàng
	int l = 0; // số lượng nhân viên xe ôm công nghệ

	//NhanVienXeOmCongNghe nv_a; // đối tượng giá trị
	//nv_a.Nhap();

	NhanVienGiaoHang* nv_b = new NhanVienGiaoHang(); // đối tượng con trỏ
	nv_b->Xuat();

	delete nv_b;

	Menu(ds_nv_suaongnuoc, ds_nv_giaohang, ds_nv_xeomcn, m, n, l);
	cout << "\n\n";
	system("pause");
	return 0;
}