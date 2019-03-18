#define _CRT_SECURE_NO_WARNINGS

/*输入: 123
输出: 321
 示例 2:
输入: -123
输出: -321
示例 3:
输入: 120
输出: 21
注意:
假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−2^31,  2^31 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。*/

#include<stdio.h>
#include<stdlib.h>

int reverse(int x) {
	int sum = 0;
		while (x != 0) {
			sum = sum * 10 + (x % 10);
			x /= 10;
		}
		return sum;
}

int main() {
	int num = reverse(-123);
	printf("%d\n", num);
	system("pause");
	return 0;
}