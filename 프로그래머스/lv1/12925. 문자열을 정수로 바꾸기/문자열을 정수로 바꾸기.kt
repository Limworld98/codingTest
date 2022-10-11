class Solution {
    fun solution(s: String): Int {
        var answer = 0
        answer = if(s[0] == '-')
            0 - s.substring(1,s.length).toInt()
        else
            s.toInt()

        return answer
    }
}