class A:
    def __init__(self):
        self.a=10

class B(A):
    def __init__(self):
        super().__init__()
        self.b=4
        
class C(B):
    def __init__(self):
        super().__init__()
        self.c=1

obj=C()
print(isinstance(obj,A))
a=10
print()
