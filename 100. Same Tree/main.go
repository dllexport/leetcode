package main
import "reflect"

type TreeNode struct {
	Val int
	Left *TreeNode
	Right *TreeNode
}

func isSameTree(p *TreeNode, q *TreeNode) bool {
	
	plist := []int{}
	qlist := []int{}
	
	preTravel(p, &plist)
	preTravel(q, &qlist)
	inTravel(p, &plist)
	inTravel(q, &qlist)

	if reflect.DeepEqual(plist, qlist) {
		return true
	}
	return false
}

func preTravel(node *TreeNode, list *[]int) {
	if node == nil {
		*list = append(*list, -1)
		return
	}
	*list = append(*list, node.Val)
	preTravel(node.Left, list)
	preTravel(node.Right, list)
}

func inTravel(node *TreeNode, list *[]int) {
	if node == nil {
		*list = append(*list, -1)
		return
	}
	preTravel(node.Left, list)
	*list = append(*list, node.Val)
	preTravel(node.Right, list)
}

func main() {
	n1 := new (TreeNode)
	n2 := new (TreeNode)
	n3 := new (TreeNode)
	n4 := new (TreeNode)
	n1.Val = 1
	n2.Val = 2
	n3.Val = 1
	n4.Val = 2
	n1.Left = n2
	n3.Right = n4

	isSameTree(n1, n3)
}