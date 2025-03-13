class Test:
    x = 0 # class attribute c++에서 static 맴버와 같음
    def __init__(self, a):
        self.mine = a
        Test.x += 1
    def display_mine(self):
        return self.mine
    @classmethod
    def display_x(cls):
        return cls.x

print(Test.x) # class attribute Test.x
t = Test(3)
print(t.display_mine())
print(Test.x)
print(t.display_x())
# Question: at this point
print(t.x) # leads to error or print 1