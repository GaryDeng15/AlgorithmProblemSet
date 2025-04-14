#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
		int ArrSize = arr.size(), ArrMax = ranges::max(arr), result = 0;
		vector<int> PrefixArr(ArrMax + 2); // �����ǰ׺��
		for (int i = 0; i < arr.size(); i++) {
			int y = arr[i];
			for (int j = i + 1; j < arr.size(); j++) {
				int z = arr[j];
				if (abs(y - z) > b) {
					continue;
				}
				int left = max({ y - a, z - c, 0 });
				int right = min({ y + a, z + c, ArrMax });
				result += max(PrefixArr[right + 1] - PrefixArr[left], 0); // ��� left > right + 1��PrefixArr[right + 1] - PrefixArr[left] �����Ǹ���
			}
			for (int k = y + 1; k < ArrMax + 2; k++) {
				PrefixArr[k]++; // �� y �ӵ� �����У����������ܵ�Ӱ���ǰ׺��
			}
		}
		return result;
	}
};

int main() {

	/**
	* 1534. ͳ�ƺ���Ԫ��

	����һ���������� arr ���Լ� a��b ��c ��������������ͳ�����к���Ԫ���������
	�����Ԫ�� (arr[i], arr[j], arr[k]) ��������ȫ������������Ϊ����һ�� ����Ԫ�� ��

	0 <= i < j < k < arr.length
	|arr[i] - arr[j]| <= a
	|arr[j] - arr[k]| <= b
	|arr[i] - arr[k]| <= c
	���� |x| ��ʾ x �ľ���ֵ��

	���� ����Ԫ������� ��

	ʾ�� 1��
	���룺arr = [3,0,1,1,9,7], a = 7, b = 2, c = 3
	�����4
	���ͣ�һ���� 4 ������Ԫ�飺[(3,0,1), (3,0,1), (3,1,1), (0,1,1)] ��
	
	ʾ�� 2��
	���룺arr = [1,1,2,2,3], a = 0, b = 0, c = 1
	�����0
	���ͣ�����������������������Ԫ�顣
 

	��ʾ��
	3 <= arr.length <= 100
	0 <= arr[i] <= 1000
	0 <= a, b, c <= 1000
	*/

	system("pause");
	return 0;
}