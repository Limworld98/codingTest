class Solution {
    public int[] solution(int[] arr) {
        int min = arr[0];
        int mindex = 0;
        boolean flag = false;
        int[] answer = {};
        if(arr.length == 1) {
            answer = new int[1];
            answer[0] = -1;
        }
        else {
            answer = new int[arr.length-1];
            for (int i = 0; i < arr.length; i++) {
                if (arr[i] < min) {
                    min = arr[i];
                    mindex = i;
                }
            }
            for (int i = 0; i < arr.length; i++) {
                if (i == mindex) {
                    flag= true;
                    continue;
                }
                else if(!flag) {
                    answer[i] = arr[i];
                }
                else if(flag) {
                    answer[i-1] = arr[i];
                }
            }
        }

        for(int i = 0 ; i < answer.length; i++)
            System.out.println(answer[i]);

        return answer;
    }
}