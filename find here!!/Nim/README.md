# Nim Hello World Program

## Description

This is a simple "Hello, World!" program written in Nim, a statically-typed compiled systems programming language. Nim combines the power and efficiency of low-level languages with the expressiveness and elegance of high-level languages.

## Installing Nim

### Windows
1. Download the installer from the [official Nim website](https://nim-lang.org/install.html)
2. Run the installer and follow the installation wizard
3. Add Nim to your PATH environment variable

### macOS
Using Homebrew:
```bash
brew install nim
```

### Linux
Using your package manager:
```bash
# Ubuntu/Debian
sudo apt-get install nim

# Fedora
sudo dnf install nim

# Arch Linux
sudo pacman -S nim
```

Alternatively, you can use choosenim (Nim version manager):
```bash
curl https://nim-lang.org/choosenim/init.sh -sSf | sh
```

## Compiling and Running

### Compile the program
```bash
nim c hello_world.nim
```

### Run the compiled executable
```bash
# On Linux/macOS
./hello_world

# On Windows
hello_world.exe
```

### Compile and run in one step
```bash
nim c -r hello_world.nim
```

## Sample Output

```
Hello, World!
```

## Code Example

```nim
echo "Hello, World!"
```

## Additional Information

- **Language**: Nim
- **Paradigm**: Multi-paradigm (imperative, object-oriented, functional)
- **File Extension**: `.nim`
- **Official Website**: https://nim-lang.org/
- **Documentation**: https://nim-lang.org/documentation.html
