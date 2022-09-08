//将磅转换为千克
package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	for _, pound := range os.Args[1:] {
		wgt, err := strconv.ParseFloat(pound, 64)
		if err != nil {
			fmt.Fprintf(os.Stderr, "cf: %v\n", err)
			os.Exit(1)
		}
		b := BToK(wgt)
		k := KToB(wgt)
		fmt.Printf("%f pound = %f kg, %f kg = %f pound\n", wgt, b, wgt, k)
	}
}

func BToK(b float64) float64 {
	return b * 0.45
}

func KToB(k float64) float64 {
	return k / 0.45
}
