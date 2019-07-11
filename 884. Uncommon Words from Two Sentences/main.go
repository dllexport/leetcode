package main

import "strings"

func Find(a []string, x string) []int {
	res := []int{}
	for i, n := range a {
		if x == n {
			res = append(res, i)
		}
	}
	return res
}

func uncommonFromSentences(A string, B string) []string {
	ARes := strings.Split(A, " ")
	BRes := strings.Split(B, " ")

	res := []string{}

	for _, str := range ARes {
		findRes := Find(ARes, str)
		if len(findRes) == 1 {
			findBRes := Find(BRes, str)
			if len(findBRes) == 0 {
				res = append(res, str)
			}
		}
	}
	for _, str := range BRes {
		findRes := Find(BRes, str)
		if len(findRes) == 1 {
			findARes := Find(ARes, str)
			if len(findARes) == 0 {
				res = append(res, str)
			}
		}
	}
	return res
}

func main() {
	A := "apple apple"
	B := "ffasdf"
	uncommonFromSentences(A, B)
}
