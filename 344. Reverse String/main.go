package main

func reverseString(s []byte) {
	arrLen := len(s)
	for i := 0; i < arrLen/2; i++ {
		tmp := s[i]
		s[i] = s[arrLen-1-i]
		s[arrLen-1-i] = tmp
	}
}

func main() {
	arr := []byte{'h', 'e', 'l', 'l', 'o'}
	reverseString(arr)
}
