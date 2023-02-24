////Viết hàm đệ qui tính tổng các giá trị của một mảng 1 chiều lưu trữ số nguyên.Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
//
//#include <iostream>
//#include<cstdlib>
//using namespace std;
//int tongmang(int a[], int n)
//{
//	if (n == 1) return a[0];
//	return tongmang(a, n - 1) + a[n - 1];
//}
//int minMang(int a[], int n)
//{
//	int min;
//	if (n == 1)
//		return a[0];
//	else
//	{
//		min = minMang(a, n - 1);
//		if (a[n - 1] < min)
//		min = a[n - 1];
//	}
//	return min;
//}
//int main()
//{
//	int a[100];
//	int n, min;
//	cin >> n;	
//	for(int i=0;i<n;i++)
//	{
//		a[i] = rand() % 10;
//		cout << a[i] << "; ";
//	}
//	cout << "Tong cac phan tu trong mang la: "<< tongmang(a, n);
//	cout << endl;
//	cout << "Gia tri nho nhat trong mang la: " << minMang(a, n);
//	return 0;
//}