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
	int hp, mp, phy, mag, gun = 10, bullets = 10, energy;
	int monsterHP, monsterMP, monsterPHY, monsterMAG, monster2HP, monster2MP, monster2PHY, monster2MAG;
	string user, teammate1, teammate2, teammate3, monsterName, monster2Name;
	char monsterChoice, actionChoice, fireAgain = false, classChoice, itemChoice;
	bool invalidMonster, invalidAction, repeatGun, invalidGun = false, invalidClass, invalidItem = false;
	cout << "Enter your name: ";
	getline(cin, user);
	cout << "Choose starting class.\n";
	cout << "1. Knight\n";
	cout << "\tHealth: 300\n\tAtk Dmg: 20\n\tEnergy: 50\n ";
	cout << "2. Sorcerer\n";
	cout << "\tHealth: 150\n\tAtk Dmg: 50\n\tEnergy: 30\n";
	cout << "3. Assassin\n";
	cout << "\tHealth: 100\n\tAtk Dmg: 40\n\tEnergy 60\n";
	cout << "Enter number of chosen class: ";
	cin >> classChoice;
	do {
		switch (classChoice)
		{
		case'1':
			hp = 300; phy = 20; energy = 50;
			cout << "Starting Class: Knight\n";
			invalidClass = false;
			break;
		case '2':
			hp = 150; phy = 50; energy = 30;
			cout << "Starting Class: Sorcerer\n";
			invalidClass = false;
			break;
		case '3':
			hp = 100; phy = 40; energy = 60;
			cout << "Starting Class: Assassin\n";
			invalidClass = false;
			break;
		default:
			cout << "Not a valid class\n";
			cout << "Choose starting class.\n";
			cout << "1. Knight\n";
			cout << "\tHealth: 300\n\tAtk Dmg: 20\n\tEnergy: 50\n ";
			cout << "2. Sorcerer\n";
			cout << "\tHealth: 150\n\tAtk Dmg: 50\n\tEnergy: 30\n";
			cout << "3. Assassin\n";
			cout << "\tHealth: 120\n\tAtk Dmg: 35\n\tEnergy 60\n";
			cout << "Enter number of chosen class: ";
			cin >> classChoice;
			invalidClass = true;
			break;
		}
	} while (invalidClass);

	system("pause");
	system("cls");

	cout << "Level 1\n";
	monsterHP = 50;
	monsterName = "Xxr4mc3Lm@51k1pxX";
	monsterPHY = 10;
	do {
	cout << "\nPlayer: " << user << "\tHealth: " << hp << "\tEnergy: " << energy << endl;
	cout << "Monster: " << monsterName << "\tHealth: " << monsterHP << endl;
	cout << "It's your turn.\n";
	cout << "Select action.\n";
	cout << "1. Attack\n";
	cout << "2. Use item\n";
	cout << "3. Do nothing\n";
	cout << "Enter: ";
	cin >> actionChoice;
	do {
		switch (actionChoice)
		{
		case'1':
			monsterHP -= phy;
			cout << "You attacked " << monsterName << "!" << endl;
			cout << monsterName << " lost " << phy << " Health.\n";
			cout << "Ending turn\n";
			invalidAction = false;
			break;
		case '2':
			cout << "Inventory\n";
			cout << "1. PotPots - +20HP\n";
			cout << "2. Return\n";
			cout << "Enter: ";
			cin >> itemChoice;
			do {
				switch (itemChoice)
				{
				case'1':
					hp += 20;
					cout << "Used PotPots! Gained 20HP.\n";
					cout << "Ending turn\n";
					invalidAction = false;
					break;
				case'2':
					cout << "Select action.\n";
					cout << "1. Attack\n";
					cout << "2. Use item\n";
					cout << "3. Do nothing\n";
					cout << "Enter: ";
					cin >> actionChoice;
					invalidAction = true;
					break;
				default:
					cout << "Invalid Item\n";
					cout << "Inventory\n";
					cout << "1. PotPots - +20HP\n";
					cout << "Enter: ";
					cin >> itemChoice;
					invalidItem = true;
					break;
				}
			} while (invalidItem);
			break;
		case'3':
			cout << "Ending turn\n";
			invalidAction = false;
			break;
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

	cout << monsterName << " is attacking!\n";
	hp -= monsterPHY;
	cout << user << " lost " << monsterPHY << "HP!\n";
}while (hp != 0 && hp > 0 || monsterHP != 0 && monsterHP > 0);

	cout << "You have defeated " << monsterName << "!\n";
	cout << "Proceed to the next level\n";

	system("pause");
	system("cls");

	/*
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
*/

}