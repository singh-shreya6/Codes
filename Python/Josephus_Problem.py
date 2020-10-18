'''
JOSEPHUS PROBLEM

There are n people standing in a circle waiting to be executed. The counting out begins at some point in the circle and proceeds around the circle in a fixed direction. In each step, k of people are skipped and the next person is executed. 
Find the position of person who will remain alive till end.
'''


def josephus(n, k) :
    if n == 1 :
        return 1
    else :
        return (josephus(n - 1, k) + k-1) % n + 1

n = int(input("Enter number of people"))
k = int(input("Enter K"))
print("The chosen place is ", josephus(n, k))
