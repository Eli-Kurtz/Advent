
def remove_decrease (array, n):

    clean_array = []
    x = 0
    y = 1
    z = 0

    for i in array:
       # print(array[x])
        while y < 6:
            if int(array[x][z]) <= int(array[x][y]):
                print(array[x])
                clean_array.append(array[x])
                z += 1
                y += 1

    print(clean_array)



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

    print(possible_password)

    remove_decrease(possible_password, password_range)


array_it()

