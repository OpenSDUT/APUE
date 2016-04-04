#include "apue.h"
#include <iostream>
#include <cstdlib>
#include <dirent.h>
using namespace std;
int main(int argc, char **argv) 
{
	DIR *dp;
	struct dirent *dirp;
	if( argc != 2 )
		err_quit("usage: ls directory_name");
	if( (dp = opendir(argv[1])) == NULL )
		err_sys("can't open %s", argv[1]);
	while( (dirp = readdir(dp)) != NULL )
		cout << dirp->d_name << endl;
	closedir(dp);
	exit(0);
	return 0;
}
