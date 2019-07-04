package main

import (
	"fmt"
)

func removeIndex(s []rune, index int) []rune {
	return append(s[:index], s[index+1:]...)
}

func removeDuplicates(S string) string {
	for {
		flag := false

		for i := 0; i < len(S)-1; i++ {
			fmt.Printf("%d:%c \n", i, S[i])
			if S[i] == S[i+1] {
				S = string(removeIndex(removeIndex([]rune(S), i), i))
				flag = true
				break
			}
		}
		if !flag {
			return S
		}
	}

}

func main() {
	println(removeDuplicates(""))
}
