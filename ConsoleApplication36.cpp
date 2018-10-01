// ConsoleApplication36.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>

/**
	打印1到100之间的所有质数
*/
int main() {
	int i,n;
	for (i = 1; i <= 100; i++) {
		bool flag = true;	//默认为质数
		for (n = 2; n < i; n++) {
			if (i%n == 0) {
				//存在被整数的数，表示不是质数
				flag = false;
				break;
			}
		}
		if (flag) {
			printf("%d\t", i);
		}
	}
	system("pause");
	
    return 0;
}
