#ifndef DICHVUGIUXE_H
#define DICHVUGIUXE_H

#include <iostream>
#include <string>

class DichVuGiuXe {
public:
    enum LoaiXe { XE_MAY, XE_OTO };
    
private:
    const double giaGiuXe[2] = { 5.0, 10.0 }; // Giá cho xe máy và ô tô

public:
    void hienThiDichVuGiuXe() const {
        std::cout << "Danh sach dich vu giu xe:\n";
        std::cout << "------------------------------------\n";
        std::cout << "Loai xe            | Gia (k/xe)\n";
        std::cout << "------------------------------------\n";
        std::cout << "Xe may             | " << giaGiuXe[XE_MAY] << "\n";
        std::cout << "Xe o to            | " << giaGiuXe[XE_OTO] << "\n";
        std::cout << "------------------------------------\n";
    }

    double getGiaGiuXe(LoaiXe loai) const {
        return giaGiuXe[loai];
    }
};

#endif // DICHVUGIUXE_H
