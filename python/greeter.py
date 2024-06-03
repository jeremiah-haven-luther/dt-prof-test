'''Hello World in Python'''


class Greeter:
    '''Clas Greeter'''
    def __init__(self, msg):
        '''Constructor'''
        self._message = msg

    def __str__(self):
        return str(self._message)
