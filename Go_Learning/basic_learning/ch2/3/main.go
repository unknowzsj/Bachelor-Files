package main

var pc [256]byte

func init() {
	for i := range pc {
		pc[i] = pc[i/2] + byte(i&1)
	}
}

func Popcount(x uint64) int {
	var ret byte

	for i := 0; i < 8; i++ {
		ret += pc[byte(x>>(i*8))]
	}
	return int(ret)
}
