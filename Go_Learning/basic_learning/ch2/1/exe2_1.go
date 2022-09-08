//处理以开尔文为单位的温度值，将开尔文转换成摄氏度
//开头提示:go语言没有用到的变量、包、函数等都会警告甚至报错，如果是功能包，可以不去在意
package tempconv

import "fmt"

type Cellsius float64
type Fahrenheit float64

const (
	AbsoluteZeroC Fahrenheit = -273.15
	FreezigC      Cellsius   = 0
	BoilingC      Cellsius   = 100
)

func FToC(f Fahrenheit) Cellsius {
	fmt.Println("已返回开尔文转摄氏度的值")
	return Cellsius(f - AbsoluteZeroC)
}
