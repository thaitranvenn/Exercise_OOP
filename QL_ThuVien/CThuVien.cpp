#include "CThuVien.h"

// Phương thức nhập thông tin các loại độc giả
void CThuVien::Input()
{

	int choose;
	while (true)
	{
		system("cls"); // xóa hết các thứ có trong màn hình console trước cái lệnh này
		cout << "\n\n\t\t =============== THU VIEN X ===============";
		cout << "\n\t 1. Doc gia tre em";
		cout << "\n\t 2. Doc gia nguoi lon";
		cout << "\n\t 0. Thoat";
		cout << "\n\n\t\t =================== END ==================";

		cout << "\n\tNhap lua chon:	";
		cin >> choose;
		CDocGia* x; // khai báo con trỏ lớp cha

		if (choose == 1)
		{
			x = new CDocGiaTreEm; // dùng thằng cha new ra 1 đối tượng con - CDocGiaTreEm
			cout << "\n\n\t\t NHAP THONG TIN DOC GIA\n";
			x->Input();
			x->Setter_KT(true); // đánh dấu cái thằng này là độc giả trẻ em
			ds_docgia.push_back(x); // thêm 1 đối tượng con vào mảng độc giả
		}
		else if (choose == 2)
		{
			x = new CDocGiaNguoiLon; // dùng thằng cha new ra 1 đối tượng con - CDocGiaTreEm
			cout << "\n\n\t\t NHAP THONG TIN DOC GIA\n";
			x->Input();
			x->Setter_KT(false); // đánh dấu thằng này là độc giả người lớn
			ds_docgia.push_back(x); // thêm 1 đối tượng con vào mảng độc giả
		}
		else if (choose == 0)
		{
			break;
		}
		else
		{
			cout << "\nLua chon khong hop le.Xin kiem tra lai!!!" << endl;
			system("pause");
		}
	}
}

// Phương thức xuất thông tin các loại độc giả
void CThuVien::Output()
{
	cout << "\n\n\t\t======= DANH SACH DOC GIA  =======";
	// Xuất danh sách thông tin độc giả
	for (int i = 0; i < ds_docgia.size(); i++)
	{
		if (ds_docgia[i]->Getter_KT() == true)
		{
			cout << "\n\n\t\t THONG TIN DOC GIA TRE EM THU " << i + 1;
			ds_docgia[i]->Output(); // xuất ra thông tin độc giả thứ i
		}
		else
		{
			cout << "\n\n\t\t THONG TIN DOC GIA NGUOI LON THU " << i + 1;
			ds_docgia[i]->Output(); // xuất ra thông tin độc giả thứ i
		}
	}
}

// phương thức tính tổng tiền làm thẻ
int CThuVien::Tinh_Tong_Tien_Lam_The()
{
	float sum = 0;
	// duyệt danh sách độc giả
	for (int i = 0; i < ds_docgia.size(); i++)
	{
		sum += ds_docgia[i]->Tinh_Tien_Lam_The();
	}
	return sum;
}

CThuVien::CThuVien()
{

}

CThuVien::~CThuVien()
{

}