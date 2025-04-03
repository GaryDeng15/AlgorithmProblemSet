#include<iostream>
#include<vector>

using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    // �ݹ鷨
public:
    bool evaluateTree(TreeNode* root) {
        if (root->left == nullptr) {
            return root->val;
        }
        if (root->val == 2) {
            return evaluateTree(root->left) || evaluateTree(root->right);
        }
        else {
            return evaluateTree(root->left) && evaluateTree(root->right);
        }
    }
};

int main() {
    /**
    * 2331. ���㲼����������ֵ
    
    ����һ�� ���������� �ĸ��������������������

    Ҷ�ӽڵ� ҪôֵΪ 0 ҪôֵΪ 1 ������ 0 ��ʾ False ��1 ��ʾ True ��
    ��Ҷ�ӽڵ� ҪôֵΪ 2 ҪôֵΪ 3 ������ 2 ��ʾ�߼��� OR ��3 ��ʾ�߼��� AND ��
    ���� һ���ڵ��ֵ��ʽ���£�

    ����ڵ��Ǹ�Ҷ�ӽڵ㣬��ô�ڵ�� ֵ Ϊ�������� True ���� False ��
    ���򣬼��� �������ӵĽڵ�ֵ��Ȼ�󽫸ýڵ�����������������ֵ���� ���� ��
    ���ظ��ڵ� root �Ĳ�������ֵ��

    ���������� ��ÿ���ڵ��� 0 ������ 2 �����ӵĶ�������
    Ҷ�ӽڵ� ��û�к��ӵĽڵ㡣


    ʾ�� 1��
    ���룺root = [2,1,3,null,null,0,1]
    �����true
    ���ͣ���ͼչʾ�˼�����̡�
    AND ������ڵ��ֵΪ False AND True = False ��
    OR ����ڵ��ֵΪ True OR False = True ��
    ���ڵ��ֵΪ True ���������Ƿ��� true ��
    
    ʾ�� 2��
    ���룺root = [0]
    �����false
    ���ͣ����ڵ���Ҷ�ӽڵ㣬��ֵΪ false���������Ƿ��� false ��
 
    ��ʾ��
    ���нڵ���Ŀ�� [1, 1000] ֮�䡣
    0 <= Node.val <= 3
    ÿ���ڵ�ĺ�����Ϊ 0 �� 2 ��
    Ҷ�ӽڵ��ֵΪ 0 �� 1 ��
    ��Ҷ�ӽڵ��ֵΪ 2 �� 3 ��
    */
    system("pause");
    return 0;
}