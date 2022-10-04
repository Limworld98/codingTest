class Solution {
    fun solution(n: Int): Int {
        val myString = n.toString()
        var answer = 0

        for(i in myString) {
            answer += i.digitToInt()
        }
        return answer
    }
}
