package main

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func maxDepth(root *TreeNode) int {
	currentDepth := 0
	maxDepth := 0
	preOrder(root, &currentDepth, &maxDepth)
	return maxDepth
}

func preOrder(node *TreeNode, currentDepth *int, maxDepth *int) {
	if node == nil {
		return
	}
	*currentDepth++
	if *currentDepth > *maxDepth {
		*maxDepth = *currentDepth
	}
	preOrder(node.Left, currentDepth, maxDepth)
	preOrder(node.Right, currentDepth, maxDepth)

	*currentDepth--
}

func main() {
	n1 := new(TreeNode)
	n2 := new(TreeNode)
	n3 := new(TreeNode)
	n4 := new(TreeNode)
	n5 := new(TreeNode)
	n1.Val = 3
	n2.Val = 9
	n3.Val = 20
	n4.Val = 15
	n5.Val = 7
	n1.Left = n2
	n1.Right = n3
	n3.Left = n4
	n3.Right = n5
	maxDepth(n1)
}
