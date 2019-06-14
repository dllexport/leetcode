package main

import (
	"strconv"
	"strings"
)

func reverseString(s string) string {
	runes := []rune(s)

	for from, to := 0, len(runes)-1; from < to; from, to = from+1, to-1 {
		runes[from], runes[to] = runes[to], runes[from]
	}

	return string(runes)
}

func reverse(x int) int {
	str := strconv.Itoa(x)
	negative := strings.Contains(str, "-")
	trimedStr := strings.TrimLeft(str, "-")

	reversedStr := reverseString(trimedStr)
	trimedStr = strings.TrimLeft(reversedStr, "0")
	i, _ := strconv.Atoi(trimedStr)
	if i > 2147483647 || i < -2147483648 {
		return 0
	}
	if negative {
		return -i
	} else {
		return i
	}
}

func main() {
	reverse(-1200)
}
