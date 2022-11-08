#include<iostream>
#include<iomanip>
using namespace std;
int main(){
/*--------------bai 1------------*/{
	int n = 5, gt = 1;
	for ( int i = 1; i <= n; i++){
		gt *= i;
	}
	cout << n <<"! = " << gt << endl;
}
/*--------------bai 2------------*/{
	int n = 4, m = n < 0 ? -n : n;
	double x = 2, t = 1;
	for ( int i = 0; i < n; i++){
		t *= x;
	}
	cout << x << "^" << n << " = " << ( n > 0 ? t : 1/t) << endl;
}
/*--------------bai 3------------*/{
	int n = 3;
	double s = 1;
	while ( n){
		s += 1.0/(2*n);
		n--;
	}
	cout <<"S = " << s << endl;
}
/*--------------bai 4------------*/{
	int n = 3, ans = 1;
	for ( int i = 2; i <= n/2; i++){
		if ( n % i == 0)
			ans = 0;
			break;
	}
	cout << n <<( ans ? " YES" : " NO") << endl;
}
/*--------------bai 5------------*/{
	int n = 6, k = 3;
	int a = 1, b = 1;
	for ( int i = 0; i < k; i++)  a *= (n - i);
	for ( int i = k; i > 1; i--) b *= i;
	cout <<"C("<< k << "," << n << ") = " << a/b << endl;
}
/*--------------bai 6------------*/{
	int n = 25;
	int mask = 0x80;
	cout << n << "(10) = ";
	for ( int i = 0; i < 8; i++){
       cout << (n & mask ? 1 : 0);
       mask = mask>> 1;
	}
    cout <<" (2)" << endl;
}
/*--------------bai 7------------*/{
	int a;
    int min = 0x7FFFFFFF, max = 0x80000000;
    while ( 1){
        cin >> a;
        if ( a == 0) break;
		{
			if ( a > max ) max = a;
			if ( a < min ) min = a;
		}
    }
	cout <<"Max = " << max <<" - Min = " << min << endl; 
}
/*--------------bai 8------------*/{
	int a, max, min;
	int d1 = 0, d2 = 0, d8 = 0;
	int count = 0;
	while (1)
	{
		cin >> a;
		if ( a == 0) break;
		if ( a % 2 == 0)
		{
			d2++;
			if( a % 8 == 0) d8++;
		}
		else d1++;
	}
	cout <<"So so chan: "<< d2 << endl;
	cout <<"So so le: "<< d1 << endl;
	cout <<"So cac so chia het cho 8: "<< d8 << endl;
}
/*--------------bai 9------------*/{
	int n = 8;
	int f0 = 0, f1 = 1;
	for ( int i = 0; i < n; i++)
	{
		int f = f0 + f1;
		cout << f << "\t";
		f0 = f1;
		f1 = f;
	}
	cout << endl;
}
/*--------------bai 10-----------*/{
	int x = 21;
	int f0 = 0, f1 = 1;
	while( x < f1)
	{
		int f = f0 + f1;
		f0 = f1;
		f1 = f;
	}
	cout << ( x == f1 ? " YES" : "NO") << endl;
}
/*--------------bai 11-----------*/{
	int x = 8;
	double xn, x0;
	const double e = 1e-8;
	xn = x/2;
	while( ( xn - x0) > 0 ? ( xn - x0) : -( xn - x0)  > e)
	{
		x0 = xn;
		xn = ( xn + x/xn)/2.0;
	}
	cout << "Can bac 2 cua " << x <<" = " << fixed << setprecision(9) << xn << endl;
}
/*--------------bai 12-----------*/{
	int x = 0, n = 4;
	for ( int i = 0; i < n; i++){
		int d;
		cin >> d;
		x = x*10 + d;
	}
	double xn, x0;
	const double e = 1e-8;
	xn = x/2;
	while( ( xn - x0) > 0 ? ( xn - x0) : -( xn - x0)  > e)
	{
		x0 = xn;
		xn = ( xn + x/xn)/2.0;
	}
	cout << "Can bac 2 cua " << x <<" = " << fixed << setprecision(9) << xn << endl;
}
/*--------------bai 13-----------*/{
	int m = 3, n = 4;
	for ( int i = 0, k = 1; i < m; i++){
		for ( int j = 0; j < n; j++){
			cout << k << "\t";
		}
		cout << endl;
	}
}
/*--------------bai 14-----------*/{
	int a = 9, b = 16, c = 25;
	int can = a==b || a==c || b==c;
	int vuong =  a==b+c || b==a+c || c==a+b;
	cout <<"Tam giac"<< (vuong||can ? "":" thuong");
	if(vuong ) cout <<" vuong";
	if(can ) cout << ( a==b && b==c? " deu":" can") ;
	cout << endl;
}
/*--------------bai 15-----------*/{
	for (char i = '0'; i <= '9'; i++){
		cout <<"Ma ASCCI cua "<< i << " la: "<< (int)i <<endl;
	}
	cout << endl;
	for (char i = 'A'; i <= 'Z'; i++){
		cout <<"Ma ASCCI cua "<< i << " la: "<< (int)i <<endl;
	}
	cout << endl;
	for (char i = 'a'; i <= 'z'; i++){
		cout <<"Ma ASCCI cua "<< i << " la: "<< (int)i <<endl;
	}
}
}
