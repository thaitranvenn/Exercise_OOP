#pragma once
#include "CDocGiaNguoiLon.h"
#include "CDocGiaTreEm.h"
#include <vector>

class CThuVien
{
private:
	vector<CDocGia*> ds_docgia; // khai báo mảng 1 chiều chứa lớp cha - vì do có virtual nên nó sẽ đa hình được từng thằng con tương ứng

public:
	void Input();
	void Output();
	int Tinh_Tong_Tien_Lam_The();

	CThuVien();
	~CThuVien();
};