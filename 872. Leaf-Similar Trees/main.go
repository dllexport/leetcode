package main

import (
	"reflect"
)

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func leafSimilar(root1 *TreeNode, root2 *TreeNode) bool {
	leaflist1 := make([]int, 0)
	inOrder(root1, &leaflist1)
	leaflist2 := make([]int, 0)
	inOrder(root2, &leaflist2)

	return reflect.DeepEqual(leaflist1, leaflist2)
}

func inOrder(tree *TreeNode, leaflist *[]int) {
	if tree == nil {
		return
	}
	inOrder(tree.Left, leaflist)
	if tree.Left == nil && tree.Right == nil {
		*leaflist = append(*leaflist, tree.Val)
	}
	inOrder(tree.Right, leaflist)
}

func main() {

}
