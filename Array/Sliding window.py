Scenario 6: Token Confidence Aggregation

Imagine your text extraction model processes a document and outputs a 1D list of confidence scores (floats between 0.0 and 1.0) for every consecutive word. You need to find the most confident sequence of words of a specific length k to extract as a single entity (like a multi-word employer name).

The Task:
Write a Python function max_confidence_window(scores: list, k: int) -> float that finds the maximum sum of a contiguous subarray of size k.

Requirements:

Efficiency is key: The array of scores could be tens of thousands of tokens long. Your solution must run in O(N) time complexity. (Hint: Do not use nested for loops that recalculate the sum from scratch every time you move forward).

Edge Cases: If the length of the scores list is less than k, return 0.0.


def max_confidence_window(scores: list, k: int) -> float:
    if len(scores) < k:
        return 0.0
        
    current_window_sum = sum(scores[:k])
    max_sum = current_window_sum
    
    for i in range(k, len(scores)):
        current_window_sum = current_window_sum - scores[i - k] + scores[i]
        
        if current_window_sum > max_sum:
            max_sum = current_window_sum
            
    return round(max_sum, 4)

scores = [0.1, 0.8, 0.9, 0.2, 0.4, 0.9, 0.8, 0.1]
k = 3

print(f"Maximum confidence score for window size {k}: {max_confidence_window(scores, k)}")


