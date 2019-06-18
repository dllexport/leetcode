package main
import "math"
func mySqrt(x int) int {	
	return int(math.Floor(math.Sqrt(float64(x))))
}

func main() {
	println(mySqrt(8))
}