#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	long long maximumTripletValue(vector<int>& nums) {
		int n = nums.size();
		long long res = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					res = max(res, (long long)(nums[i] - nums[j]) * nums[k]);
				}
			}
		}
		return res;
	}
};

int main() {

	/**
	* 2873. ������Ԫ���е����ֵ I
	����һ���±�� 0 ��ʼ���������� nums ��

	������������� i < j < k ���±���Ԫ�� (i, j, k) �У��ҳ��������±���Ԫ������ֵ���������������������Ԫ���ֵ���Ǹ������򷵻� 0 ��

	�±���Ԫ�� (i, j, k) ��ֵ���� (nums[i] - nums[j]) * nums[k] ��


	ʾ�� 1��
	���룺nums = [12,6,1,2,7]
	�����77
	���ͣ��±���Ԫ�� (0, 2, 4) ��ֵ�� (nums[0] - nums[2]) * nums[4] = 77 ��
	����֤��������ֵ���� 77 �������±���Ԫ�顣
	
	ʾ�� 2��
	���룺nums = [1,10,3,4,19]
	�����133
	���ͣ��±���Ԫ�� (1, 2, 4) ��ֵ�� (nums[1] - nums[2]) * nums[4] = 133 ��
	����֤��������ֵ���� 133 �������±���Ԫ�顣 
	
	ʾ�� 3��
	���룺nums = [1,2,3]
	�����0
	���ͣ�Ψһ���±���Ԫ�� (0, 1, 2) ��ֵ��һ��������(nums[0] - nums[1]) * nums[2] = -3 ����ˣ����� 0 ��
 
	��ʾ��
	3 <= nums.length <= 100
	1 <= nums[i] <= 106
	*/

	system("pause");
	return 0;
}