#pragma once
struct ILandAnimal 
{
	virtual ~ILandAnimal() {};
	virtual void creep()=0;   // ��ӹ޴� �Ļ�Ŭ�������� �ݵ�� overriding�� �ؾ� ��
};
