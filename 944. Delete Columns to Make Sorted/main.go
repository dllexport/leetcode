package main

import "fmt"

func minDeletionSize(A []string) int {

	if A == nil {
		return 0
	}
	var arrSize = len(A)
	if arrSize == 0 {
		return 0
	}
	var elemSize = len(A[0])
	var res int
	for i := 0; i < elemSize; i++ {
		for j := 1; j < arrSize; j++ {
			//fmt.Printf("%c < %c ?\n", A[j][i], A[j-1][i])
			if A[j][i] < A[j-1][i] {
				res++
				break
			}
		}
	}
	return res
}

func main() {
	var test [3]string
	test[0] = "zyx"
	test[1] = "wvu"
	test[2] = "tsr"
	res := minDeletionSize(test[:])
	println(res)
}
