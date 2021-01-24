#!/usr/bin/env python3

import math

def uniquePaths(m, n):
    i = m-1
    j = n-1

    output = math.factorial(i)/(math.factorial(j)(math.factorial(i-j)))

    print(output)

print(uniquePaths(7, 3))
