
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[20] = "I Lov";
    char str2[10] = "e You";

    strcat(str1, str2);
    cout << str1;
}