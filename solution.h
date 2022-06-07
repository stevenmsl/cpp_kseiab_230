
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol230
{

  class Solution
  {
  private:
    int _inorder(Node *root, int &k);

  public:
    int kthSmallest(Node *root, int k);
  };

}
#endif