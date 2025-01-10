
while True:
    word=input()
    if line == "EOI":
        break
    find=False
    line=line.lower()
    for i in range(len(word)-4):
        if line[i:i+4]=='nemo':
            find=True
            break
    if find ==True:
        print("Found")
    else:
        print("Missing")
    

