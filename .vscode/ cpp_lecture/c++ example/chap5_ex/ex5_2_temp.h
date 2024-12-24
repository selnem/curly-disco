#pragma once
// Ŭ���� ���ø� ����
template <typename Type>  // �� �Ű������� Type
class Temp {
private:
	Type num;
public:
	Temp(Type n);  // ������
	void put(Type n);  // �� ����
	Type get();  // �� Ȯ��
};

// ����Լ� ���ø�, �ش� Ŭ������ ������ �� �� �Ű������� ����Ѵ�.
template <typename Type>
Temp<Type>::Temp(Type n)
{
	num = n;
}

template <typename Type>
void Temp<Type>::put(Type n)
{
	num = n;
}
template <typename Type>
Type Temp<Type>::get()
{
	return num;
}
