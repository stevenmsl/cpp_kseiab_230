#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <iostream>
using namespace sol230;
using namespace std;

/*takeaways
  - use inorder traversal as you need to find the
    kth smallest number
  - time complexity: O(n)
*/

int Solution::kthSmallest(Node *root, int k)
{
  return _inorder(root, k);
}

int Solution::_inorder(Node *root, int &k)
{
  if (root == nullptr)
    return -1;
  /* left child is the kth smallest number */
  auto val = _inorder(root->left, k);
  if (k == 0)
    return val;
  /* the root is the kth smallest number */
  if (--k == 0)
    return root->val;

  /* now you need to look at the right child */

  return _inorder(root->right, k);
}
