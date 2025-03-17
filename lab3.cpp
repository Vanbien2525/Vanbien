// De Quy

#include <iostream>
using namespace std;;

// tinh N!
 long long GiaiThua(int n){
    if(n == 0) return 1;
    else return n * GiaiThua(n - 1);
 }

// số Fibonacci
long long Fibonacci(int n){
    if(n == 0 || n == 1) return n;
    else return Fibonacci(n - 1) + Fibonacci(n - 2);
}

//thap phan sang nhi phan
void doiNP(int n){
    if(n == 0)  return;
    else{
        doiNP(n / 2);
        cout<< n % 2;
    }
}

// tính tong 1 den n
int tong1(int n){
    if(n == 0) return 0;
    else return n + tong1(n - 1);
    }

//Tính tổng S(n)=1+3+5+…+(2.n+1) với n>=0 
int tong2(int n){
    if(n == 0) return 1;
    else return 2*n + 1 + tong2(n - 1);
    }

//Tính tích P(n)=1.3.5...(2n+1) với n>=0
int tich1(int n){
    if(n == 0) return 1;
    else return (2*n + 1) * tich1(n - 1);
    }
//Tính S(n)=1^2+2^2+3^2+....+n^2 với
long long tich2(int n){
    if(n == 0) return 0;
    else return tich2(n - 1)+ n * n;
    }

int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<< n <<"! = "<< GiaiThua(n)<<endl;

    int a;
    cout<<"\nNhap n:";
    cin>>a;
    cout<<"so Fibonacci thu "<< a << " la: " << Fibonacci(a)<<endl;

    int b;
    cout<<"\nNhap so muon doi: ";
    cin>>b;
    cout<<"So nhi phan cua "<< b << " la: ";
    doiNP(b);
    cout<<endl;

    int c;
    cout<<"\nNhap n: ";
    cin>>c;
    cout<<"Tong 1 den "<< c << " la: " << tong1(c)<<endl;

    int d;
    cout<<"\nNhap n:";
    cin>>d;
    cout<<"Tong2 la: "<< tong2(d)<<endl;

    int e;
    cout<<"\nNhap n:";
    cin>>e;
    cout<<"Tich1 la: "<< tich1(e)<<endl;

    int f;
    cout<<"\nNhap n:";
    cin>>f;
    cout<<"Tich2 la: "<< tich2(f)<<endl;
return 0;
 }