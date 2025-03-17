//lab4 de quy
#include <iostream>
using namespace std;

//1.vi trung nhan doi
long long viTrung(int n){
    if(n == 0) return 2;
    else return 2 * viTrung(n - 1);
}

//2.lai kep
double laiKep(int nam = 30, int soTien = 1000, double laiSuat = 0.12){
    if(nam == 0) return soTien;
    else return laiKep(nam -1, soTien, laiSuat) * (1 + laiSuat);
}
//3.Thap Ha Noi
void hanoi(int n, char A, char C, char B) {
    if (n == 1) {
        cout << "Chuyen dia 1 tu " << A << " -> " << C << endl;
        return;
    }
    hanoi(n - 1, A, B, C); // Bước 1: Chuyển n-1 đĩa từ A sang B

    // Thực hiện di chuyển đĩa lớn nhất
    cout << "Chuyen dia " << n << " tu " << A << " -> " << C << endl;
     
    hanoi(n - 1, B, C, A); // Bước 3: Chuyển n-1 đĩa từ B sang C
}
//4. in so dao nguoc
void daoNguoc(int n){
    if(n == 0) return;
    else cout<<n % 10;
    daoNguoc(n / 10);
}
//5. dem so luong chu so 
int demChuSo(int n) {
    if (n < 10) return 1;
    return 1 + demChuSo(n / 10);
}
//6.Hãy đếm số lượng chữ số lẻ của số nguyên dương n
int demChuSoLe(int n) {
    if (n < 10) return (n % 2 != 0) ? 1 : 0; // Điều kiện dừng
    return ((n % 10) % 2 != 0 ? 1 : 0) + demChuSoLe(n / 10);
}
//7.Tìm chữ số có giá trị lớn nhất của số nguyên dương n
int chuSoMax(int n) {
    if (n < 10) return n;
    int max = chuSoMax(n / 10);
    return (n % 10 > max) ? n % 10 : max;
}
//8.Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay khong
bool toanChuSoChan(int n) {
    if (n < 10) return (n % 2 == 0);
    return (n % 2 == 0) && toanChuSoChan(n / 10);
}
//9.Tìm giá trị nguyên logarit cơ số 2 của n
int log2Nguyen(int n) {
    if (n < 2) return 0;
    return 1 + log2Nguyen(n / 2);
}
//10.Tìm ước số chung lớn nhất của 2 số nguyên a, b.
int ucln(int a, int b) {
    if (a == 0 || b == 0) return a + b;
    return ucln(b, a % b);
}
//11.Tìm chữ số đầu tiên của số nguyên dương n
int chuSoDau(int n) {
    if (n < 10) return n;
    return chuSoDau(n / 10);
}
//12.Viết hàm đệ quy xác định chiều dài chuỗi.
int chieuDai(char *s) {
    if (*s == '\0') return 0;
    return 1 + chieuDai(s + 1);
}
//13.Viết hàm đệ quy tính C(n, k)
int C(int n, int k) {
    if (k == 0 || k == n) return 1;
    return C(n - 1, k - 1) + C(n - 1, k);
}
int main(){
    //1
    int n;
    cout<<"Nhap so gio: ";
    cin>>n;
    cout<<"Tong so luong vi trung la: " << viTrung(n) << endl;

    //2
    cout<<"\nSo tien sau 30 nam la: " << laiKep() << endl;

    //3
    int dia;
    cout<<"\nNhap so dia: ";
    cin>>dia;
    hanoi(dia, 'A', 'C', 'B');

    //4
    int num;
    cout << "\nNhap so nguyen duong: ";
    cin >> num;
    cout << "So dao nguoc la: ";
    daoNguoc(num);
    cout << endl;

    //5
    int so;
    cout << "\nNhap so nguyen duong: ";
    cin >> so;
    cout << "So chu so cua " << so << " la: " << demChuSo(so) << endl;

    //6
    int so1;
    cout << "\nNhap so nguyen duong: ";
    cin >> so1;
    cout << "So chu so le cua " << so1 << " la: " << demChuSoLe(so1) << endl;

    //7
    int so2;
    cout << "\nNhap so nguyen duong: ";
    cin >> so2;
    cout << "Chu so lon nhat cua " << so2 << " la: " << chuSoMax(so2) << endl;

    //8
    int so3;
    cout<<"\nNhap so toan chu so chan: ";
    cin>>so3;
    if(toanChuSoChan(so3)) cout<<"Toan chu so chan"<<endl;
    else cout<<"Khong toan chu so chan"<<endl;

    //9.Tìm giá trị nguyên logarit cơ số 2 của n
    int so4;
    cout<<"\nNhap so nguyen duong: ";
    cin>>so4;
    cout<<"Gia tri nguyen cua logarit co so 2 cua "<<so4<<" la: "<<log2Nguyen(so4)<<endl;

    //10
    int a, b;
    cout<<"\nNhap a: ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    cout<<"Uoc so chung lon nhat cua "<<a<<" va "<<b<<" la: "<<ucln(a, b)<<endl;

    //11
    int so5;
    cout<<"\nNhap so nguyen duong: ";
    cin>>so5;
    cout<<"Chu so dau tien cua "<<so5<<" la: "<<chuSoDau(so5)<<endl;

    //12
    char s[] = "Hello";
    cout<<"\nChieu dai cua chuoi la: "<<chieuDai(s)<<endl;

    //13
    int n1, k;
    cout<<"\nNhap n: ";
    cin>>n1;
    cout<<"Nhap k: ";
    cin>>k;
    cout<<"C("<<n1<<", "<<k<<") = "<<C(n1, k)<<endl;
    return 0;
}