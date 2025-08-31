import java.util.*;

class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; next = null; }
}

public class Main {
    public static int longestArithmeticProgression(ListNode head) {
        if (head == null || head.next == null) return (head == null) ? 0 : 1;
        
        List<Integer> values = new ArrayList<>();
        while (head != null) {
            values.add(head.val);
            head = head.next;
        }
        
        int n = values.size();
        int maxLen = 1;
        
        // Fix: Use `@SuppressWarnings("unchecked")` and initialize the array safely
        @SuppressWarnings("unchecked")
        HashMap<Integer, Integer>[] dp = (HashMap<Integer, Integer>[]) new HashMap[n];
        
        for (int i = 0; i < n; i++) {
            dp[i] = new HashMap<>();
        }
        
        for (int i = 1; i < n; i++) {
            for (int j = i - 1; j >= 0; j--) {
                int diff = values.get(i) - values.get(j);
                int len = dp[j].getOrDefault(diff, 1) + 1;
                dp[i].put(diff, Math.max(dp[i].getOrDefault(diff, 1), len));
                maxLen = Math.max(maxLen, dp[i].get(diff));
            }
        }
        
        return maxLen;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (n == 0) {
            System.out.println(0);
            return;
        }
        
        int[] values = new int[n];
        for (int i = 0; i < n; i++) {
            values[i] = sc.nextInt();
        }
        
        ListNode head = new ListNode(values[0]);
        ListNode current = head;
        for (int i = 1; i < values.length; i++) {
            current.next = new ListNode(values[i]);
            current = current.next;
        }
        
        int result = longestArithmeticProgression(head);
        System.out.println(result);
    }
}
