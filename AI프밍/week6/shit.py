class MyObject:
    def __init__(self):
        self._x = [1,2,3]
        self._y = 0
    def __setattr__(self, name, value):
        print(f"Setting {name} = {value}")
        super().__setattr__(name, value)

obj=MyObject()
obj._x[1]=20