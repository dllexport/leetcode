package main

import (
	"sort"
)

func arrayPairSum(nums []int) int {

	sort.Ints(nums)
	var sum int
	for i := 0; i < len(nums)/2; i++ {
		sum += nums[2*i]
	}

	return sum
}

func main() {
	arrayPairSum([]int{1, 4, 3, 2})
}
