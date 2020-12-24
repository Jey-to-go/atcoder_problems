
# 関数の説明は関数の中に書く
def example_func(param1, param2):
    """Example function with types documents in the docstring.

    Args:
        param1 (int): The first parameter.
        param2 (str): The second parameter.

    Returns:
        bool: The return value. True for success, False otherwise
    """
    print(param1)
    print(param2)
    return True

# これで中身のコメントを読むことができる
print(example_func.__doc__)

# これでも中身のコメントを読めるよ
# help(example_func.__doc__)

