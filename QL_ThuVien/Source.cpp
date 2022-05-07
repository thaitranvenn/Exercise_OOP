/* ============ TÍNH KẾ THỪA ============
KẾ THỪA LÀ GÌ ?
-Sự trao đổi thông tin từ thế hệ này sang thế hệ khác
<=> sự trao đổi thông tin từ lớp A sang lớp B
- Lớp cha mà có lớp con kế thừa lại thì các thuộc tính của lớp cha sẽ để ở tầm vực PROTECTED
+ protected: Khi ta khai báo các thuộc tính hay phương thức với từ khóa này thì nó sẽ có phạm vi hoạt động bên trong lớp đó và ở các lớp con kế thừa từ nó

	==> KẾ THỪA LÀ CHÚNG TA SẼ ĐI KIẾM NHỮNG CÁI GÌ "CHUNG" - SAU ĐÓ ĐEM NHỮNG CÁI " CHUNG " ĐÓ RA TẠO THÀNH 1 CÁI CLASS(LỚP)
	==> CLASS CHA

	- Khi 1 lớp con kế thừa từ lớp cha ==> thằng cha có cái gì thì thằng con cũng có cái đó

	LỢI ÍCH KHI DÙNG KẾ THỪA
	- Tránh tình trạng dư thừa dữ liệu

	================== BÀI TẬP KẾ THỪA ==================
	- Thư viện X tiến hành cho đăng kí làm thẻ độc giả.Thông tin độc giả gồm :
+Họ tên
+ Ngày lập thẻ
+ Số tháng có hiệu lực của thẻ
- Có 2 loại độc giả : trẻ em và người lớn
+ Độc giả trẻ em cần lưu thêm thông tin họ tên người đại diện.
Tiền làm thẻ tính theo công thức : số tháng có hiệu lực * 5.000 VND
+ Độc giả người lớn cần lưu thêm thông tin số CMND.
Tiền làm thẻ tính theo công thức : số tháng có hiệu lực * 10.000 VND

== = Yêu cầu == =
1. Hãy cài đặt các lớp đại diện cho các loại thẻ độc giả trên để :
+Quản lí thông tin thẻ
+ Tính tiền làm thẻ của một thẻ độc giả
Hãy cài đặt lớp CThuVien để quản lí danh sách các thẻ độc giả trong thư viện, với các chức năng sau :
+Nhập, xuất danh sách các thẻ độc giả
+ Tính tổng tiền làm thẻ */

#include "CThuVien.h"
using namespace std;

int main()
{
	CThuVien* x = new CThuVien;
	x->Input();
	x->Output();
	cout << "\n\n\t TONG TIEN LAM THE: " << x->Tinh_Tong_Tien_Lam_The() << endl;
	delete x;
	system("pause");
	return 0;
}