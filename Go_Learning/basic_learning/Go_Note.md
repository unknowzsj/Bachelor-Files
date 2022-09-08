# Go 笔记
1、strconv : 基本数据类型和字符串建的转换

   strconv.ParseFloat(s string,bitsize int) : 解析浮点字符串返回其值（bitsize 确定float32或64）
        
   用法：strconv.ParseFloat("32.5",32)

2、输出 gif动画  name.exe >pname.gif

3、go build 只要到文件夹路径也可以，文件夹中只有一个go文件的时候