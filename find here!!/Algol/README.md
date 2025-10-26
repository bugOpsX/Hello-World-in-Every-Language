Algol 60 / Algol 68
Year Created: Algol 60 (1960), Algol 68 (1968) Creator: International committees (IFIP Working Group 2.1)

💻 Program File: hello.a68 (Algol 68 Example)
Algol 60 lacked standardized I/O, so the more consistent Algol 68 is used here.

Code snippet

BEGIN
    print (("Hello, World!", newline));
END


Note on Algol 60: A common, but non-standard, Algol 60 version would use a procedure like WRITE or outstring which varied by compiler.


⚙️ Compile & Run
Algol implementations varied widely. The following is a conceptual compilation process for Algol 68, as a standard shell command:
-------------
a68c hello.a68 -o hello
./hello
---------------


🧠 Fun Fact
Algol (short for Algorithmic Language) was a major intellectual achievement and the first language to be formally defined using Backus-Naur Form (BNF), a notation still used today to describe programming language syntax. Although it didn't dominate the commercial market, it heavily influenced the design of almost every structured language that followed, including Pascal, which itself was an influence on C.