import java.util.ArrayList;
import java.util.List;

import static java.util.Collections.sort;

class Solution {
    public String solution(String s) {
        String answer = "";
        String[] myString = s.split(" ");
        List<Integer> myList = new ArrayList<Integer>();

        for(int i = 0 ; i < myString.length; i++)
            myList.add(Integer.parseInt(myString[i]));

        sort(myList);

        answer += Integer.toString(myList.get(0));
        answer += " ";
        answer += Integer.toString(myList.get(myList.size()-1));


        return answer;
    }
}
