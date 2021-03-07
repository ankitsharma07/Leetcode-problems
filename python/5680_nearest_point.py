#!/usr/bin/env python3

class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        position = -1
        min = 200000

        for i in points:
            if points[i][0] == x or points[i][1] == y:
                manhattan_dis = abs(x - points[i][0]) + abs(y - points[i][1])

                if manhattan_dis < min:
                    min = manhattan_dis
                    position = i

        return position
