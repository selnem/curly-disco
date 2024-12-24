#pragma once
template <typename T1, typename T2>
class Pair {                     // ���� ���ø�

	T1 first;
	T2 second;
public:
	Pair(T1 d1, T2 d2) : first(d1), second(d2) {}
	void Show() { cout << "origin pair(" << first << ", " << second << ")" << endl; }
};

template <typename T1>
class Pair <T1, const char *> {   // �κ� Ư��ȭ ���ø�

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
class Pair <const char *, const char *> {   // Ư��ȭ ���ø�
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
