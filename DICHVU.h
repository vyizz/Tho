#ifndef DICHVU_H
#define DICHVU_H

#include <string>

class DichVu {
private:
    std::string tenDichVu;
    double gia;

public:
    DichVu(const std::string& ten, double g) 
        : tenDichVu(ten), gia(g) {}

    std::string getTenDichVu() const {
        return tenDichVu;
    }

    double getGia() const {
        return gia;
    }
};

#endif // DICHVU_H
