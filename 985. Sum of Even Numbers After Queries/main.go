package main

func sumEvenAfterQueries(A []int, queries [][]int) []int {
	Answer := make([]int, len(A))
	for i := 0; i < len(A); i++ {
		val := queries[i][0]
		index := queries[i][1]
		A[index] += val
		for _, v := range A {
			if v%2 == 0 {
				Answer[i] += v
			}
		}
	}
	return Answer
}

func main() {
	A := []int{1, 2, 3, 4}
	Q := [][]int{{1, 0}, {-3, 1}, {-4, 0}, {2, 3}}
	sumEvenAfterQueries(A, Q)
}
