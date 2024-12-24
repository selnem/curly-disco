#pragma once
#include<cstring>
template <typename Type>  // 함수템플릿의  정의
Type max(Type &a, Type &b) {
	if (a >= b) return a;
	else return b;
}
template <>
const char *max(const char *&a, const char *&b) { // 템플릿 특수화(전문화) 정의
	if (strcmp(a, b) > 0) return a;
	else return b;
}

