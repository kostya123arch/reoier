#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Warrior {
public:
	int hp;
	int mp;
	int power;
	int armor;
	int stamina;
	string name;
	int x, y;

		
	};


void read_w(Warrior& w) {
	cin >> w.hp >> w.mp >> w.armor >> w.stamina >> w.name >> w.x >> w.y;

}
void print_w(Warrior w) {
	cout << "Health: " << w.hp << endl;
	cout << "Mana: " << w.mp << endl;
	cout << "Armor: " << w.armor << endl;
	cout << "Stamina: " << w.stamina << endl;
	cout << "Name: " << w.name << endl;
	cout << "Place: " << w.x << " " << w.y << endl;

}





int main()
{
	Warrior w;
	read_w(w);
	print_w(w);
	return 0;
}
