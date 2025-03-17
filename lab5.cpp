// Lab5: Mang 1 chieu

#include <iostream>
#include <random>
#include <ctime>
#include <algorithm>
#include <set>
#include <cstdlib>
using namespace std;


bool laSoNguyenTo(int n) {
    if (n < 2) return false; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false; 
    }
    return true;
}

int main(){
    cout <<"chon bai tap: ";
    int baiTap;
    cin >> baiTap;
    switch (baiTap)
    {
        case 1: { // tao mang so nguyen
            int a [5] = {1, 2, 3, 4, 5};
            int* b = new int[5];
            delete[] b;
            break;
        }
        case 2: { // Nhap du lieu
            //Nhap tu ban phim
            cout << "Nhap so phan tu: ";
            int c;
            cin >> c;
            int mangA[c];
            for(int i = 0; i < c; i++){
                cout << "Nhap a["<<i<<"] = ";
                cin >> mangA[i];
            }
            //lay so ngau nhien
            srand(time(0));
            int mangB[c];
            for(int i = 0; i < c; i++){
                mangB[i] = rand() % 10;
            }
            //sau khi nhập xong, mảng đã được sắp xếp tăng dần.
            sort(mangA, mangA + c);
            //tao mang tu day so nguyen
            int soNguyen;
            cout << "Nhap so nguyen: ";
            cin >> soNguyen;
            int soLuongSo = 0;
            int tam = soNguyen;
            while(tam > 0){
                soLuongSo++;
                tam /= 10;
            }
            int mangC[soLuongSo];
            for(int i = soLuongSo - 1; i >= 0; i--){
                mangC[i] = soNguyen % 10;
                soNguyen /= 10;
            }
            break;
        }
        case 3: { // in mang
            cout << "Nhap so phan tu: ";
            int c;
            cin >> c;
            int mangA[c];
            for (int i = 0; i < c; i++) {
                cout << "Nhap a[" << i << "] = ";
                cin >> mangA[i];
            }
            // In các số chẵn
            cout << "Cac so chan: ";
            for (int i = 0; i < c; i++) {
                if (mangA[i] != 0 && mangA[i] % 2 == 0) {
                    cout << mangA[i] << " ";
                }
            }
            // In các số lẻ
            cout << "\nCac so le: ";
            for (int i = 0; i < c; i++) {
                if (mangA[i] % 2 != 0) {
                    cout << mangA[i] << " ";
                }
            }
            // In các số bằng 0
            cout << "\nCac so bang 0: ";
            for (int i = 0; i < c; i++) {
                if (mangA[i] == 0) {
                    cout << mangA[i] << " ";
                }
            }
            cout << endl;
            //in số 0 --> âm -> dương
            cout<< "So am: ";
            for(int i = 0; i < c; i++){
                if(mangA[i] < 0){
                    cout << mangA[i] << " ";
                }
            }
            cout << "\nSo Duong: ";
            for(int i = 0; i < c; i++){
                if(mangA[i] > 0){
                    cout << mangA[i] << " ";
                }
            }
            break;
        }
        case 4: { //Với mảng tĩnh, tìm kiếm theo điều kiện: Tìm tất cả số âm, tìm số lớn nhất, tìm số chẵn, tìm số nguyên tố
            cout << "Nhap so phan tu: ";
            int c;
            cin >> c;
            int mangA[c];
            for (int i = 0; i < c; i++) {
                cout << "Nhap a[" << i << "] = ";
                cin >> mangA[i];
            }
            // tim tat ca so am
            cout << "Cac so am: ";
            for (int i = 0; i < c; i++) {
                if (mangA[i] < 0) {
                    cout << mangA[i] << " ";
                }
            }
            // tim so lon nhat
            int max = mangA[0];
            for (int i = 1; i < c; i++) {
                if (mangA[i] > max) {
                    max = mangA[i];
                }
            }
            cout << "\nSo lon nhat: " << max;
            // tim so chan
            cout << "\nCac so chan: ";
            for (int i = 0; i < c; i++) {
                if (mangA[i] % 2 == 0) {
                    cout << mangA[i] << " ";
                }
            }
            // tim so nguyen to
            cout << "\nCac so nguyen to: ";
            for (int i = 0; i < c; i++) {
                if (laSoNguyenTo(mangA[i])) {
                    cout << mangA[i] << " ";
                }
            }
            break;
        }
        case 5:{ //Chèn, xóa phần tử trong mảng
            cout << "Nhap so phan tu: ";
            int c;
            cin >> c;
            int mangA[c];
            for(int i = 0; i < c; i++){
                cout << "Nhap a["<<i<<"] = ";
                cin >> mangA[i];
            }
            int k;
            cout << "Nhap vi tri can xoa: ";
            cin >> k;
            if (k < 0 || k >= c) {
                cout << "Vi tri xoa khong hop le!" << endl;
                break;
            }
            for(int i = k; i < c - 1; i++){
                mangA[i] = mangA[i + 1];
            }
            c--;
            // set<int> uniqueElements(mangA, mangA + c);
            for(int i = 0; i< c; i++){
                for(int j = i + 1; j < c; j++){
                    if(mangA[i] == mangA[j]){
                        for(int k = j; k < c - 1; k++){
                            mangA[k] = mangA[k + 1];
                        }
                        c--;
                        j--;
                    }
                }
            }
            for(int i = 0; i < c; i++){
                cout << mangA[i] << " ";
            }
            // cout << "Mang sau khi tia bot phan tu trung lap: ";
            // for (int x : uniqueElements) {
            //     cout << x << " ";
            // }
            break;
        }
        case 6: { //Chuyển các phần tử >0 về cuối mảng, <0 về đầu mảng, =0 về giữa mảng
            cout << "Nhap so phan tu: ";
            int c;
            cin >> c;
            int mangA[c];
            for(int i = 0; i < c; i++){
                cout << "Nhap a["<<i<<"] = ";
                cin >> mangA[i];
            }
            int mangKetQua[c];
            int index = 0;
            for(int i = 0; i < c; i++){
                if(mangA[i] < 0){
                    mangKetQua[index++] = mangA[i];
                }
            }
            for(int i = 0; i < c; i++){
                if(mangA[i] == 0){
                    mangKetQua[index++] = mangA[i];
                }
            }
            for(int i = 0; i < c; i++){
                if(mangA[i] > 0){
                    mangKetQua[index++] = mangA[i];
                }
            }
            cout << "Mang sau khi sap xep: ";
            for(int i = 0; i < c; i++){
                cout << mangKetQua[i] << " ";
            }
            cout << endl;
            break;
        }
    }
}