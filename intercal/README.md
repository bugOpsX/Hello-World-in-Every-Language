# INTERCAL

**Year Created:** 1972  
**Creator:** Don Woods and James M. Lyon

## 💻 Program File: `hello.i`

```intercal
DO ,1 <- #13
PLEASE DO ,1 SUB #1 <- #238
DO ,1 SUB #2 <- #108
DO ,1 SUB #3 <- #112
DO ,1 SUB #4 <- #0
DO ,1 SUB #5 <- #64
DO ,1 SUB #6 <- #194
DO ,1 SUB #7 <- #48
PLEASE DO ,1 SUB #8 <- #22
DO ,1 SUB #9 <- #248
DO ,1 SUB #10 <- #168
DO ,1 SUB #11 <- #24
DO ,1 SUB #12 <- #16
DO ,1 SUB #13 <- #162
PLEASE READ OUT ,1
PLEASE GIVE UP
```

## ⚙️ Compile & Run

To compile and run INTERCAL programs, you need C-INTERCAL (the most widely used implementation):

```bash
ick hello.i -o hello
./hello
```

## 🧠 Fun Fact

INTERCAL (short for "Compiler Language With No Pronounceable Acronym") was created as a parody of programming languages of the era. It deliberately violates every principle of good language design and includes features like:

- The **COME FROM** statement (the opposite of GOTO)
- **Mandatory politeness** (using PLEASE for some statements to avoid being "insufficiently polite")
- Calculations using only operations like **mingle** and **select**

Despite being a joke, INTERCAL has a cult following and working compilers exist to this day, making it one of the most famous esoteric programming languages.
