#pragma once
#include <iostream>
#include <string>
#include "CDocGia.h"
using namespace std;

// lớp con CDocGiaTreEm kế thừa lại lớp cha CDocGia
class CDocGiaTreEm : public CDocGia
{
private:
	string nguoidaidien;
public:
	void Input();
	void Output();
	int Tinh_Tien_Lam_The(); // phương thức tính tiền làm thẻ của độc giả trẻ em

	CDocGiaTreEm();
	~CDocGiaTreEm();
};
