# C - Doubly linked lists
## crackme4
Here are the steps that I came through to discover the crackme4.

### Check what king of file this is
```sh
file crackme4
```
Output -> `crackme4: python 3.4 byte-compiled`
So it's a python 3.4 file.
I can't use python <3.7 and the module I use need python <3.8.

### uv
I'm using uv (uvicorn) for python environment manager.
#### New env for the project
```sh
uv venv crackme-env --python=python3.7
source crackme-env/bin/activate
```
#### Install packages
```sh
uv pip install uncompyle6
```
#### Uncompress
```sh
uncompyle6 crackme4
```
In output I got an error because it's not a .pyc or .pyo file
#### Check the content of the file
```sh
head -c 16 crackme4 | xxd
```
Output -> 00000000: ee0c 0d0a 75e8 6e58 c300 0000 e300 0000  ....u.nX........

Analysis :
Bytes 0–3 (ee 0c 0d 0a) : magic number for python 3.4
Bytes 4–7 (75 e8 6e 58) : timestamp (date and time of file's creation)

It's a python file, I just forgot to change the extension ...
#### Change extension + uncompress
```sh
cp crackme4 crackme4.pyc
uncompyle6 crackme6.pyc
```
In output I got a python code with the password logic.

#### Python output
I use the command `python3` to enter in python environment and print the password (answer in 100-password file)
