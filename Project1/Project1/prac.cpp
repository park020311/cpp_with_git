#include<iostream>
using namespace std;

class Player {
private:
	string name;
public:
	static int playerCount; // ���� ��� ���� ���� (Player��� Ŭ������ ������ ���� 
	Player(string _name) {	// ��� ��ü���� �����ϴ� ����
		name = _name;
		playerCount++;
	}
	~Player() {
		playerCount--;
	}
	void printName() {
		cout << "�̸� : " << name << endl;
	}
};
int Player::playerCount = 0; // ���� ��� ������ �ʱ�ȭ

int main() {
	
	Player p1("�δ���");
	
	Player p2("�����");

	Player p3("�ΰ���");

	cout << "�÷��̾� �� : " << Player::playerCount << endl;
	
	


	return 0;
}