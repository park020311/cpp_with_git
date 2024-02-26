#include<iostream>
using namespace std;

class Test {
private:
	int num;
public:
	Test(int n) {
		num = n;
		cout << num << "생성자 실행" << endl;

	}
	~Test() {
		cout << num << "소멸자 실행" << endl;
	}
	void printData() {
		cout << "가지고 있는 값 : " << num << endl;
	}
};

void function() {

	Test t3(3);
	Test t4(4);
}
int main() {
	Test t1(1);
	Test t2(2);

	function();

	Test t5(5);
	Test t6(6);

	
	return 0;
}