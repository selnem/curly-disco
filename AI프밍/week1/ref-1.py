#shallow copy
x=[1,2,3]#x객체생성 이후 리스트의 주소를 전달
y=x# x 리스트의 주소만 카피해옴
y.append(4)
print(x)#따라서 y에다 추가해도 x와 동일한 메모리를 공유하고있기에 1234 출력
#이를 통해 파이썬의 객체(변수같은 느낌) 은 객체를 참조하고 있는 변수같은 느낌

a=10
b=a
a+=1
print(b)
#파이썬에서 정수, 스트링, 튜플등은 imutalble 변수들로써 값을 변경시킬수 없기 떄문에
#객체를 새로 생성하여 11이라는객체를 만들어 a에다가 주소를 전달한다.
#따라서 b는여전히 10을 가르키고
#a는 11을가르키고 있는것이다.