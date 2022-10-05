import kotlin.math.*

class Solution {
    fun solution(n: Long): Long {

        var mySqrt = sqrt(n.toDouble())
        if(mySqrt % 1 == 0.0)
            return Math.pow(mySqrt+1,2.0).toLong()
        else
            return -1
    }
}