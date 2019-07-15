package main

import "strings"

func defangIPaddr(address string) string {
	sp := strings.Split(address, ".")
	res := ""
	for i, s := range sp {
		res += s
		if i != len(sp)-1 {
			res += "[.]"
		}
	}

	return res
}

func main() {

}
