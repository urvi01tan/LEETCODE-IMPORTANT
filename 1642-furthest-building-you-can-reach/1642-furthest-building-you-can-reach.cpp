class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {

        int n = heights.size();

        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n - 1; i++) {

            if (heights[i] >= heights[i + 1])
                continue;

            int diff = heights[i + 1] - heights[i];

            // Initially use ladder
            pq.push(diff);
            ladders--;

            // Too many ladders used
            if (ladders < 0) {

                // Convert smallest ladder usage into bricks
                int smallest = pq.top();
                pq.pop();

                bricks -= smallest;
                ladders++;
            }

            // Cannot cross this jump
            if (bricks < 0)
                return i;
        }

        return n - 1;
    }
};