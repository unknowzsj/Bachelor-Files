//将每个像素分成4个子像素，来实现超采样（减少锯齿）
//未解决
package main

import (
	"image"
	"image/color"
	"image/png"
	"math/cmplx"
	"os"
)

func main() {
	const (
		xmin, ymin, xmax, ymax = -2, -2, +2, +2
		width, height          = 1024, 1024
	)

	img := image.NewRGBA(image.Rect(0, 0, width, height))
	for py := 0; py < height; py++ {
		y := float64(py)/height*(ymax-ymin) + ymin
		y = y - 1
		for px := 0; px < width; px++ {
			x := float64(px)/width*(xmax-xmin) + xmin
			x = x - 1
			//for i := 1; i <= 2; i++ {
			//	for j := 1; j <= 2; j++ {
			//		z := complex(x+i*0.5, y+j*0.5)
			//		// Image point (px, py) represents complex value z.
			//		img.Set(px, py, mandelbrot(z))
			//	}
			//}
		}
	}
	png.Encode(os.Stdout, img) // NOTE: ignoring errors
}

func mandelbrot(z complex128) color.Color {
	const iterations = 200
	const contrast = 15

	var v complex128
	for n := uint8(0); n < iterations; n++ {
		v = v*v + z
		if cmplx.Abs(v) > 2 {
			return color.Gray{255 - contrast*n}
		}
	}
	blue := uint8(real(v)*128) + 127
	red := uint8(imag(v)*128) + 127
	//return color.White  //返回黑色
	return color.YCbCr{192, blue, red} //返回彩色
}

// Some other interesting functions:
//对应5_2.png
func acos(z complex128) color.Color {
	v := cmplx.Acos(z)
	blue := uint8(real(v)*128) + 127
	red := uint8(imag(v)*128) + 127
	return color.YCbCr{192, blue, red}
}

//对应5_3.png
func sqrt(z complex128) color.Color {
	v := cmplx.Sqrt(z)
	blue := uint8(real(v)*128) + 127
	red := uint8(imag(v)*128) + 127
	return color.YCbCr{128, blue, red}
}

// f(x) = x^4 - 1
//
// z' = z - f(z)/f'(z)
//    = z - (z^4 - 1) / (4 * z^3)
//    = z - (z - 1/z^3) / 4
//对应5_4.png
func newton(z complex128) color.Color {
	const iterations = 37
	const contrast = 7
	for i := uint8(0); i < iterations; i++ {
		z -= (z - 1/(z*z*z)) / 4
		if cmplx.Abs(z*z*z*z-1) < 1e-6 {
			return color.Gray{255 - contrast*i}
		}
	}
	return color.Black
}
