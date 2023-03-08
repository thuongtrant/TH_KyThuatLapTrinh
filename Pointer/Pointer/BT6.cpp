//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "Nhap so luong phan tu can: ";
//	cin >> n;
//	int* p;
//	p = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		p[i] = rand() % 10;
//		cout << p[i] << " \n";
//	}
//	int i = 0;
//	int temp;
//	while (i < n - 1 - i)
//	{
//		temp = *(p + i);
//		*(p + i) = *(p + n - 1 - i);
//		*(p + n - 1 - i) = temp;
//		i++;
//	}
//	cout << "Xuat mang sau khi dao nguoc: ";
//	for (int i = 0; i < n; i++)
//	{
//		cout << *(p + i) << " ";
//
//	}
//}