import java.util.Arrays;
import java.util.Scanner;

public class Tourist {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int N = scanner.nextInt();
            long[] floors = new long[N];

            for (int i = 0; i < N; i++) {
                floors[i] = scanner.nextLong();
            }

            int C = scanner.nextInt();

            Arrays.sort(floors);

            long low = 0, high = floors[N - 1], result = -1;

            while (low <= high) {
                long mid = low + (high - low) / 2;

                if (isPossible(floors, C, mid)) {
                    result = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            System.out.println(result);
        }
    }

    private static boolean isPossible(long[] floor, int c, long mid) {
        int count = 1;
        long prev = floor[0];

        for (int i = 1; i < floor.length; i++) {
            if (floor[i] - prev >= mid) {
                count++;
                prev = floor[i];
            }
        }

        return count >= c;
    }
}
