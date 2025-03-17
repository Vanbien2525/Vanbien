//LAB 1. Ngon ngu lap trinh

#include <iostream>
using namespace std;

// S = a * a + b * b
int tinhTong(int a, int b){
	return a * a + b * b;
}

//chuyen F sang c
double fSangC(double F){
	return 5.0 * (F - 32) / 9;
}

//so lon nhat
int soLonNhat(int a, int b, int c){
	int max;
	if(a > b){
		if(a > c)  max = a;
		else max = c;
	}
	else{
		if(b > c)  max = b;
		else max = c;
	}
	return max;
}

//phut, gio, giay
void gioPhutGiay(int soGiay, int &gio, int &phut, int &giay){
	gio = soGiay / 3600;
	phut = (soGiay % 3600) / 60;
	giay = soGiay % 60;
}

//tinh s1 va s2
double s1(int n){
	double S1=0;
	for (int i = 1; i <= n; i++) {
        S1 += 1.0 / i;
    }
//    int i = 1;
//    while(i <= n){
//    	S1 += 1.0 / i++;
//	}

    return S1;
}
int s2(int n){
	int S2 = 0;
    for (int i = 1; i <= n; i++) {
        S2 += i * i;
    }
    return S2;
}


int main(){
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Tong S = " << tinhTong(a, b) << endl;
    
    double F;
    cout << "\nNhap nhiet do F: ";
    cin >> F;
    cout << "Nhiet do C = " << fSangC(F) << endl;
    
    int x, y, z;
    cout << "\nNhap ba so nguyen a, b, c : ";
    cin >> x >> y >> z;
    cout << "So lon nhat la: " << soLonNhat(x, y, z) << endl;

	int soGiay, gio, phut, giay;
	cout<<"\nNhap so giay: ";
	cin>>soGiay;
	gioPhutGiay(soGiay, gio, phut, giay);
	cout << "Thoi gian: " << gio << " gio " << phut << " phut " << giay << " giay" << endl;
	
	
	int n;
    cout << "\nNhap n: ";
    cin >> n;
    cout << "Tong S1 = " << s1(n) << endl;
    cout << "Tong S2 = " << s2(n) << endl;

}
