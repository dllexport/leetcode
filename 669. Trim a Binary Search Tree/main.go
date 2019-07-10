package main

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func trimBST(root *TreeNode, L int, R int) *TreeNode {
	if root == nil {
		return nil
	}
	if root.Val < L {
		return trimBST(root.Right, L, R)
	}
	if root.Val > R {
		return trimBST(root.Left, L, R)
	}

	root.Left = trimBST(root.Left, L, R)
	root.Right = trimBST(root.Right, L, R)
	return root
}

func main() {
	n1 := new(TreeNode)
	n1.Val = 1
	n2 := new(TreeNode)
	n2.Val = 0
	n3 := new(TreeNode)
	n3.Val = 2

	n1.Left = n2
	n1.Right = n3
	trimBST(n1, 1, 2)
}
