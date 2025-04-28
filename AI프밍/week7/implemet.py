import torch
class MyBase(object):
    def __new__ (cls):
        print(f"myB.new called width{cls}")
        return super().__new__(cls)
    
class MyClass(MyBase):
    def __init__(self):
        print("myC.init call")

obj=MyClass()

class Myobject:
    def __init__(self):
        self._x=0
        self._y=0
    def __setattr__(self, name, value):# setattr 함수 오버라이딩
        print(f"setting {name}={value}")
        super().__setattr__(name,value)#object클래스의 setattr 실행

obj=Myobject()
obj.x=10
obj._x=20
print(obj.x)#
#위 super().__setattr__(name,value)을 지운다면
#오버라이딩된 my_obj클래스에 있는 함수만 실행, obj클래스에 있던 __setattr__을 실행시키지 않고
#따라서 기존 setattr의 역할이던 객체 내의 변수 생성 되지않는다!

#흐름:obj.x=10 하면 obj의 x가 없네? setattr 실행시켜야지
#->오버라이딩된 setattr실행-> print문 실행->이후 super() 즉 object(기본설정된) setattr 실행
#->객체내의 x변수 생성 및 초기화
#but super setattr 실행안함? 그럼 기본설정된 역할이던 x의 생성이 안됨
