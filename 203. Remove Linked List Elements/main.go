package main

type ListNode struct {
	Val  int
	Next *ListNode
}

func removeElements(head *ListNode, val int) *ListNode {
	p := head
	var pre *ListNode = nil
	for ; p != nil; p = p.Next {

		if p.Val != val {
			pre = p
			continue
		}
		// now val found
		if pre != nil {
			pre.Next = p.Next
		} else {
			head = head.Next
		}
	}
	return head
}

func main() {
	n1 := new(ListNode)
	n2 := new(ListNode)
	n3 := new(ListNode)
	n4 := new(ListNode)
	n5 := new(ListNode)
	n6 := new(ListNode)
	n7 := new(ListNode)

	n1.Val = 1
	n2.Val = 2
	n3.Val = 3
	n4.Val = 4
	n5.Val = 5
	n6.Val = 6
	n7.Val = 6

	n1.Next = n2
	n2.Next = n6
	n6.Next = n3
	n3.Next = n4
	n4.Next = n5
	n5.Next = n7
	removeElements(n1, 6)
}
