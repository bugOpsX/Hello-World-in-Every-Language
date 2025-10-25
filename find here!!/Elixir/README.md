# 🚀 Hello, World! in Elixir

Welcome to the **Elixir** version of the classic “Hello, World!” program — a simple yet powerful example showing how Elixir works.

---

## 🧠 About Elixir

**Elixir** is a functional, concurrent programming language built on top of the **Erlang VM (BEAM)**.
It’s designed for building **scalable**, **fault-tolerant**, and **maintainable** applications.
Even though this example is tiny, it runs on the same rock-solid foundation that powers systems like **WhatsApp**, **Discord**, and **Pinterest**.

---

## 📂 Project Structure

```
elixir/
├── hello.exs      # Main Elixir script
└── README.md      # Project instructions and info
```

---

## ⚙️ Prerequisites

Before running the script, make sure you have:

* **Elixir installed** → [https://elixir-lang.org/install.html](https://elixir-lang.org/install.html)
* (Optional) **VS Code with ElixirLS extension** for syntax highlighting and debugging

To verify installation, open your terminal and run:

```bash
elixir -v
```

You should see something like:

```
Elixir 1.16.0 (compiled with Erlang/OTP 26)
```

---

## ▶️ How to Run the Program

### **Option 1: Run from Terminal**

1. Open your terminal.
2. Navigate to the `Elixir` folder (note the quotes if your folder name has spaces or symbols):

   ```bash
   cd "find here!!/Elixir"
   ```
3. Run the script:

   ```bash
   elixir hello.exs
   ```
4. Output:

   ```
   Hello, World!
   ```

---

### **Option 2: Run from VS Code**

1. Open this project in VS Code.
2. Make sure you have installed the **ElixirLS: Elixir support and debugger** extension.
3. Open `hello.exs`.
4. Open the terminal in VS Code (`Ctrl + ~` or `Cmd + ~` on Mac).
5. Run:

   ```bash
   elixir hello.exs
   ```
6. See the message printed in the terminal:

   ```
   Hello, World!
   ```

---

### **Optional: Run with Code Runner**

If you install the **Code Runner** extension in VS Code, you can:

* Open `hello.exs`
* Click the **“Run Code” ▶️** button
  or press `Ctrl+Alt+N` (Windows/Linux) or `Cmd+Option+N` (Mac)
* See the result instantly in the Output tab!

---

## ✨ Fun Fact

Elixir runs on the **Erlang VM (BEAM)** — which means it can handle **millions of lightweight processes** simultaneously.
That’s why apps like **WhatsApp** (handling billions of messages daily) rely on the same core technology behind this simple script.

---

## 🧩 Code Overview

**`hello.exs`**

```elixir
IO.puts("Hello, World!")
```

This line simply calls the built-in `IO.puts/1` function to print a message to the console.

---

## ❤️ Author

**Yatharth Katta**
Driven by curiosity, powered by innovation.
