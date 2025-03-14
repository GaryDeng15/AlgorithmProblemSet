#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	bool isBalanced(string num) {
		int diff = 0, sign = 1;
		for (char current : num) {
			int tempDiff = current - '0';
			diff += tempDiff * sign;
			sign = -sign;
		}
		return diff == 0;
	}
};

int main() {

	/**
	* 3340. ���ƽ���ַ���
	����һ���������� 0 - 9 ��ɵ��ַ��� num�����ż���±괦������֮�͵��������±괦������֮�ͣ�����Ϊ�������ַ�����һ�� ƽ���ַ�����
	��� num ��һ�� ƽ���ַ������򷵻� true�����򣬷��� false��

	ʾ�� 1��
	���룺num = "1234"
	�����false
	���ͣ�
	ż���±괦������֮��Ϊ 1 + 3 = 4�������±괦������֮��Ϊ 2 + 4 = 6��
	���� 4 ������ 6��num ����ƽ���ַ�����
	
	ʾ�� 2��
	���룺num = "24123"
	�����true
	���ͣ�
	ż���±괦������֮��Ϊ 2 + 1 + 3 = 6�������±괦������֮��Ϊ 4 + 2 = 6��
	����������ȣ�num ��ƽ���ַ�����
 
	��ʾ��
	2 <= num.length <= 100
	num �������� 0 - 9 ��ɡ�
	*/
	string num = "24123";
	Solution *solution = new Solution();
	bool result = solution->isBalanced(num);
	cout << "num is " << result << endl;

	system("pause");
	return 0;
}