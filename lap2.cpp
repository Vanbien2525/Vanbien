// Vong lap

#include <iostream>
#include <cmath>
using namespace std;

// Nhap so nguyen, tinh tong cac chu so
int tinhTong(int n) {
    int tong = 0;
    while(n != 0){
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

// Thap phan sang nhi phan
void doiNhiPhan(int n) {
    int du[100];
    int i = 0;
    while (n != 0) {
        du[i] = n % 2;
        n /= 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        cout << du[j];
    }
    cout << endl;
}

// Kiem tra Palindrome
bool Palindrome(int n) {
    if (n < 0) return false;

    int soNhapVao = n;
    int daoNguoc = 0;

    while(n != 0){
        int soCuoi = n % 10;
        daoNguoc = daoNguoc * 10 + soCuoi;
        n /= 10;
    }
    return soNhapVao == daoNguoc;
}

// Kiem tra Armstrong
bool Armstrong(int n){
//  int soNhapVao = n; bỏ
    int soChuSo = 0;
    int tam = n;
    while(tam != 0){
        soChuSo++;
        tam /= 10;
    }
 
    int tong = 0;
    tam = n;
    while(tam != 0){
        int soCuoi = tam % 10;
        tong += pow(soCuoi, soChuSo);
        tam /= 10;
    }

    return tong == n;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong cac chu so cua " << n << " la: " << tinhTong(n) << endl;

    int a;
    cout << "\nNhap so thap phan: ";
    cin >> a;
    cout << "So nhi phan cua " << a << " la: ";
    doiNhiPhan(a);

    int soCanKtra;
    cout << "\nNhap so can kiem tra: ";
    cin >> soCanKtra;
    if (Palindrome(soCanKtra)) {
        cout << "la so Palindrome"<<endl;
    } else {
        cout << "khong phai la so Palindrome"<<endl;
    }

    int soCanKtraArms;
    cout<<"\nNhap so can kiem tra: ";
    cin>>soCanKtraArms;
    if(Armstrong(soCanKtraArms)){
        cout<<"la so Armstrong"<<endl;
    }
    else{
        cout<<"khong phai la so Armstrong"<<endl;
    }
    return 0;
}