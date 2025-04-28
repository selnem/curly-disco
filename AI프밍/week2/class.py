class Circle:
    nCircles = 0
    def __init__(self, x, y, r):
        self.x = x
        self.y = y
        self.r = r
        Circle.nCircles += 1
    def __setattr__(self, name, value):
        print(f"Setting {name} to {value}")
        super().__setattr__(name, value)

c=Circle(1,2,3)
