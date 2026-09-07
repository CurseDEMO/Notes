def return_value(a, b):
    c = a + b
    return c

def not_return_value(a, b):
    c = a + b

def print_value(a, b):
    print(a + b)
    

return_value(1, 9)
not_return_value(4, 9)
print_value(3, 5)

value = return_value(1, 9)
value_none = not_return_value(4, 9)
value_none_print = print_value(3, 5)

print(value)
print(value_none)
print(value_none_print)

print(return_value(1, 9))
print(not_return_value(4, 9))
print(print_value(3, 5))