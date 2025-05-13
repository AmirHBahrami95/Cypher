# Cypher
A simple c++ program to play around with different Cyphers :D

## How it works
it receives your input either from stdin or from a file path,
reads it line by line, applies a cipher on the bytes (currently
only Caesar Cipher) and writes it to either stoud or a file path
of your choice

## How to compile
You need to have __make__ utility installed, then simply go to the 
program's directory where the Makefile is located and
```bash
make
```

## How to use
All you have to do is:
```bash
./bin/cypher c [input_path] [output_path]
```

You can call the executable which is now located at __bin/__ directory
directly or you can add the functionality to your shell by running 
the __startup.sh__

this script will make a __scripts/__ directory at __$HOME__ if it's not
there already and then aliases the program as __cifr__ to make it comfortable 
to use via your shell. you can change all of these variables in __startup.sh__
if you want

also - don't forget to 
```bash
chmod +x startup.sh
```
before running it!

## What's to come
other ciphers and more elegant cryptography algorithms are to be added, however
bc this is a simple and fun project, this is just a vision and no actual promise
or whatever :)
