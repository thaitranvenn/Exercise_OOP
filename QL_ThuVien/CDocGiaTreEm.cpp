#include "CDocGiaTreEm.h"

// phương thức nhập thông tin độc giả trẻ em
void CDocGiaTreEm::Input()
{
	// Gọi lại phương thức nhập thông tin độc giả của lớp cha CDocGia
	CDocGia::Input(); // Nhập các thông tin chung
	cin.ignore();
	cout << "\nNhap thong tin nguoi dai dien: ";
	getline(cin, nguoidaidien);

}

// phương thức xuất thông tin độc giả trẻ em
void CDocGiaTreEm::Output()
{
	CDocGia::Output(); // Xuất các thông tin chung
	cout << "Thong tin nguoi dai dien: " << nguoidaidien << endl;;
}

// phương thức tính tiền làm thẻ của độc giả trẻ em
int CDocGiaTreEm::Tinh_Tien_Lam_The()
{
	return sothanghieuluc * 5000;
}

CDocGiaTreEm::CDocGiaTreEm()
{

}

CDocGiaTreEm::~CDocGiaTreEm()
{

}