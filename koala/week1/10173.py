while True:
    line=input()
    if line == "EOI":
        break
    find=False
    line=line.lower()
    for i in range(len(line)-4):
        if line[i:i+4]=='nemo':
            find=True
            break
    if find ==True:
        print("Found")
    else:
        print("Missing")


