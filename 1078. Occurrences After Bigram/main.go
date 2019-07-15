package main

import "strings"
import "fmt"

var ch = make(chan []string)

func findOcurrences(text string, first string, second string) []string {

	resArr := []string{}

	res := strings.Split(text, " ")

	for i := 0; i < len(res)-2; i++ {
		if res[i] == first && res[i+1] == second {
			resArr = append(resArr, res[i+2])
		}
	}

	ch <- resArr
	return resArr

}

func main() {
	go findOcurrences("alice is a good girl she is a good student", "a", "good")
	fmt.Printf("res %v\n", <-ch)
}
