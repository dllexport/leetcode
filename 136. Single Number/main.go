package main

func singleNumber(nums []int) int {

	res := 0
	for _, val := range nums {
		res ^= val
	}
	return res
}

func main() {
	singleNumber([]int{4, 1, 2, 1, 2})
}
