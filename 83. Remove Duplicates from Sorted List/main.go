package main

type ListNode struct {
	Val  int
	Next *ListNode
}

func deleteDuplicates(head *ListNode) *ListNode {
	if head == nil {
		return nil
	}
	for p := head; ; {
		for {
			if p.Next == nil {
				return head
			}
			if p.Val == p.Next.Val {
				p.Next = p.Next.Next
			} else {
				break
			}
		}
		p = p.Next
	}
}

func main() {
	n1 := new(ListNode)
	n2 := new(ListNode)
	n3 := new(ListNode)
	n1.Val = 1
	n2.Val = 1
	n3.Val = 2
	n1.Next = n2
	n2.Next = n3
	deleteDuplicates(n1)
}
