def bin_search(arr, key) -> int:
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = int(low + (high - low) / 2)
        if arr[mid] == key:
            return mid
        elif arr[mid] > key:
            high = mid - 1
        else:
            low = mid + 1

    return -1


arr = [3, 5, 7, 8, 9, 13, 19]
print(bin_search(arr, 13))
