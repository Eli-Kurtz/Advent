import itertools


def count(array):

    x = 0
    n = len(array)
    clean_array = []
    while x < n:
        for i in range(10):
            if array[x].count(i) == 2:
                clean_array.append(array[x])
        x += 1
    return clean_array


def doubles(array):

    x = 0
    n = len(array)
    clean_array = []
    while x < n:
        for i in range(5):
            a = i
            b = i+1
            if array[x][a] == array[x][b]:
                clean_array.append(array[x])
                #am I appending extra values?
        x += 1

    #print(clean_array)
    return clean_array


def remove_decrease(array, n):

    x = 0
    clean_array = []
    while x < n:
        if array[x][0] <= array[x][1] and array[x][1] <= array[x][2] and array[x][2] <= array[x][3] and \
        array[x][3] <= array[x][4] and array[x][4] <= array[x][5]:
            clean_array.append(array[x])
        x += 1

    return clean_array


def array_it():

    possible_password = []
    low = 387638
    high = 919123
    password_range = high - low
    a = low
    b = high
    i = 0
    #flatten = lambda l: [item for sublist in l for item in sublist]

    while a < b:

        x = list(map(int, str(a)))
        possible_password.append(x)
        i += 1
        a += 1

    possible_password = remove_decrease(possible_password, password_range)

    possible_password = doubles(possible_password)

    possible_password.sort()

    possible_password = count(possible_password)

    print(len(list(possible_password for possible_password,_ in itertools.groupby(possible_password))))
    #https://stackoverflow.com/questions/2213923/removing-duplicates-from-a-list-of-lists

    #print(len(possible_password))


array_it()

