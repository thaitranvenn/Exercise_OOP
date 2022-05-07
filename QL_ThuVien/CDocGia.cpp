#include "CDocGia.h"
// <Kiểu dữ liệu> <Tên lớp> :: <Thuộc tính hay phương thức cần gọi ra>

// Phương thức nhập thông tin độc giả
void CDocGia::Input()
{
	cin.ignore(); // xoá bộ nhớ đệm
	cout << "\nNhap ho ten doc gia: ";
	getline(cin, hoten);

	fflush(stdin);
	cout << "\nNhap ngay lap the(dd/mm/yyyy): ";
	getline(cin, ngaylapthe);

	cout << "\nNhap so thang co hieu luc: ";
	cin >> sothanghieuluc;
}

// Phương thức xuất thông tin độc giả
void CDocGia::Output()
{
	cout << "\nHo ten doc gia: " << hoten;
	cout << "\nNgay lap the(dd/mm/yyyy): " << ngaylapthe;
	cout << "\nSo thang co hieu luc: " << sothanghieuluc << endl;
}

CDocGia::CDocGia()
{

}

CDocGia::~CDocGia()
{

}