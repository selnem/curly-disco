#pragma once
struct IAquaticAnimal {
	virtual ~IAquaticAnimal() {}
	virtual void swim() = 0;  // ��ӹ޴� �Ļ�Ŭ�������� �ݵ�� overriding�� �ؾ� ��
};
