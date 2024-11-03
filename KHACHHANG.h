#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <string>

class KhachHang : public Person {
private:
    std::string ten;          // Tên khách hàng
    std::string soDienThoai; // Số điện thoại

public:
    // Constructor
    KhachHang(const std::string& t, const std::string& sdt);

    // Getter for name
    std::string getTen() const;

    // Getter for phone number
    std::string getSoDienThoai() const;
};

#endif // KHACHHANG_H
