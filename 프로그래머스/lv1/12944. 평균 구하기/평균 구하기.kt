class Solution {
    fun solution(arr: IntArray): Double {
        var answer = 0.0

        for(nums in arr)
            answer += nums
        answer /= arr.size

        return answer
    }
}
