#ifndef DICHVUNUOC_H
#define DICHVUNUOC_H

#include <iostream>
#include <string>

class DichVuNuoc {
public:
    enum LoaiNuoc { KHOANG_NGOT, LAT, REVIVE, SUOI };
    
private:
    const double giaNuoc[4] = { 10.0, 10.0, 13.0, 8.0 };
    const std::string tenNuoc[4] = { "Khoang ngot", "Khoang lat", "Revive", "Suoi" };

public:
    void hienThiDichVuNuoc() const {
        std::cout << "Danh sach dich vu nuoc:\n";
        std::cout << "------------------------------------\n";
        std::cout << "Ten nuoc            | Gia (k/chai)\n";
        std::cout << "------------------------------------\n";
        for (int i = 0; i < 4; ++i) {
            std::cout << tenNuoc[i] << "                | " << giaNuoc[i] << "\n";
        }
        std::cout << "------------------------------------\n";
    }

    double getGiaNuoc(int index) const {
        return giaNuoc[index];
    }

    std::string getTenNuoc(int index) const {
        return tenNuoc[index];
    }
};

#endif // DICHVUNUOC_H
