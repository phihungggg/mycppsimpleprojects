#include <iostream>
#include <string>
using namespace std;

string layChuCaiCuoiCung(const string& ten) {
    size_t viTriDauCachCuoi = ten.find_last_of(' ');
    if (viTriDauCachCuoi != string::npos) {
        // Lấy phần sau dấu cách cuối cùng
        return ten.substr(viTriDauCachCuoi + 1);
    } else {
        // Nếu không có dấu cách, trả về toàn bộ chuỗi
        return ten;
    }
}

int main() {
    // Ví dụ sử dụng hàm
    string ten1 = "Nguyen Phi Hung";
    string ten2 = "Vai cau noi co khien nguoi thay doi";

    cout << "Chu cuoi cung cua " << ten1 << ": " << layChuCaiCuoiCung(ten1) << endl;
    cout << "Chu cuoi cung cua " << ten2 << ": " << layChuCaiCuoiCung(ten2) << endl;

    return 0;
}
