#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>

using namespace std;

char* change(char* s, char* buf, int i, int l) {
	if ((s[i] == 'n' && s[i + 1] == 'o') || (s[i] == 'o' && s[i + 1] == 'n')) {
		buf[l] = '*';
		buf[l + 1] = '*';
		buf[l + 2] = '*';
		l += 3;
		i++;
	}
	else {
		buf[l] = s[i];
		l++;
	}

	if (s[i + 1] != '\0') {
		return change(s, buf, i + 1, l);
	}
	else {
		buf[l] = '\0';
		return buf;
	}
}

bool isTrue(char* s, int i) {
	if ((s[i] == 'n' && s[i + 1] == 'o') || (s[i] == 'o' && s[i + 1] == 'n')) {
		return true;
	}

	if (s[i + 1] != '\0') {
		return isTrue(s, i + 1);
	}
	else {
		return false;
	}
}



void main() {
	char s[101];
	bool p;
	char* kk;
	char* buf = new char(2 * strlen(s) - 1);

	cout << "Enter string: "; cin.getline(s, 100);

	p = isTrue(s, 0);

	kk = change(s, buf, 0, 0);

	cout << "line: ";
	for (int i = 0; kk[i] != '\0'; i++) {
		cout << kk[i];
	}
	cout << endl;

	cout << p << endl;
}
