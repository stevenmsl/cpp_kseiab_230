#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol230;

/*
Input: root = [3,1,4,null,2], k = 1
   3
  / \
 1   4
  \
   2
Output: 1

*/

tuple<Node *, int, int>
testFixture1()
{

  auto root = new Node(3);
  root->left = new Node(1);
  root->left->right = new Node(2);
  root->right = new Node(4);
  return make_tuple(root, 1, 1);
}

/*
Input: root = [5,3,6,2,4,null,null,1], k = 3
       5
      / \
     3   6
    / \
   2   4
  /
 1
Output: 3

*/

tuple<Node *, int, int>
testFixture2()
{

  auto root = new Node(5);
  root->left = new Node(3);
  root->left->left = new Node(2);
  root->left->left->left = new Node(1);
  root->left->right = new Node(4);
  return make_tuple(root, 3, 3);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  auto found = sol.kthSmallest(get<0>(f), get<1>(f));

  cout << "Expect to see : " << get<2>(f) << endl;
  cout << found << endl;
}

void test2()
{
  auto f = testFixture2();
  Solution sol;
  auto found = sol.kthSmallest(get<0>(f), get<1>(f));

  cout << "Expect to see : " << get<2>(f) << endl;
  cout << found << endl;
}

main()
{
  test1();
  test2();
}