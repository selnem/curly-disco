#serialization deserialization : 전자는 프로그램에서 다른환경에서 볼수 있도록 전달 (dic->json) 후자는 반대
metrix=[[1,2,3],[4,5,6],[7,8,9]]
m_list=[x for num in metrix for x in num ]

x,y=(1,2)
print(x)
print(y)

n={x:x**2 for x in range(10)}
en={k: v for k,v in n.items() if v%2==0}
print(en)

t="hello"

freq={c: t.count(c) for c in set(t)}
print(freq)

