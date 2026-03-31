
def tinh_tong(danh_sach):
    """
    Hàm tính tổng các số trong danh sách.
    """
    tong = 0
    for so in danh_sach:
        tong += so
    return tong

# Ví dụ sử dụng
if __name__ == "__main__":
    try:
        so_luong = int(input("Nhập số lượng số: "))
        danh_sach_so = []
        for i in range(so_luong):
            while True:
                try:
                    so = float(input(f"Nhập số thứ {i+1}: "))
                    danh_sach_so.append(so)
                    break
                except ValueError:
                    print("Vui lòng nhập một số hợp lệ.")
        
        ket_qua = tinh_tong(danh_sach_so)
        print(f"Tổng của các số là: {ket_qua}")
    except ValueError:
        print("Số lượng phải là số nguyên.")