#include<iostream>
#include<Windows.h>
#include"String80.h"

using namespace std;





int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


    String80 s1; // ������ ������������ ��� ���������
    cout << "s1: " << s1.getData() << endl;

    String80 s2("Hello, World!"); // ������ ������������ � ����������
    cout << "s2: " << s2.getData() << endl;

    return 0;
}