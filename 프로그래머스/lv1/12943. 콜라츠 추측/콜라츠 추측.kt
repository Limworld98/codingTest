class Solution {
    fun solution(num: Int): Int {
        var answer = 0
        var numm = num.toLong()
        while(answer < 500) {
            if(numm.toInt() == 1)
                break;

            if(numm.toInt() % 2 == 0)
                numm /= 2
            else
                numm = numm*3 + 1

            answer++
        }

        if(answer == 500)
            answer = -1

        return answer
    }
}