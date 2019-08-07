def areEqual(arr1, arr2, m, n):
    if m != n:
        return False

    arr1.sort()
    arr2.sort()

    for i in range(0, n):
        if arr1[i] != arr2[i]:
            return False

    return True


# Driver code
# arr1 = [2, 5, 7]
# arr2 = [2, 5, 10]
arr1 = list(input("Enter arr1= "))
arr2 = list(input("Enter arr2= "))
m = len(arr1)
n = len(arr2)
if areEqual(arr1, arr2, m, n):
    print("Equal")
else:
    print("Not Equal")
