// Comp Prog Finals - Game System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	string monsterSelection[4] = {
	"Xxr4mc3Lm@51k1pxX", "[(@rG0$iN○m@LnW@g)]", "The Guevarras", "Art",
	"Programming", "Science", "Philosophy", "P.E.",
	"Music", "PPE"
	*/
	int hp = 100, mp = 50, phy = 30, mag = 20, gun = 10, bullets = 10;
	int monsterHP, monsterMP, monsterPHY, monsterMAG, monster2HP, monster2MP, monster2PHY, monster2MAG;
	string user, teammate1, teammate2, teammate3, monsterName, monster2Name;
	char monsterChoice, actionChoice, fireAgain = false;
	bool invalidMonster, invalidAction, repeatGun, invalidGun = false;
	cout << "Enter your name: ";
	getline(cin, user);

	cout << "Select an enemy" << endl;
	cout << "1. Xxr4mc3Lm@51k1pxX - Level: Basic\n";
	cout << "2. [(@rG0$iN○m@LnW@g)] - Level: Intermediate\n";
	cout << "3. The Guevarras - Level: Advance\n";
	cout << "4. ???? - Level: Unknown\n";
	cout << "Enter number of chosen monster: ";
	cin >> monsterChoice;
	do {
		switch (monsterChoice)
		{
		case'1'://ramcel
			monsterName = "Xxr4mc3Lm@51k1pxX";
			monsterHP = 30; monsterPHY = 10;
			invalidMonster = false;
			break;
		case'2'://argosino
			monsterName = "[(@rG0$iN○m@£ùwàğ)]";
			monsterHP = 50; monsterPHY = 15; monsterMP = 25; monsterMAG = 10;
			invalidMonster = false;
			break;
		case'3'://guevarra x2
			monsterName = "Guevarra (Kupal)";
			monster2Name = "Guevarra (imissu)";
			monsterHP = 50; monsterPHY = 15; monsterMP = 25; monsterMAG = 10;
			monster2HP = 50; monster2PHY = 15; monster2MP = 25; monster2MAG = 10;
			invalidMonster = false;
			break;
		case'4':
			cout << "Complete Advance Level to unlock.\n";
			cout << "1. Xxr4mc3Lm@51k1pxX - Level: Basic\n";
			cout << "2. [(@rG0$iN○m@£ùwàğ)] - Level: Intermediate\n";
			cout << "3. The Guevarras - Level: Advance\n";
			cout << "4. ???? - Level: Unknown\n";
			cout << "Enter number of chosen monster: ";
			cin >> monsterChoice;
			invalidMonster = true;
			break;
		default:
			cout << "Invalid monster. Select again\n";
			cout << "1. Xxr4mc3Lm@51k1pxX - Level: Basic\n";
			cout << "2. [(@rG0$iN○m@£ùwàğ)] - Level: Intermediate\n";
			cout << "3. The Guevarras - Level: Advance\n";
			cout << "4. ???? - Level: Unknown\n";
			cout << "Enter number of chosen monster: ";
			cin >> monsterChoice;
			invalidMonster = true;
			break;
		}
	} while (invalidMonster);

	system("pause");
	system("cls");
	if (monsterChoice == '1')
	{
		cout << "Player: " << user << "\tHealth: " << hp << "\tMana: " << mp << "\tBullets: " << bullets << endl;
		cout << "Monster: " << monsterName << "\tHealth: " << monsterHP << endl;
	}
	else if (monsterChoice == '3')
	{
		cout << "Player: " << user << "\tHealth: " << hp << "\tMana: " << mp << "\tBullets: " << bullets << endl;
		cout << "Monster: " << monsterName << "\tHealth: " << monsterHP << "\tMana: " << monsterMP << endl;
		cout << "Monster: " << monster2Name << "\tHealth: " << monster2HP << "\tMana: " << monster2MP << endl;
	}
	else
	{
		cout << "Player: " << user << "\tHealth: " << hp << "\tMana: " << mp << "\tBullets: " << bullets << endl;
		cout << "Monster: " << monsterName << "\tHealth: " << monsterHP << "\tMana: " << monsterMP << endl;
	}

	cout << "It's your turn.\n";
	cout << "Select action.\n";
	cout << "1. Physical Attack\n";
	cout << "2. Magic Attack\n";
	cout << "3. Use gun\n";
	cout << "4. Defend\n";
	cout << "Enter: ";
	cin >> actionChoice;

	//Player's Turn
	
		do {
			switch (actionChoice)
			{
			case'1':
				monsterHP -= phy;
				monster2HP -= phy;
				cout << "You attacked" << monsterName << "!" << endl;
				cout << monsterName << " lost " << phy << " Health.";
				invalidAction = false;
				break;
			case'2':
				monsterHP -= mag;
				monster2HP -= mag;
				mp -= 10;
				cout << "You attacked" << monsterName << "!" << endl;
				cout << monsterName << " lost " << mag << " Health.";
				invalidAction = false;
				break;
			case'3':
				monsterHP -= gun;
				monster2HP -= gun;
				cout << "You shot " << monsterName << "!" << endl;
				cout << monsterName << " lost " << gun << " Health.";
				cout << "Fire again?(y/n)";
				cin >> fireAgain;
				do {
				do {
				switch (fireAgain)
				{
				case'y':
					cout << "You shot " << monsterName << "!" << endl;
					cout << monsterName << " lost " << gun << " Health.";
					cout << "Fire again?(y/n)";
					cin >> fireAgain;
					repeatGun = true;
					break;
				case 'n':
					repeatGun = false;
					break;
				default:
					cout << "Invalid answer";
					invalidGun = true;
					break;
				}
			} while (repeatGun);
				} while (invalidGun);
				invalidAction = false;
			default:
				cout << "Invalid action.";
				cout << "1. Physical Attack\n";
				cout << "2. Magic Attack\n";
				cout << "3. Use gun\n";
				cout << "4. Defend\n";
				cout << "Enter: ";
				cin >> actionChoice;
				invalidAction = true;
				break;
			}
		} while (invalidAction);
cout << "It's " << monsterName << " and " << monster2Name << " turn";

}