package main

func searchInsert(nums []int, target int) int {
	for index, num := range nums {
		if target > num {
			continue
		}
		return index
	}
	return len(nums)
}

func main() {
	arr := []int{1, 3, 5, 6}
	searchInsert(arr, 5)
}
