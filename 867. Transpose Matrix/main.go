package main

func transpose(A [][]int) [][]int {
	arr := make([][]int, len(A[0]))
	for i := range A[0] {
		arr[i] = append(make([]int, len(A)))
	}
	for i := range A[:] {
		for j := range A[0] {
			arr[j][i] = A[i][j]
		}
	}
	return arr
}

func main() {
	arr := [][]int{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}
	transpose(arr)
}
