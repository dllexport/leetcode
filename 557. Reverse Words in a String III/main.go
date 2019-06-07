func reverseWords(s string) string {
	strArr := strings.Split(s, " ")
	var strRes string
	for index, str := range strArr {

		var strTmp string
		for _, i := range str {
			strTmp = string(i) + strTmp
		}

		strRes += strTmp
		if index != len(strArr)-1 {
			strRes += " "
		}
	}

	return strRes
}