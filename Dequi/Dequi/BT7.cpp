////Viết hàm đệ qui tính tổng các chữ số chẵn / lẻ của một số nguyên không âm.Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
//
//#include <iostream>
//using namespace std;
//int tinhChan(int n)
//{
//	//if (n < 0) return -1;
//	int k = (n % 10) % 2;
//	if (n / 10 == 0)
//		return 0;
//	else if (k == 0)
//		return n % 10 + tinhChan(n / 10);
//	else
//		return tinhChan(n / 10);
//}
//int tinhLe(int n)
//{
//	//if (n < 0) return -1;
//	int k = (n % 10) % 2;
//	if (n / 10 == 0)
//		return 1;
//	else if (k != 0)
//		return n % 10 + tinhLe(n / 10);
//	else
//		return tinhLe(n / 10);
//}
//int main()
//{
//	int n;
//	cin >> n;
//	cout << "Tong cac chu so chan la: " ;
//	cout << endl << tinhChan(n);
//	cout << endl << "Tong cac chu so chan la: " ;
//	cout << tinhLe(n);
//}