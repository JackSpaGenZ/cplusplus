#include <iostream>  
using namespace std;  
class NhanVien { 
    int msnv;    
    string ten;
    int tuoi;
    public:  
       NhanVien(int m) {    
            msnv = m;
       }
       NhanVien(int m, string tn) {    
            msnv = m;    
            ten = tn;
            tuoi = 20;
       }
       NhanVien(int m, string tn, int t) {    
            msnv = m;    
            ten = tn;    
            tuoi = t; 
       }    
       void HienThi() {    
            cout << ten << endl;
            cout << "   Ma so nhan vien: " << msnv << endl;
            cout << "   Tuoi: " << tuoi << endl;
       }    
};  
  
int main() {  
    NhanVien n1 =  NhanVien(111231, "Nguyen Van A", 25);    
    NhanVien n2 =  NhanVien(213214, "Nguyen Van B");
    NhanVien n3 =  NhanVien(213215);
    n1.HienThi();    
    n2.HienThi();
    n3.HienThi();
    return 0;  
}