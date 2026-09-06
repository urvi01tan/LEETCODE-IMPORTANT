class Solution:
    def countCollisions(self, directions: str) -> int:
        directions=directions.lstrip('L')
        directions=directions.rstrip('R')
        ##jitni bhi moving cars hai sab colide karegiii
        return directions.count('L')+directions.count('R')
        