#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int countPrefixes(vector<string>& words, string s) {
		int result = 0;   
		// �ж��Ƿ��� s ��ǰ׺
		auto isPrefix = [&](const string& word) -> bool {
			if (s.size() < word.size()) {
				return false;
			}
			for (int i = 0; i < word.size(); ++i) {
				if (word[i] != s[i]) {
					return false;
				}
			}
			return true;
			};

		for (const string& word : words) {
			if (isPrefix(word)) {
				++result;
			}
		}
		return result;
	}
};

int main() {

	/**
	* 2255. ͳ���Ǹ����ַ���ǰ׺���ַ�����Ŀ
	��ʾ
	����һ���ַ������� words ��һ���ַ��� s ������ words[i] �� s ֻ���� СдӢ����ĸ ��
	���㷵�� words �����ַ��� s ǰ׺ �� �ַ�����Ŀ ��
	һ���ַ����� ǰ׺ �ǳ������ַ�����ͷ�����ַ��������ַ��� ��һ���ַ����е�����һ���ַ����С�

	ʾ�� 1��
	���룺words = ["a","b","c","ab","bc","abc"], s = "abc"
	�����3
	���ͣ�
	words ���� s = "abc" ǰ׺���ַ���Ϊ��
	"a" ��"ab" �� "abc" ��
	���� words �����ַ��� s ǰ׺���ַ�����ĿΪ 3 ��

	ʾ�� 2��
	���룺words = ["a","a"], s = "aa"
	�����2
	���ͣ�
	�����ַ������� s ��ǰ׺��
	ע�⣬��ͬ���ַ��������� words �г��ֶ�Σ�����Ӧ�ñ�������Ρ�
 
	��ʾ��
	1 <= words.length <= 1000
	1 <= words[i].length, s.length <= 10
	words[i] �� s ֻ ����СдӢ����ĸ��
	*/

	system("pause");
	return 0;
}