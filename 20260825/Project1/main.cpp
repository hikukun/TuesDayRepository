#include <iostream>
#include "Dog.h"
using namespace std;

int main(void)
{
	cout << "犬の名前を入力してください\n";

	string dogName;

	cin >> dogName;

	Dog dog(dogName);

	dog.ShowProfile();

	return 0;
}