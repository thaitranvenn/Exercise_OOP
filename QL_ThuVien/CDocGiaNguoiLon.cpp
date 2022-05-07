#include "CDocGiaNguoiLon.h"

// phương thức nhập thông tin độc giả trẻ em
void CDocGiaNguoiLon::Input()
{
	// Gọi lại phương thức nhập thông tin độc giả của lớp cha CDocGia
	CDocGia::Input(); // Nhập các thông tin chung
	cin.ignore();
	cout << "\nNhap CMND: ";
	getline(cin, CMND);
}

// phương thức xuất thông tin độc giả người lớn
void CDocGiaNguoiLon::Output()
{
	CDocGia::Output(); // Xuất các thông tin chung
	cout << "Thong tin CMND: " << CMND << endl;
}

// phương thức tính tiền làm thẻ của độc giả trẻ em
int CDocGiaNguoiLon::Tinh_Tien_Lam_The()
{
	return sothanghieuluc * 10000;
}

CDocGiaNguoiLon::CDocGiaNguoiLon()
{

}

CDocGiaNguoiLon::~CDocGiaNguoiLon()
{

}