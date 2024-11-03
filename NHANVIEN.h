#ifndef NHANVIEN_H
#define NHANVIEN_H

#include "PERSON.h"

class NhanVien : public Person {
private:
    std::string manv;     // Mã nhân viên
    std::string chucVu;   // Chức vụ
    double luong;         // Lương

public:
    // Constructor
    NhanVien(const std::string& t, const std::string& sdt, const std::string& manv, const std::string& cv, double l);

    // Getter for employee ID
    std::string getMaNV() const;

    // Getter for position
    std::string getChucVu() const;

    // Getter for salary
    double getLuong() const;

    // Method to display employee information
    void hienThiThongTin() const;
};

#endif // NHANVIEN_H
