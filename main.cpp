#include <iostream>
#include "KhachHang.h"
#include "DichVu.h"
#include "HoaDon.h"
#include "SanBong.h"
#include "DichVuNuoc.h"
#include "DichVuGiuXe.h"

using namespace std;

void hienThiDanhSachSan() {
    cout << "Danh sach san:\n";
    cout << "1. San 5 nguoi ( 03 san: 5.1;  5.2;   5.3 )\n";
    cout << "2. San 7 nguoi ( 02 san: 7.1;  7.2;  )\n";
}


void hienThiDanhSachDichVu() {
    cout << "Danh sach dich vu:\n";
    cout << "1. Cho thue san\n";
    cout << "2. Dich vu nuoc\n";
    cout << "3. Dich vu giu xe\n";
}

int main() {
    cout << "CHAO MUNG DEN VOI SAN BONG\n"; 

    hienThiDanhSachSan();

    // Tạo đối tượng dịch vụ nước và hiển thị
    DichVuNuoc dichVuNuoc;
    dichVuNuoc.hienThiDichVuNuoc();

    // Tạo đối tượng dịch vụ giữ xe và hiển thị
    DichVuGiuXe dichVuGiuXe;
    dichVuGiuXe.hienThiDichVuGiuXe();

    // Nhập thông tin khách hàng
    string tenKhachHang, soDienThoai;
    cout << "Nhap ten khach hang: ";
    getline(cin, tenKhachHang);
    cout << "Nhap so dien thoai: ";
    getline(cin, soDienThoai);
    
    KhachHang* khachHang = new KhachHang(tenKhachHang, soDienThoai);

    // Nhập thông tin sân
    string tenSan;
    cout << "Nhap ten san: ";
    getline(cin, tenSan);
    SanBong* sanBong = new SanBong(tenSan);

    // Kiểm tra trạng thái sân
    if (sanBong->isAvailable()) {
        // Đặt sân
        sanBong->datSan();

        // Nhập dịch vụ
        string tenDichVu;
        cout << "Nhap ten dich vu: ";
        getline(cin, tenDichVu);
        
        DichVu* dichVu = new DichVu(tenDichVu, 0.0); // Giá sẽ được tính sau

        // Nhập số lượng nước
        double soLuongNuoc[4] = {0};
        cout << "Nhap so luong nuoc:\n";
        for (int i = 0; i < 4; ++i) {
            cout << "Nhap so luong " << dichVuNuoc.getTenNuoc(i) << ": ";
            cin >> soLuongNuoc[i];
        }

        // Nhập dịch vụ giữ xe
        int soLuongXeMay, soLuongXeOto;
        cout << "Nhap so luong xe may: ";
        cin >> soLuongXeMay;
        cout << "Nhap so luong xe o to: ";
        cin >> soLuongXeOto;

        // Tạo hóa đơn
        HoaDon* hoaDon = new HoaDon(khachHang, dichVu, sanBong, 
                                     &dichVuNuoc, &dichVuGiuXe, 
                                     soLuongNuoc, soLuongXeMay, soLuongXeOto);
        
        // Hiển thị thông tin
        hoaDon->hienThiThongTin();

        // Giải phóng bộ nhớ
        delete hoaDon;
        delete dichVu;  // Chỉ xóa sau khi hiển thị thông tin
    } else {
        cout << "San da dat!" << endl;
    }

    // Giải phóng bộ nhớ
    delete khachHang;
    delete sanBong;

    return 0;
}
