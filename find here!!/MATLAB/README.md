# MATLAB

**Year Created:** 1984  
**Creator:** Cleve Moler

## 💻 Program File: `hello.m`
```matlab
% hello.m — prints Hello, World! to stdout
disp('Hello, World!')
```

## ⚙️ Compile & Run

### MATLAB Desktop (open MATLAB, then at prompt):
```matlab
>> hello
```

### Command Line (run from terminal/shell):
```bash
# Modern MATLAB (R2019a+)
matlab -batch "hello"

# Older MATLAB versions
matlab -nodisplay -nosplash -nodesktop -r "run('hello.m');exit;"
```

## 🖨 Output
```
Hello, World!
```

## 🧠 Fun Fact

MATLAB stands for "Matrix Laboratory" and was originally created to provide easy access to matrix software libraries (LINPACK and EISPACK) without having to learn Fortran. Today, it's the standard tool in engineering education, scientific research, and industry for numerical computing and algorithm development.
