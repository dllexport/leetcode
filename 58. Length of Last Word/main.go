package main

import "strings"

func lengthOfLastWord(s string) int {
	res := strings.Split(s, " ")
	for i := len(res) - 1; i >= 0; i-- {
		if res[i] != "" {
			return len(res[i])
		}
	}
	return 0
}

func main() {
	lengthOfLastWord("")
}
