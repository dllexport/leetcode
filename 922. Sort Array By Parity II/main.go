package main

func sortArrayByParityII(A []int) []int {
	var mark int = 1

	for i := 0; i < len(A); i += 2 {
		if A[i]%2 == 0 {
			continue
		}
		for j := mark; j < len(A); j += 2 {
			if A[j]%2 == 0 {
				tmp := A[j]
				A[j] = A[i]
				A[i] = tmp
				mark = j + 2
				break
			}
		}
	}

	return A
}

func main() {
	sortArrayByParityII([]int{1, 0, 1, 2, 1, 0, 2, 1})
}
