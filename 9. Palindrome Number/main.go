package main

import (
	"strconv"
)

func reverseString(s string) string {
	runes := []rune(s)

	for from, to := 0, len(runes)-1; from < to; from, to = from+1, to-1 {
		runes[from], runes[to] = runes[to], runes[from]
	}

	return string(runes)
}

func isPalindrome(x int) bool {
	xStr := strconv.Itoa(x)
	return xStr == reverseString(xStr)
}

func main() {
	isPalindrome(123)
}
