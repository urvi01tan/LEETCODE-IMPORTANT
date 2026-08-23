class Solution {
public:
    bool sumGame(string num) {

        int n = num.size();

        // leftSum  = sum of fixed digits in the left half
        // rightSum = sum of fixed digits in the right half
        int leftSum = 0;
        int rightSum = 0;

        // leftQ  = number of '?' in the left half
        // rightQ = number of '?' in the right half
        int leftQ = 0;
        int rightQ = 0;


        // ---------------------------------------------------------
        // STEP 1: Calculate sum and '?' count for the LEFT half
        // ---------------------------------------------------------
        for (int i = 0; i < n / 2; i++) {

            if (num[i] == '?') {
                // This position is unknown
                leftQ++;
            }
            else {
                // Convert character digit to integer
                // Example: '7' - '0' = 7
                leftSum += num[i] - '0';
            }
        }


        // ---------------------------------------------------------
        // STEP 2: Calculate sum and '?' count for the RIGHT half
        // ---------------------------------------------------------
        for (int i = n / 2; i < n; i++) {

            if (num[i] == '?') {
                // This position is unknown
                rightQ++;
            }
            else {
                // Add the fixed digit to right half's sum
                rightSum += num[i] - '0';
            }
        }


        // ---------------------------------------------------------
        // STEP 3: Check if total number of '?' is ODD
        // ---------------------------------------------------------
        //
        // Alice and Bob take turns.
        //
        // Example:
        // 5 '?' -> Alice, Bob, Alice, Bob, Alice
        //
        // Alice gets the LAST move.
        //
        // Alice can always choose the last digit in such a way
        // that the two sums become different.
        //
        // Therefore Alice wins immediately.
        // ---------------------------------------------------------

        if ((leftQ + rightQ) % 2 == 1)
            return true;


        // ---------------------------------------------------------
        // STEP 4: EVEN number of '?'
        // ---------------------------------------------------------
        //
        // Now Bob gets the last move.
        //
        // Bob can respond to Alice's moves and try to cancel
        // their effect.
        //
        // Question marks on opposite halves can effectively
        // be paired:
        //
        //      LEFT ?  <---->  RIGHT ?
        //
        // These pairs can be neutralized by Bob.
        //
        // Therefore, only the DIFFERENCE between the number
        // of '?' in the two halves matters.
        //
        // Example:
        //
        // leftQ  = 6
        // rightQ = 2
        //
        // Difference = 6 - 2 = 4
        //
        // Since Alice and Bob play alternately, 2 '?' form
        // one Alice-Bob pair:
        //
        //      4 / 2 = 2 effective pairs
        //
        // Alice can create a difference of 9 for each such pair.
        //
        // Therefore the total difference that can be created is:
        //
        //      9 * (leftQ - rightQ) / 2
        //
        // Depending on which half has more '?', the sign changes.
        // We use:
        //
        //      9 * (rightQ - leftQ) / 2
        //
        // when comparing with (leftSum - rightSum).
        // ---------------------------------------------------------


        // Current difference created by the fixed digits
        int fixedDifference = leftSum - rightSum;


        // Difference that the '?' positions can compensate for
        int questionDifference =
            9 * (rightQ - leftQ) / 2;


        // ---------------------------------------------------------
        // STEP 5: Check whether Bob can make the final difference 0
        // ---------------------------------------------------------
        //
        // Final difference:
        //
        //      fixedDifference + effect of '?'
        //
        // Bob wins only when this becomes exactly 0.
        //
        // That is equivalent to:
        //
        //      leftSum - rightSum
        //          ==
        //      9 * (rightQ - leftQ) / 2
        //
        // If equal -> Bob wins -> return false
        //
        // Otherwise -> Alice wins -> return true

        if (fixedDifference == questionDifference)
            return false;   // Bob wins

        return true;        // Alice wins
    }
};