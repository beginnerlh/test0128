//����һ������ 0, 1, 2, ..., n �� n ���������У��ҳ� 0 ..n ��û�г����������е��Ǹ�����
//
//ʾ�� 1:
//
//���� : [3, 0, 1]
//��� : 2
//	 ʾ�� 2 :
//
// ���� : [9, 6, 4, 2, 3, 5, 7, 0, 1]
//  ��� : 8
//
//����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��
//
//ʾ�� :
//
//���� : [0, 1, 0, 3, 12]
//��� : [1, 3, 12, 0, 0]
//
//
//����һ��������дһ���������ж����Ƿ��� 3 ���ݴη���
//
//ʾ�� 1:
//
//���� : 27
//��� : true
//	 ʾ�� 2 :
//
// ���� : 0
//  ��� : false
//	   ʾ�� 3 :
//
//   ���� : 9
//	��� : true
//		 ʾ�� 4 :
//
//	 ���� : 45
//	  ��� : false

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
	printf("������һ����->");
	scanf("%d", &n);
	int a = isPowerOfThree(n);
	printf("%d\n", a);
	system("pause");
	return 0;
}
