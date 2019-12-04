def doubles(array, n):
    x = 0
    clean_array = []
    a = 0
    b = 1

    while x < n:
        if array[x][a] == array[x][b]:
            a += 1
            b += 1
            clean_array.append(array[x])
            print("hello")
            if b == 6:
                break
        x += 1

    return clean_array


def remove_decrease(array, n):

    x = 0
    clean_array = []
    while x < n:
        if array[x][0] <= array[x][1] and array[x][1] <= array[x][2] and array[x][2] <= array[x][3] and \
        array[x][3] <= array[x][4] and array[x][4] <= array[x][5]:
            clean_array.append(array[x])
        x += 1

    return(clean_array)


def array_it ():

    possible_password = []
    low = 387638
    high = 919123
    password_range = high - low
    a = low
    b = high
    i = 0

    while a < b:

        x = list(map(int, str(a)))
        possible_password.append(x)
        i += 1
        a += 1

    possible_password = remove_decrease(possible_password, password_range)
    possible_password = doubles(possible_password, password_range)

    print(possible_password)

array_it()

