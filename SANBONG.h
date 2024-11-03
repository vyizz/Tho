#ifndef SANBONG_H
#define SANBONG_H

#include <string>

class SanBong {
public:
    enum TinhTrang { TRONG, DA_DAT };
    
private:
    std::string tenSan;
    TinhTrang trangThai;

public:
    SanBong(const std::string& ten) 
        : tenSan(ten), trangThai(TRONG) {}

    std::string getTenSan() const {
        return tenSan;
    }

    TinhTrang getTrangThai() const {
        return trangThai;
    }

    void datSan() {
        trangThai = DA_DAT;
    }

    bool isAvailable() const {
        return trangThai == TRONG;
    }
};

#endif // SANBONG_H
