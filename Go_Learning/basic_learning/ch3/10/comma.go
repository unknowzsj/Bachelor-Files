package main

import (
	"bytes"
	"fmt"
)

func main() {
	out := comma("12345")
	fmt.Printf(out)
}
func comma(s string) string {
	var str bytes.Buffer
	n := len(s)
	if n <= 3 {
		return s
	} else {
		m := n % 3
		for i := 0; i < m-1; i++ {
			fmt.Fprintf(&str, "%s", s[i])
		}
		str.WriteString(",")
		for j := 1; j <= n-m; j++ {
			if j%3 == 0 {
				str.WriteString(",")
			}
			fmt.Fprintf(&str, "%d", s[j+m])
		}
	}
	return str.String()
}
