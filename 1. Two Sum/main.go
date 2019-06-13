package main

import "fmt"

func twoSum(nums []int, target int) []int {
	var res []int
	for index, number := range nums {
		fmt.Printf("%d --> %d\n", index, number)
		for i := index + 1; i < len(nums); i++ {
			if nums[index]+nums[i] == target {
				res = append(res, index, i)
				return res
			}
		}
	}
	return nil
}

func main() {
	arr := []int{2, 7, 11, 15}
	twoSum(arr, 9)
}
