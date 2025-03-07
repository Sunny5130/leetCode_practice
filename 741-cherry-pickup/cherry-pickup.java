
import java.util.Arrays;

class Solution {
    public int cherryPickup(int[][] grid) {
        int n = grid.length;

        int[][] prev = new int[n][n]; // Stores previous step DP states
        int[][] curr = new int[n][n]; // Stores current step DP states

        // Initialize DP array with -1 (representing unreachable states)
        for (int[] row : prev) Arrays.fill(row, Integer.MIN_VALUE);
        prev[0][0] = grid[0][0]; // Base case: Start at (0,0)

        // Iterate over all possible steps (total moves taken)
        for (int step = 1; step < 2 * n - 1; step++) {
            for (int[] row : curr) Arrays.fill(row, Integer.MIN_VALUE); // Reset current layer

            for (int r1 = Math.max(0, step - (n - 1)); r1 <= Math.min(n - 1, step); r1++) {
                for (int r2 = Math.max(0, step - (n - 1)); r2 <= Math.min(n - 1, step); r2++) {
                    int c1 = step - r1, c2 = step - r2;

                    // Out of bounds or obstacle check
                    if (c1 >= n || c2 >= n || grid[r1][c1] == -1 || grid[r2][c2] == -1) {
                        continue;
                    }

                    int cherries = grid[r1][c1];
                    if (r1 != r2) cherries += grid[r2][c2]; // Only count once if both are at the same cell

                    int bestPrev = Integer.MIN_VALUE;

                    // Transition from previous step states
                    if (r1 > 0 && r2 > 0) bestPrev = Math.max(bestPrev, prev[r1 - 1][r2 - 1]);
                    if (r1 > 0) bestPrev = Math.max(bestPrev, prev[r1 - 1][r2]);
                    if (r2 > 0) bestPrev = Math.max(bestPrev, prev[r1][r2 - 1]);
                    if (c1 > 0 && c2 > 0) bestPrev = Math.max(bestPrev, prev[r1][r2]);

                    if (bestPrev != Integer.MIN_VALUE) {
                        curr[r1][r2] = bestPrev + cherries;
                    }
                }
            }

            // Swap current and previous DP layers for the next iteration
            int[][] temp = prev;
            prev = curr;
            curr = temp;
        }

        return Math.max(0, prev[n - 1][n - 1]); // If unreachable, return 0
    }
}