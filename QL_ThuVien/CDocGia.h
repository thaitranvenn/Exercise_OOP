#pragma once // tránh trình trạng đụng độ thư viện - trong mọi trường hợp chỉ có 1 thư viện được tạo ra ở tất cả các file

#include <iostream>
#include <string>
using namespace std;

// Lớp cha
class CDocGia
{
protected:
	string hoten;
	string ngaylapthe;
	int sothanghieuluc; // dd/mm/yyyy
	bool KT; // true: độc giả trẻ em, false: độc giả người lớn

public:
	virtual void Input(); // phương thức ảo để nhập thông tin độc giả
	virtual void Output(); // phương thức ảo để xuất thông tin độc giả
	virtual int Tinh_Tien_Lam_The() = 0; // phương thức thuần ảo - các lớp con kế thừa sẽ đi định nghĩa

	/* GETTER_SETTER KT*/
	// Trả về dữ liệu
	bool Getter_KT()
	{
		return KT;
	}
	// Cập nhật dữ liệu
	bool Setter_KT(bool kt)
	{
		KT = kt;
		return kt;
	}

	CDocGia();
	~CDocGia();
};