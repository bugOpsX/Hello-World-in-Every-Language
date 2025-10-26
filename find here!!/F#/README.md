# F#

**Year Created:** 2005  
**Creator:** Don Syme (Microsoft Research)

## 💻 Program File: `hello.fs`
```fsharp
// hello.fs — prints Hello, World! to stdout
printfn "Hello, World!"
```

## ⚙️ Compile & Run

### Using .NET Interactive (F# Script):
```bash
dotnet fsi hello.fs
```

### Compile to an Executable:
```bash
# Compile
fsharpc hello.fs -o hello.exe

# Run on Linux/macOS
./hello.exe
```

### Run on Windows (PowerShell):
```powershell
.\hello.exe
```

## 🖨 Output
```
Hello, World!
```

## 🧠 Fun Fact

F# is a functional-first language on the .NET platform, blending functional, object-oriented, and imperative programming styles. It was inspired by OCaml and is particularly popular in financial services for quantitative analysis and algorithmic trading due to its strong type system and immutability-by-default approach.
