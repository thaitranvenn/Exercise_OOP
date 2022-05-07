#pragma once
#include <iostream>
#include <string>
#include "CDocGia.h"
using namespace std;

// lớp con CDocGiaNguoiLon kế thừa lại lớp cha CDocGia
class CDocGiaNguoiLon : public CDocGia
{
private:
	string CMND;
public:
	void Input();
	void Output();
	int Tinh_Tien_Lam_The();

	CDocGiaNguoiLon();
	~CDocGiaNguoiLon();
};