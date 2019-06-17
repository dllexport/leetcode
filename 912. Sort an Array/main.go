package main

import "fmt"

func partition(nums []int, low, high int) int {
	pivot := nums[high]
	i := low - 1
	for j := low; j <= high-1; j++ {
		if nums[j] <= pivot {
			i++
			tmp := nums[i]
			nums[i] = nums[j]
			nums[j] = tmp
		}
	}
	tmp := nums[i+1]
	nums[i+1] = nums[high]
	nums[high] = tmp
	return i + 1
}

func quickSort(nums []int, low, high int) {
	if low < high {
		mid := partition(nums, low, high)
		quickSort(nums, low, mid-1)
		quickSort(nums, mid+1, high)
	}
}

func sortArray(nums []int) []int {
	quickSort(nums, 0, len(nums)-1)
	return nums
}

func main() {
	arr := []int{5, 3, 4, 1}
	res := sortArray(arr)
	fmt.Println(res)
}
