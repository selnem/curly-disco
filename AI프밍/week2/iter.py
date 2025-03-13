my_list=[1,2,3]
iterator=iter(my_list)

while True:
    try:
        print(next(iterator),end=' ')
    except:
        break

gen_expr=iter((x**2 for x in range(5)))

print(next(gen_expr))
print(next(gen_expr))
print(next(gen_expr))

