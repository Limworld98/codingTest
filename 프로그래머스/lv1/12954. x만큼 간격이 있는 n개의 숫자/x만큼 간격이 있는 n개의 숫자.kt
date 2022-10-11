class Solution {
    fun solution(x: Int, n: Int): ArrayList<Long> {
        var answer = ArrayList<Long>()
        var temp = x.toLong()
        for(i in 1..n) {
            answer.add(temp.toLong())
            temp += x.toLong()
        }
        return answer
    }
}
