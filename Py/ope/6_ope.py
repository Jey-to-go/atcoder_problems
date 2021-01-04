import os
import pathlib

print(os.path.exists('test.txt'))
print(os.path.isfile('test.txt'))
print(os.path.isdir('object'))

# os.rename('test.txt', 'renamed.txt')
# os.symlink('renamed.txt', 'symlink.txt')

# os.mkdir('test_dir')
# os.rmdir('test_dir')

pathlib.Path('empty.txt').touch()
os.remove('empty.txt')
