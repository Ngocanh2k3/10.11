#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
// 1.Ham tinh mu
double Mu(double x, int n){
	int m = n < 0 ? - n: n;
	double t = 1;
	for ( int i = 0; i < n; i++){
		t *= x;
	}
	return ( n > 0 ? t : 1/t);
}

// 2.Ham tinh giai thua
int GiaiThua(int n){
	int gt = 1;
	for ( int i = 1; i <= n; i++){
		gt *= i;
	}
	return gt;
}

// 3.Ham tim so Fibonacci
int Fibo(int t){
	if ( t < 2) return 1;
	return Fibo(t - 1) + Fibo(t - 2);
}

// 4.Ham giai phuong trinh
int GiaiPT(double a, double b, double c, double &x1, double &x2){
    double d = b*b -4*a*c;
    if ( d< 0) return 0;
    a *= 2;
    if ( d == 0) {
        x1 = x2 = -b/a;
        return 1;
    }
    d = sqrt(d);
    x1 = ( -b + d)/a;
    x2 = ( -b - d)/a;
    return 2;
}

// 5.Ham doi nhiet do
void NhietDo(double oC, double &oK, double &oF){
	oK = oC + 273;
	oF = oC *1.8 + 32;
}

// 6.Ham in mang so nguyen
void DaySo(int n, int *a){
	for ( int i = 0; i < n; i++){
		cout << i + 1 << "  ";
	}
}

// 7.Ham tinh tong day so
int TongDs(int n, int* a){
	int sum = 0;
	for ( int i = 0; i < n; i++){
		sum += i;
	}
	return sum;
}

// 8.Ham tinh trung binh cong
double Tbc(int n, int* a){
	return (double)TongDs(n, a)/ n;
}

// 9.Ham Fx0
double Calc(double* A, int n, double x){
	double f = A[n];
	while( n > 0){
		f = f * x + A[--n];
	}
	return f;
}

// 10.Ham chuyen sau ki tu sang so
double XauSangSo(const char* s){
	long long a = 0, b = 0;
	for ( int i = 0; char c = s[i]; i++){
		if ( c == '.') {
			b = 1; continue;
		}
		if ( b) b *= 10;
		a = a * 10 + (c - '0');
	}
	return b > 1 ? ( double)a/ b : a;
}

// 11.Ham chuan hoa ho ten
char* HoTen(char* s) {
    char prev = ' ';
    int k = 0;
    for ( int i = 0; char c = s[i]; i++){
    	if ( prev == ' '){
    		if ( c == ' ') continue;
    		if ( c >= 'a' && c <= 'z') c -= 32;
		}
		else if ( c >= 'A' && 'Z' >= c) c += 32;
		s[k++] = prev = c;
	}
	if ( prev == ' ') --k;
	s[k] = 0;
	return s;
}

// 12.Duyet mang bang con tro
	// 6.Ham in mang so nguyen
	void DaySobai12(const int n, int *a){
		for ( int* p = a; p - a < n; p++){
			cout << *p << "  ";
		}
	}

	// 7.Ham tinh tong day so
	int TongDsbai12(const int n, int* a){
		int sum = 0;
		for ( int* p = a; p - a < n; p++){
			sum += *p;
		}
		return sum;
	}
	
	// 8.Ham tinh trung binh cong
	double Tbcbai12(int n, int* a){
		return (double)TongDsbai12(n, a)/ n;
	}
	
	// 9.Ham Fx0
	double Calcbai12(double* A, int n, double x){
		double* p = A + n;
		double f = *(A + n);
		while( p != A){
			f = f * x + *(--p);
		}
		return f;
	}
	// 10.Ham chuyen xau ki tu sang so
	double XauSangSobai12(const char* s){
		long long a = 0, b = 0;
		while ( char c = *s++){
			if ( c == '.') {
				b = 1; continue;
			}
			if ( b) b *= 10;
			a = a * 10 + (c - '0');
		}
		return b > 1 ? ( double)a/ b : a;
	}
	// 11.Ham chuan hoa ho ten
	char* HoTenbai12(char* s) {
	    char prev = ' ';
	    char* q = s;
	    for ( char* p = s; char c = *p; p++){
	    	if ( prev == ' '){
	    		if ( c == ' ') continue;
	    		if ( c >= 'a' && c <= 'z') c -= 32;
			}
			else if ( c >= 'A' && 'Z' >= c) c += 32;
			*q++ = prev = c;
		}
		if ( prev == ' ') --q;
		*q = 0;
		return s;
	}

// 13.Ham in day Fibonacci
void Fibonacci(int n){
	int f0 = 1, f1 = 1;
	for ( int i = 0; i < n; i++)
	{
		int f = f0 + f1;
		cout << f << "  ";
		f0 = f1;
		f1 = f;
	}
}

