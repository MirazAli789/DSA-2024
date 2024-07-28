def bin_search(arr, key, low, high) -> int:

    if low > high:
        return -1

    mid = int(low + (high - low) / 2)
    if arr[mid] == key:
        return mid
    elif arr[mid] > key:
        return bin_search(arr, key, low, mid - 1)
    elif arr[mid] < key:
        return bin_search(arr, key, mid + 1, high)


arr = [3, 4, 6, 8, 9, 14, 19]
print(bin_search(arr, 9, 0, len(arr) - 1))
