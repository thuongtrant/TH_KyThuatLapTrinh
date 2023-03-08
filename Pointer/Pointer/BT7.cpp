//#include <iostream>
//#include<cstdlib>
//using namespace std;

 
////void nhap(int* a, int n)
////{
////	for (int i = 0; i < n; i++)
////	{
////		a[i] = rand() % 10;
////	}
////}
////void xuat(int* a, int n)
////{
////	for (int i = 0; i < n; i++)
////	{
////		cout << a[i] << " ";
////	}
////}
////void tim(int* a, int n, int x)
////{
////	for (int i = 0; i < n; i++)
////	{
////		if (a[i] == x)
////		{
////			cout << "Tim thay!";
////		}
////		else
////		{
////			a[i] = NULL;
////		}
////	}
////}
////int main()
////{
////	
////	int n;
////	cin >> n;
////	int* a = new int[n];
////	nhap(a, n);
////	xuat(a, n);
////	int x;
////	cout << "Nhap phan tu can tim: ";
////	cin >> x;
////	tim(a, n, x);
////	return 0;
////}

//int *FindX(int* a, int n, int x) ////Sử dụng con trỏ hàm để trả vê giá trị là con trỏ.
//{
//	int* p = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		if (*(a + i) == x)
//		{
//			p = &x;
//			break;
//		}
//	}
//	return p;
//}
//int main()
//{
//	int* a;
//	int n, x;
//	//do
//	//{
//	//	cout << "Nhap so phan tu mang: ";
//	//	cin >> n;
//	//	if (n < 1);
//	//} while (n < 1);
//	cin >> n;
//	a = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		*(a + i) = rand() % 10;
//		cout << *(a + i) << " ";
//	}
//	cout << "Nhap phan tu can tim: ";
//	cin >> x;
//	if (FindX(a, n, x) == NULL)
//	{
//		cout << "Khong tim thay!" << endl;
//	}
//	else
//	{
//		cout << "Tim thay!";
//		cout << endl << "Vi tri " << x << " la: " << FindX(a, n, x);
//	}
//	delete[]a;
//	return 0;
//}