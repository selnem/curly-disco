#include<iostream>
using namespace std;
#include "cat.h"
#include "dog.h"
#include "duck.h"
#include "goldFish.h"

int main()  // class Adapter pattern 
{
	Cat cat("�߿���", Pet::MAMMAL, 2);
	Dog dog("�۸���", Pet::MAMMAL, 5);
	Duck duck("���ε�", Pet::BIRDS, 1);
	GoldFish goldFish("�ϸ�", Pet::FISH, 2);

	cout << "\n** Cat��ü �׽�Ʈ **" << endl;
	cat.eat();
	cat.creep();
	cat.view();

	cout << "\n** Dog��ü �׽�Ʈ **" << endl;
	dog.eat();
	dog.creep();
	dog.view();

	cout << "\n** Duck��ü �׽�Ʈ **" << endl;
	duck.eat();
	duck.creep();
	duck.swim();
	duck.view();

	cout << "\n** GoldFish��ü �׽�Ʈ **" << endl;
	goldFish.eat();
	goldFish.swim();
	goldFish.view();


	Pet *petAry[4] = { new Cat("�߿���", Pet::MAMMAL, 2), new Dog("�۸���", Pet::MAMMAL, 5),
				  new Duck("���ε�", Pet::BIRDS, 1), new GoldFish("�ϸ�", Pet::FISH, 2) };
	for (int i = 0; i < sizeof(petAry) / sizeof(petAry[0]); i++) {

		// TODO - �Ʒ��� ���� ��µǰ� �ڵ��غ�����~
		    /* ����� ���̸� �Խ��ϴ�
		       �� ������ ��ӻ�� �Ƚ��ϴ�
			   �߿���(������) 2��

			   �� ���̸� �Խ��ϴ�
			   �� ������ �׹߷� �Ƚ��ϴ�
			   �۸���(������) 5��

			   ���� ���̸� �Խ��ϴ�
			   �� ������ �ι߷� �Ƚ��ϴ�
			   �� �ӿ��� �ι߷� ���Ĩ�ϴ�
			   ���ε�(����) 1��

			   �ݺؾ� ���̸� �Խ��ϴ�
			   �� �ӿ��� ���Ĩ�ϴ�
			   �ϸ�(���) 2��
			 */

	}
	for (int i = 0; i < sizeof(petAry) / sizeof(petAry[0]); i++) {
		delete petAry[i];
	}
	return 0;
}