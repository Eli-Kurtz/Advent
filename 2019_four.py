def doubles(array, a, b):

    x = 0
    n = len(array)
    clean_array = []
    while x < n:
        if array[x][a] == array[x][b]:
            clean_array.append(array[x])
        x += 1

    print(clean_array)
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


def array_it ():

    possible_password = []
    buffer_2 = []
    low = 387638
    high = 919123
    password_range = high - low
    a = low
    b = high
    i = 0
    flatten = lambda l: [item for sublist in l for item in sublist]

    while a < b:

        x = list(map(int, str(a)))
        possible_password.append(x)
        i += 1
        a += 1

    possible_password = remove_decrease(possible_password, password_range)
    for i in range(5):
        buffer = doubles(possible_password, i, i+1)
        buffer_2.append(buffer)

    possible_password = buffer_2

    print(len(flatten(possible_password)))


array_it()

