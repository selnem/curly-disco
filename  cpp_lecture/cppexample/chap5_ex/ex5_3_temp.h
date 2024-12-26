#pragma once
template <typename T1, typename T2>
class Pair {                     // 원본 템플릿

	T1 first;
	T2 second;
public:
	Pair(T1 d1, T2 d2) : first(d1), second(d2) {}
	void Show() { cout << "origin pair(" << first << ", " << second << ")" << endl; }
};

template <typename T1>
class Pair <T1, const char *> {   // 부분 특수화 템플릿

	T1 first;
	char * second;
public:
	Pair(T1 d1, const char * d2) : first(d1) {
		int len = strlen(d2) + 1;
		second = new char[len];
		memcpy(second, d2, len);
	}
	~Pair() { delete[] second; }
	void Show() { cout << "part pair(" << first << ", " << second << ")" << endl; }
};

template <>
class Pair <const char *, const char *> {   // 특수화 템플릿
	char * first;
	char * second;
public:
	Pair(const char * d1, const char * d2) {
		int len = strlen(d1) + 1;
		first = new char[len];
		memcpy(first, d1, len);
		len = strlen(d2) + 1;
		second = new char[len];
		memcpy(second, d2, len);
	}
	~Pair() {
		delete[] first;
		delete[] second;
	}
	void Show() { cout << "all pair(" << first << ", " << second << ")" << endl; }
};
