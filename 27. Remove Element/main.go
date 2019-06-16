package main

func removeElement(nums []int, val int) int {
	count := 0
	for i := 0; i < len(nums); i++ {
		if nums[i] != val {
			count++
			continue
		}
		swapFlag := false
		for j := i + 1; j < len(nums); j++ {
			if nums[j] != val {
				nums[i] = nums[j]
				nums[j] = val
				swapFlag = true
				count++
				break
			}
		}
		if !swapFlag {
			break
		}
	}

	return count
}

func main() {
	arr := []int{3, 2, 2, 3}
	res := removeElement(arr, 3)
	println(res)
}
