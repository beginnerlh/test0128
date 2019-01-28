//给定一个包含 0, 1, 2, ..., n 中 n 个数的序列，找出 0 ..n 中没有出现在序列中的那个数。
//
//示例 1:
//
//输入 : [3, 0, 1]
//输出 : 2
//	 示例 2 :
//
// 输入 : [9, 6, 4, 2, 3, 5, 7, 0, 1]
//  输出 : 8
//
//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//
//示例 :
//
//输入 : [0, 1, 0, 3, 12]
//输出 : [1, 3, 12, 0, 0]
//
//
//给定一个整数，写一个函数来判断它是否是 3 的幂次方。
//
//示例 1:
//
//输入 : 27
//输出 : true
//	 示例 2 :
//
// 输入 : 0
//  输出 : false
//	   示例 3 :
//
//   输入 : 9
//	输出 : true
//		 示例 4 :
//
//	 输入 : 45
//	  输出 : false

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int missingNumber(int* nums, int numsSize) {
	int a = 1;
	int i = 0;
	int num = 0;
	for (; i<numsSize; i++, a++)
	{
		num ^= (a^nums[i]);
	}
	return num;

}

void moveZeroes(int* nums, int numsSize) {
	int i = 0;
	int j = 0;
	for (; i<numsSize; i++)
	{
		if (nums[i] != 0)
		{
			nums[j++] = nums[i];
		}

	}
	while (j<numsSize)
	{
		nums[j] = 0;
		j++;
	}
	for (; i<numsSize; i++)
	{
		printf("%d ", nums[i]);
	}

}

bool isPowerOfThree(int n) {
	// return n > 0 && 1162261467%n == 0;
	if (n <= 0)
	{
		return false;
	}

	if (n == 1)
	{
		return true;
	}

	while (true)
	{

		if (n == 1)
		{
			return true;
		}

		else if (n % 3>0)
		{
			return false;
		}

		else
		{

			n = n / 3;

		}

	}
}

int main()
{
	/*int nums[] = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };
	int len = sizeof(nums) / sizeof(int);
	int a = missingNumber(nums, len);
	printf("%d\n", a);*/
	/*int num[] = { 0, 1, 0, 3, 12 };
	int len = sizeof(num) / sizeof(int);
	moveZeroes(num, len);*/
	int n = 0;
	printf("请输入一个数->");
	scanf("%d", &n);
	int a = isPowerOfThree(n);
	printf("%d\n", a);
	system("pause");
	return 0;
}
