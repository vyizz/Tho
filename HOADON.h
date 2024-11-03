#ifndef HOADON_H
#define HOADON_H

#include "KhachHang.h"
#include "DichVu.h"
#include "SanBong.h"
#include "DichVuNuoc.h"
#include "DichVuGiuXe.h"
#include <iostream>

class HoaDon {
private:
    KhachHang* khachHang;
    DichVu* dichVu;
    SanBong* sanBong;
    DichVuNuoc* dichVuNuoc;
    DichVuGiuXe* dichVuGiuXe;
    double soLuongNuoc[4];
    int soLuongXeMay;
    int soLuongXeOto;

public:
    HoaDon(KhachHang* kh, DichVu* dv, SanBong* sb, 
           DichVuNuoc* dvNuoc, DichVuGiuXe* dvGiuXe, 
           double* slNuoc, int slXeMay, int slXeOto) 
        : khachHang(kh), dichVu(dv), sanBong(sb), 
          dichVuNuoc(dvNuoc), dichVuGiuXe(dvGiuXe), 
          soLuongXeMay(slXeMay), soLuongXeOto(slXeOto) {
        for (int i = 0; i < 4; ++i) {
            soLuongNuoc[i] = slNuoc[i];
        }
    }

    double tinhTongTien() const {
        double tongTien = dichVu->getGia();

        for (int i = 0; i < 4; ++i) {
            tongTien += dichVuNuoc->getGiaNuoc(i) * soLuongNuoc[i];
        }

        tongTien += dichVuGiuXe->getGiaGiuXe(DichVuGiuXe::XE_MAY) * soLuongXeMay;
        tongTien += dichVuGiuXe->getGiaGiuXe(DichVuGiuXe::XE_OTO) * soLuongXeOto;

        return tongTien;
    }

    void hienThiThongTin() const {
        std::cout << "Khach hang: " << khachHang->getTen() << " (" 
                  << khachHang->getSoDienThoai() << ")" << std::endl;
        std::cout << "Dich vu: " << dichVu->getTenDichVu() << std::endl;
        std::cout << "San: " << sanBong->getTenSan() << std::endl;

        for (int i = 0; i < 4; ++i) {
            if (soLuongNuoc[i] > 0) {
                std::cout << "Nuoc " << dichVuNuoc->getTenNuoc(i) << ": " << soLuongNuoc[i] << " chai" << std::endl;
            }
        }

        std::cout << "Xe may: " << soLuongXeMay << " xe" << std::endl;
        std::cout << "Xe o to: " << soLuongXeOto << " xe" << std::endl;
        std::cout << "Tong tien: " << tinhTongTien() << " VND" << std::endl;
    }
};

#endif // HOADON_H
