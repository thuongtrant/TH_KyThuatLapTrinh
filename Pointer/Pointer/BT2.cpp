//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//	int a[30];
//	int n;
//	cout << "Nhap so phan tu trong mang: ";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand() % 10;
//	}
//	int* p;
//	p = a;
//	cout << "Ky phap do doi: \n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << "a[" << i << "] = " << *(p + i) << " \n"; //tương đương với *(a+i)
//		//cout  <<  * (p + i) << " \n"; 
//	}
//	cout << endl;
//	cout << "Ky phap chi so \n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << "a[" << i << "] = " << p[i] << endl;
//	}
//}