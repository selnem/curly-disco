#pragma once
#include<cstring>
template <typename Type>  // �Լ����ø���  ����
Type max(Type &a, Type &b) {
	if (a >= b) return a;
	else return b;
}
template <>
const char *max(const char *&a, const char *&b) { // ���ø� Ư��ȭ(����ȭ) ����
	if (strcmp(a, b) > 0) return a;
	else return b;
}

