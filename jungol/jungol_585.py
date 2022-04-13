def printArr(arr):
    for i in arr:
        print(i, end=' ')
    print('')

def boubleSort(arr):
    for i in range(len(arr)-1, 0, -1):
        for j in range(0, i):
            if arr[j] < arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
        printArr(arr)
    return arr


inputArr = input("").split()
inputArr = list(map(int, inputArr))
boubleSort(inputArr)