// 14.Ham tao mang
template<class T>
T* TaoMang(int n, const T* s){
	T* v = new T[n];
	for ( int i = 0; i < n; i++) v[i] = s[i];
	
	return v;
}

// 15.Ham chuyen chu thuong thanh chu hoa
char* InHoa(char* s){
	for ( char* p = s; char c = *p; p++){
		if ( c >= 'a' && c <= 'z')
			*p = c - ' ';
	}
	return s;
}

// 16.Ham chuyen so tu nhien thanh day nhi phan
string NhiPhan(int n){
	string s = "";
	int mask = 0x80;
	cout << n << " (10) = ";
	for ( int i = 1; i <= 8; i++){
		s += (n & mask ? '1' : '0');
    	mask = mask>> 1;
    	if ( (i & 3) == 0) s +=" ";
	}
    return s;
}

// 17.Ham tim so lan xuat hien cua ki tu
void TanSuat(string s){
	for(int i = 0; i <= s.length()-2; i++)
        for(int j=i+1;j<=s.length()-1;j++)
            if(s[i] >= s[j]) {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
    int dem = 1;
    for(int i = 0; i <= s.length()-1; i++)
        if(s[i] == s[i+1]) dem++;
        else {
            cout << s[i] << ": " << dem <<"   ";
            dem = 1;
        }
}

int main(){
/*--------------bai 1------------*/{
	double x = 2;
	int n = 4;
	cout <<  x << "^" << n << " = " << Mu(x, n) << endl; 
}
/*--------------bai 2------------*/{
	int n = 5;
	cout <<  n <<"! = " << GiaiThua(n) << endl;
}
/*--------------bai 3------------*/{
	int t = 9;
	cout << Fibo(t) << endl;
}
/*--------------bai 4------------*/{
    double a = 1, b = -2, c = 1, x1, x2;
    int so_nghiem = GiaiPT(a, b, c, x1, x2);
    switch( so_nghiem){
    	case 1: cout <<"X = " << x1 << endl;break;
    	case 2: cout <<"X1 = " << x1 << ",X2 = " << x2 << endl;break;
    	default:
    		cout <<"Vo nghiem" << endl;
    		break;
	}
}
/*--------------bai 5------------*/{
	double oC = 30, oK, oF;
	NhietDo(oC, oK, oF);
	cout << oC <<"oC = " << oK <<"oK" << " = " << oF <<"oF" << endl;
}
/*--------------bai 6------------*/{
	int n = 10;
	int a[n];
	DaySo(n, a);
	cout << endl;
}
/*--------------bai 7------------*/{
	int n = 10;
	int a[n];
	cout << TongDs(n, a) << endl;
}
/*--------------bai 8------------*/{
	int n = 10;
	int a[n];
	cout << Tbc(n, a) << endl;
}
/*--------------bai 9------------*/{
	int n = 3;
	double a[n] = { 1, 2, 1};
	double x = 2.345;	
	cout << Calc(a, n, x) << endl;
}
/*--------------bai 10-----------*/{
	cout << XauSangSo("12.5") + 1 << endl;
}
/*--------------bai 11-----------*/{
	char s[100] = "  nguyEn vAn   an   ";
	cout << HoTen(s) << endl;
}
/*--------------bai 12-----------*/{
	{
		int n = 10;
		int a[n] = {};
		DaySobai12(n, a);
		cout << endl;
	}
	{
		int n = 10;
		int a[n]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
		cout << TongDsbai12(n, a) << endl;
		cout << Tbcbai12(n, a) << endl;
	}
	{
		int n = 3;
		double a[n] = { 1, 2, 1};
		double x = 2.345;	
		cout << Calc(a, n, x) << endl;
	}
	{
		cout << XauSangSobai12("12.5") + 1 << endl;	
	}
	{
		char s[100] = "  nguyEn vAn   an   ";
		cout << HoTenbai12(s) << endl;
	}
}
/*--------------bai 13-----------*/{
	int n = 8;
	Fibonacci(n);
	cout << endl;	
}
/*--------------bai 14-----------*/{
	int n = 5;
	int s[100] = { 1, 2 , 4 , 5, 9, 10, 100};
	int* a = new int[n];
	a = TaoMang(n, s);
	for ( int i = 0; i < n; i++){
	    cout << a[i] << ' ';
	}
	cout << endl;
	delete[] a;
}
/*--------------bai 15-----------*/{
	char s[100] = "Ki thuat Lap trinh";
	cout << InHoa(s) << endl;
}
/*--------------bai 16-----------*/{
	int n = 25;
	cout << NhiPhan(n) <<"(2)" << endl;;
}
/*--------------bai 17-----------*/{
	string s = "Ki Thuat Lap trinh";
	TanSuat(s);
	cout << endl;	
}
}

