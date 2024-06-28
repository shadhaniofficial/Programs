def bubble_sort(arr):
    n = len(arr)
    swaps = 0
    iterations = 0
    for i in range(n):
        for j in range(0, n-i-1):
            iterations += 1
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swaps += 1
    return arr, swaps, iterations

def insertion_sort(arr):
    swaps = 0
    iterations = 0
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1
        while j >= 0 and key < arr[j]:
            iterations += 1
            arr[j + 1] = arr[j]
            j -= 1
            swaps += 1
        arr[j + 1] = key
        iterations += 1  # for the while check
    return arr, swaps, iterations

def selection_sort(arr):
    swaps = 0
    iterations = 0
    for i in range(len(arr)):
        min_idx = i
        for j in range(i+1, len(arr)):
            iterations += 1
            if arr[min_idx] > arr[j]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
        if i != min_idx:
            swaps += 1
    return arr, swaps, iterations

def merge_sort(arr):
    swaps = [0]
    iterations = [0]
    def merge_sort_recursive(arr):
        if len(arr) > 1:
            mid = len(arr) // 2
            L = arr[:mid]
            R = arr[mid:]
            
            merge_sort_recursive(L)
            merge_sort_recursive(R)
            
            i = j = k = 0
            
            while i < len(L) and j < len(R):
                iterations[0] += 1
                if L[i] < R[j]:
                    arr[k] = L[i]
                    i += 1
                else:
                    arr[k] = R[j]
                    j += 1
                    swaps[0] += 1
                k += 1
            
            while i < len(L):
                iterations[0] += 1
                arr[k] = L[i]
                i += 1
                k += 1
            
            while j < len(R):
                iterations[0] += 1
                arr[k] = R[j]
                j += 1
                k += 1
    
    merge_sort_recursive(arr)
    return arr, swaps[0], iterations[0]

def quick_sort(arr):
    swaps = [0]
    iterations = [0]
    def quick_sort_recursive(arr, low, high):
        if low < high:
            pi = partition(arr, low, high)
            quick_sort_recursive(arr, low, pi-1)
            quick_sort_recursive(arr, pi+1, high)
    
    def partition(arr, low, high):
        pivot = arr[high]
        i = low - 1
        for j in range(low, high):
            iterations[0] += 1
            if arr[j] < pivot:
                i += 1
                arr[i], arr[j] = arr[j], arr[i]
                swaps[0] += 1
        arr[i+1], arr[high] = arr[high], arr[i+1]
        swaps[0] += 1
        return i + 1
    
    quick_sort_recursive(arr, 0, len(arr) - 1)
    return arr, swaps[0], iterations[0]

def my_sort_count_swaps(arr):
    c = 0
    it = 0
    for i in range(1, len(arr)):
        if arr[i] < arr[i-1]:
            j = i
            while j > 0 and arr[j-1] > arr[j]:
                # Swap
                arr[j-1], arr[j] = arr[j], arr[j-1]
                j -= 1
                c += 1
                it +=1
            continue
        it+=1
    return arr, c, it

# Testing the algorithms
import random

def test_sorts():
    arr = [random.randint(1, 10000) for _ in range(10000)]
    #print("Original array:", arr)

    results = []
    for sort_func in [bubble_sort, insertion_sort, selection_sort, merge_sort, quick_sort, my_sort_count_swaps]:
        arr_copy = arr[:]
        sorted_arr, swaps, iterations = sort_func(arr_copy)
        total = swaps + iterations
        results.append((sort_func.__name__, swaps, iterations, total, sorted_arr))
    
    results.sort(key=lambda x: x[3])  # Sort by total (swaps + iterations)

    for result in results:
        print(f"{result[0]}: Swaps={result[1]}, Iterations={result[2]}, Total={result[3]}")

test_sorts()

