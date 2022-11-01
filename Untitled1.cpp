#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
/*
//----------------------bai 1
int gt(int n){
	int gt = 1;
	for ( int i = 1; i <= n; i++){
		gt *= i;
	}
	return gt;
}
int main(){
	int n;
	cout <<"Nhap gia tri n: ";
	cin >> n;
	cout <<"Gia tri cua n! la: "<<gt(n);
	return 0;
}

//----------------------bai 2
int mu(double x, int n){
	int mu = 1;
	for ( int i = 1; i <= n; i++){
		mu *= x;
	}
	return mu;
}
int main(){
	double x;
	int n;
	cout <<"Nhap gia tri x: ";
	cin >> x;
	cout <<"Nhap gia tri n: ";
	cin >> n;
	cout <<"Gia tri cua x^n la: "<<mu(x, n);
	return 0;
}

//----------------------bai 3
int tong(int n){
	int tong = 1;
	for ( int i = 1; i <= n; i++){
		tong *= 1/(2*n);
	}
	return tong;
}
int main(){
	int n;
	cout <<"Nhap gia tri n: ";
	cin >> n;
	cout <<"Gia tri cua S la: "<<tong(n);
	return 0;
}

//----------------------bai 4
bool nto(int x){
	int dem = 0;
	for (int i = 2; i <= sqrt(x); i++){
		if ( x % i == 0)
			dem++;
	}
	if( dem == 0)
		return true;
	else
		return false;
}
int main(){
	int x;
	cout <<"Nhap x: ";
	cin >> x;
	if ( bool(x) == 0)
		cout<< x <<" khong phai la so nguyen to";
	else
		cout<< x <<" la so nguyen to";
	return 0;
}

//----------------------bai 5
int gt(int n){
	int gt = 1;
	for ( int i = 1; i <= n; i++){
		gt *= i;
	}
	return gt;
}
int main(){
	int n, k;
	cout <<"Nhap n: ";
	cin >> n;
	cout <<"Nhap k: ";
	cin >> k;
	int tuso = gt(n);
	int mauso = gt(k)*gt(n-k);
	cout <<"To hop C(k,n): "<< tuso/mauso;
	return 0;
}

//----------------------bai 6
void nhiphan(int n){
	int i = 0;
	int a[100];
	while( n > 0){
		a[i] = n%2;
		n /=2;
		i++;
	}
	for ( i = i - 1; i >= 0; i--){
		cout << a[i];
	}
}
int main(){
	int n;
	cout <<"Nhap n: ";
	cin >> n;
	nhiphan(n);
	return 0;
}

//----------------------bai 7
int main(){
	int n;
	int a[100];
	cout <<"Nhap gia tri n: ";
	cin >> n;
	cout <<"Nhap so nguyen: \n";
	for (int i = 0; i < n; i++){
		cout <<"Nhap so thu " << i+1 << ": ";
		cin >> a[i];
		if( a[i] == 0) break;
	}
	int min = a[0], max = a[0];
	for (int i = 0; i < n; i++){
		if ( a[i] > max ) max = a[i];
		if ( a[i] < min ) min = a[i];
	}
	if ( min != 0) cout <<"\nGia tri min: " << min <<endl;
	if ( max != 0) cout <<"Gia tri max: " << max <<endl;
	return 0;
}

//----------------------bai 8
void sochan(int n, int a[]){
	cout <<"Cac so chan la: ";
	for (int i = 0; i < n; i++){
		if ( a[i] % 2 == 0 && a[i] != 0)
		cout << a[i] << " ";
	}
	cout << endl;
}
void sole(int n, int a[]){
	cout <<"Cac so le la: ";
	for (int i = 0; i < n; i++){
		if ( a[i] % 2 == 1 && a[i] != 0)
		cout << a[i] << " ";
	}
	cout << endl;
}
void chia8(int n, int a[]){
	cout <<"Cac so chia het cho 8 la: " ;
	for (int i = 0; i < n; i++){
		if ( a[i] % 8 == 0 && a[i] != 0)
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int n;
	int a[100];
	cout <<"Nhap gia tri n: ";
	cin >> n;
	cout <<"\nNhap so nguyen: \n";
	for (int i = 0; i < n; i++){
		cout <<"Nhap so thu " << i+1 << ": ";
		cin >> a[i];
		if( a[i] == 0) break;
	}
	cout << endl;
	sochan(n, a);
	sole(n, a);
	chia8(n, a);
	return 0;
}

//----------------------bai 9
void Fibonacci(int n){
	unsigned long long a[n] = {0, 1};
	cout << n <<" so dau tien trong day Fibonacci: " << a[0] << ' '<< a[1] <<' ';
	for ( int i = 2; i < n; i++){
		a[i] = a[i-1] + a[i-2];
		cout << a[i] <<' '; 
	}
}
int main(){
	int n;
	cout <<"Nhap n: ";
	cin >> n;
	Fibonacci(n);
	return 0;
}

//----------------------bai 10
int Fibonacci(int n, int x){
	unsigned long long a[n] = {0, 1};
	cout << n <<" so dau tien trong day Fibonacci: " << a[0] << ' '<< a[1] <<' ';
	for ( int i = 2; i < n; i++){
		a[i] = a[i-1] + a[i-2];
		cout << a[i] << ' ';
	}
	cout << endl; 
	for ( int i = 0; i < n; i++)
		if ( x == a[i] )
			return true;
		else
			return false;
}
int main(){
	int n, x;
	cout <<"Nhap n: ";
	cin >> n;
	cout <<"Nhap x: ";
	cin >> x;
	if ( Fibonacci(n, x) ) cout << x <<" thuoc day Fibonacci";
	else cout << x <<" khong thuoc day Fibonacci";
	return 0;
}
*/
----------------------//bai 11
double can2(int x){
	double xn, x0;
	const double e = 1e-8;
	xn = x/2;
	while( abs(xn-x0) > e)
	{
		x0 = xn;
		xn = ( xn + x/xn)/2.0;
	}
	return xn;
}
int main(){
	int x;
	cout <<"Nhap x: ";
	cin >> x;
	cout << "Can bac 2 cua "<< x << " la: ";
	cout << fixed << setprecision(9) << can2(x);
}
/*
----------------------//bai 13
void input(int m, int n){
	int a[m][n];
	for ( int i = 1; i <= m; i++){
		for ( int j = 1; j <= n; j++){
			cout <<"Nhap a[" << i << "][" << j <<"]: ";
			cin >> a[i][j];
		}
	}
}
void output(int m, int n){
	int a[m][n];
	cout <<"\nMa tran la: " << endl;
	for ( int i = 1; i <= m; i++){
		for ( int j = 1; j <= n; j++){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
int main(){
	int m, n;
	cout <<"Nhap m: ";
	cin >> m;
	cout <<"Nhap n: ";
	cin >> n;
	input(m, n);
	output(m, n);
	return 0;
}

----------------------//bai 14
int main(){
	int a, b, c;
	cout <<"Nhap binh phuong 3 canh: "<<endl;
	cin >> a >> b >> c;
	int can = a==b || a==c || b==c;
	int vuong =  a==b+c || b==a+c || c==a+b;
	cout <<"Tam giac"<< (vuong||can ? "":" thuong");
	if(vuong ) cout <<" vuong";
	if(can ) cout << ( a==b && b==c? " deu":" can");
	return 0;
}

----------------------//bai 15
void Ascci(char x, char y){
	for (char i = x; i <= y; i++){
		cout <<"Ma ASCCI cua "<< i << " la: "<< (int)i <<endl;
	}
}
int main(){
	Ascci('0', '9');cout << endl;
	Ascci('A', 'Z');cout << endl;
	Ascci('a', 'z');
	return 0;
}
*/
