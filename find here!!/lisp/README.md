# Lisp

**Year Created:** 1958  
**Creator:** John McCarthy

## 💻 Program File: `hello.lisp`

```lisp
(format t "Hello, World!~%")
```

## ⚙️ Compile & Run

To run Lisp programs, you can use various implementations like SBCL (Steel Bank Common Lisp), CLISP, or others:

### Using SBCL:
```bash
sbcl --script hello.lisp
```

### Using CLISP:
```bash
clisp hello.lisp
```

### Interactive REPL:
```bash
sbcl
```
Then load the file:
```lisp
(load "hello.lisp")
```

## 🧠 Fun Fact

Lisp is the second-oldest high-level programming language still in widespread use today (after Fortran). The name "Lisp" derives from "LISt Processing," reflecting its innovative use of linked lists as a primary data structure. Lisp introduced many revolutionary concepts that are now commonplace in modern programming:

- **Garbage collection** - Automatic memory management
- **Dynamic typing** - Types determined at runtime
- **Recursion** - Self-referential function calls as a primary control structure
- **First-class functions** - Functions as data that can be passed as arguments
- **Tree data structures** - Using S-expressions (symbolic expressions)

Lisp's distinctive parenthesized prefix notation and powerful macro system made it the dominant language in AI research for decades. Many of its ideas influenced virtually every programming language that followed, including Python, JavaScript, and Ruby.
