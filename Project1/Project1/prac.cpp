#include<iostream>
using namespace std;

class Player {
private:
	string name;
public:
	static int playerCount; // 정적 멤버 변수 선언 (Player라는 클래스를 가지고 만든 
	Player(string _name) {	// 모든 객체들이 공유하는 변수
		name = _name;
		playerCount++;
	}
	~Player() {
		playerCount--;
	}
	void printName() {
		cout << "이름 : " << name << endl;
	}
};
int Player::playerCount = 0; // 정적 멤버 변수의 초기화

int main() {
	
	Player p1("인덕이");
	
	Player p2("언덕이");

	Player p3("인경이");

	cout << "플레이어 수 : " << Player::playerCount << endl;
	
	


	return 0;
}