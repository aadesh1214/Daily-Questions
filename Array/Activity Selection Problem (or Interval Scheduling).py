Scenario 8: GPU Job Scheduling (Optimization)

You have a single GPU dedicated to running a batch of document processing jobs. Throughout the day, various teams submit job requests. Each job has a specific start_time and an end_time (represented as integers from 0 to 24 for simplicity).

The GPU can only run one job at a time.

The Task:
Write a Python function max_processed_jobs(jobs: list[tuple]) -> int that calculates the maximum number of non-overlapping jobs the single GPU can complete.

Requirements:

Efficiency: The list of jobs could be massive. Your solution must be optimized and run in O(NlogN) time complexity.

Edge Cases: If the list is empty, return 0. If jobs start and end at the exact same time (e.g., Job A ends at 5, Job B starts at 5), they do not overlap and can both be executed.


  def max_processed_jobs(jobs: list[tuple]) -> int:
    # Edge case: No jobs in the queue
    if not jobs:
        return 0

    # 1. Sort the jobs by their end_time (the second element in the tuple)
    # Python's built-in sorted() uses Timsort, which is O(N log N)
    sorted_jobs = sorted(jobs, key=lambda x: x[1])
    print(sorted_jobs)

    # 2. Initialize our counters
    count = 0
    last_end_time = -1  # Keeps track of when the GPU becomes free
    
    # 3. Iterate through the sorted jobs (O(N) time)
    for start, end in sorted_jobs:
        print(start,end)
        # If the GPU is free when this job wants to start, schedule it!
        if start >= last_end_time:
            print("hereeee-----",start,last_end_time)
            count += 1
            last_end_time = end  # The GPU is now busy until this job finishes
            
    return count

# --- Testing the code ---
jobs = [(1, 4), (3, 5), (0, 6), (5, 7), (3, 9), (5, 9), (6, 10), (8, 11), (8, 12), (2, 14), (12, 16)]

print(f"Maximum non-overlapping jobs: {max_processed_jobs(jobs)}")
# Output: 4
