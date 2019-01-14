#Fancy Quotes Problem Code: FANCY
t = int(input())
while t:
    word_list=input()
    word_list = word_list.split(" ")
    #print(word_list)
    flag=0
    for word in word_list:
        if word == 'not':
            print("Real Fancy")
            flag=1
            break
    if flag==0:
        print("regularly fancy")
    t=t-1

