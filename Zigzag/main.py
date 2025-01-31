def createZigzag(listCount, elements, starting = 0):
    mainList = []
    iter = starting-1;
    for i in range(listCount):
        singleList = []
        for j in range(elements):
            iter+=1
            singleList.append(iter)


        if (i % 2 != 0):
            temp = singleList
            singleList = []
            for j in range(elements):
                id = elements - j
                singleList.append(temp[id-1])
        mainList.append(singleList)
    return(mainList)


print(createZigzag(4,3,4))