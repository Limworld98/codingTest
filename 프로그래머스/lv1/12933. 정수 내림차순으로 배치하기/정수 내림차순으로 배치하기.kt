class Solution {
    fun solution(n: Long): Long {
        var myString = n.toString()
        var myAry = arrayListOf<Int>()
        for(s in myString)
            myAry.add(s.digitToInt())

        myAry.sort()
        myAry.reverse()
        var answer = ""

        for(s in myAry)
            answer += s

        return answer.toLong()
    }
}
