#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int diagonalPrime(vector<vector<int>>& nums) {
		int size = nums.size(), result = 0;
		for (int i = 0; i < size; i++) {
			if (isPrime(nums[i][i])) {
				result = max(result, nums[i][i]);
			}
			if (isPrime(nums[i][size - i - 1])) {
				result = max(result, nums[i][size - i - 1]);
			}
		}
		return result;
	}

private:
	bool isPrime(int num) {
		if (num == 1) {
			return false;
		}
		int factor = 2;
		while (factor * factor <= num) {
			if (num % factor == 0) {
				return false;
			}
			factor++;
		}
		return true;
	}
};

int main() {

	/**
	* 2614. �Խ����ϵ�����
	����һ���±�� 0 ��ʼ�Ķ�ά�������� nums ��
	����λ�� nums ����һ�� �Խ��� �ϵ���� ���� �������һ�Խ����Ͼ����������������� 0 ��

	ע�⣺
	���ĳ���������� 1 ���Ҳ����ڳ� 1 ������֮������������ӣ�����Ϊ��������һ��������
	����������� i ��ʹ�� nums[i][i] = val ���� nums[i][nums.length - i - 1]= val ������Ϊ���� val λ�� nums ��һ���Խ����ϡ�


	����ͼ�У�һ���Խ����� [1,5,9] ������һ���Խ����� [3,5,7] ��

	ʾ�� 1��
	���룺nums = [[1,2,3],[5,6,7],[9,10,11]]
	�����11
	���ͣ����� 1��3��6��9 �� 11 ������ "λ������һ���Խ�����" �����֡����� 11 �������������ʷ��� 11 ��

	ʾ�� 2��
	���룺nums = [[1,2,3],[5,17,7],[9,11,10]]
	�����17
	���ͣ����� 1��3��9��10 �� 17 ����������"λ������һ���Խ�����"�����֡����� 17 �������������ʷ��� 17 ��


	��ʾ��
		1 <= nums.length <= 300
		nums.length == numsi.length
		1 <= nums[i][j] <= 4*106
	*/

	int result = 0;
	// { {1, 2, 3} ,{5, 6, 7},{9, 10, 11} }
	vector<vector<int>> nums = { {1, 2, 3} ,{5,17,7},{9,11,10} };
	Solution* solution = new Solution();
	result = solution->diagonalPrime(nums);
	cout << "result is " << result << endl;

	system("pause");
	return 0;
}