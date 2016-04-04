#include "apue.h"
#include <iostream>
#include <cstdlib>
using namespace std;
void err_quit(const char *str, ...) {
	cout << str << endl;
	exit(1);
}
void err_sys(const char *str, ...) {
	cout << "Not a directory : " << str << endl;
	exit(1);
}
