#include<iostream>
#include<string>
using namespace std;

class Character {
private:
	string name;
	int level;
public:
	Character(string recName, int recLevel) {
		name = recName;
		level = recLevel;


	}
	void printInformation() {
		cout << "아이디 : " << name << endl;
		cout << "레벨 : " << level << endl;
		
	}

	void setLevel(int changedLevel) {
		level = changedLevel;
	}
	int getLevel() {
		return level;
	}
	string getName() {
		return name;
	}

};



int main() {
	string tmpName;
	cin >> tmpName;

	int tmpLevel;
	cin >> tmpLevel;
	
	Character p1(tmpName, tmpLevel);
	p1.printInformation();

	p1.setLevel(p1.getLevel() + 1);
	p1.printInformation();

	



	return 0;
}