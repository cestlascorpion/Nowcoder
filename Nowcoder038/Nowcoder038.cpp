//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder038.h"

int Nowcoder038::TreeDepth(TreeNode *pRoot) {
    if (pRoot == nullptr)
        return 0;
    return 1 + max(TreeDepth(pRoot->left),
                    TreeDepth(pRoot->right));
}
