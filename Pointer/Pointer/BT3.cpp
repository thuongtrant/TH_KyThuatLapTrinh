////Viết hàm đệ qui tìm ước số chung lớn nhất của hai số nguyên. Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
//#include <iostream>
//using namespace std;
////int Euclid(int *a, int *b)   //Khai báo con trỏ "*" thì khi truyền vào hàm chỉ được truyền địa chỉ "&" (con trỏ chỉ lưu địa chỉ)
////{
////	
////	if (&b == &a)
////		return *a;
////	else
////		if (&a > &b)
////			*a = *a - *b;
////		else
////			*b = *b - *a;
////	return Euclid(*&a, *&b);
////}
//int main()
//{
//	
//	int m, n;
//	cin >> m;
//	cin >> n;
//	cout << " Gia tri cua m la: " << m << endl;
//	cout << "Gia tri cua n la: " << n << endl;
//	int* a, * b;
//	a = &m;
//	b = &n;
//	cout << "Gia tri cua con tro a: " << *a << endl;
//	cout << "Gia tri cua con tro b: " << *b << endl;
//	while (*a != *b){
//
//	if (*a > *b)
//	{
//		*a -= *b;
//	}
//	else
//	{
//		*b -= *a;
//	}
//
//}
//	cout << "Uoc chung lon nhat la: " << *a;
//	return 0;
//	
//}