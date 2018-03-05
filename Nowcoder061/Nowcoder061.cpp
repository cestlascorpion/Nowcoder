//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder061.h"

char *Nowcoder061::Serialize(TreeNode *root) {
    if (root == nullptr)
        return nullptr;
    string str;
    Serialize(root, str);
    char *ret = new char[str.length() + 1];
    int i;
    for (i = 0; i < str.length(); i++) {
        ret[i] = str[i];
    }
    ret[i] = '\0';
    return ret;
}

void Nowcoder061::Serialize(TreeNode *root, string &str) {
    if (root == nullptr) {
        str += '#';
        return;
    }
    string r = to_string(root->val);
    str += r;
    str += ',';
    Serialize(root->left, str);
    Serialize(root->right, str);
}

TreeNode *Nowcoder061::Deserialize(char *str) {
    if (str == nullptr)
        return nullptr;
    TreeNode *ret = Deserialize(&str);

    return ret;
}

TreeNode *Nowcoder061::Deserialize(char **str) { //由于递归时，会不断的向后读取字符串
    if (**str == '#') {             //所以一定要用**str,
        ++(*str); //以保证得到递归后指针str指向未被读取的字符
        return nullptr;
    }
    int num = 0;
    while (**str != '\0' && **str != ',') {
        num = num * 10 + ((**str) - '0');
        ++(*str);
    }
    TreeNode *root = new TreeNode(num);
    if (**str == '\0')
        return root;
    else
        (*str)++;
    root->left = Deserialize(str);
    root->right = Deserialize(str);
    return root;
}
