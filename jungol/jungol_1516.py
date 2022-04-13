while 1 :
    words = input("")
    if(words == 'END'):
        break

    cnt = {}
    words = words.split(' ')

    for i in words:
        if i not in cnt.keys():
            cnt[i] = 1
        else:
            cnt[i] += 1

    key = sorted(cnt.keys())
    for i in key:
        print('{} : {}'.format(i, cnt[i]))
