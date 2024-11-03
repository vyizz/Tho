#ifndef THOIGIANTHUE_H
#define THOIGIANTHUE_H

class ThoiGianThue {
private:
    int gioBatDau;
    int gioKetThuc;

public:
    ThoiGianThue(int batDau, int ketThuc) 
        : gioBatDau(batDau), gioKetThuc(ketThuc) {}

    int getGioBatDau() const {
        return gioBatDau;
    }

    int getGioKetThuc() const {
        return gioKetThuc;
    }
};

#endif // THOIGIANTHUE_H
