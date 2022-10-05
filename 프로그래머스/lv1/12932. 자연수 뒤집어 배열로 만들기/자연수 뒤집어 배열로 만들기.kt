class Solution {
    fun solution(n: Long): ArrayList<Int> {
        var aryList = ArrayList<Int>()
        var myString =  n.toString()
        myString = myString.reversed()
        for(s in myString)
            aryList.add(s-'0')
        return aryList
    }
}
