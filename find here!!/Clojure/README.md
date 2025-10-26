# Clojure Hello World

## About Clojure
Clojure is a modern, dynamic, and functional dialect of the Lisp programming language on the Java platform. It is designed to be a general-purpose language, combining the approachability and interactive development of a scripting language with an efficient and robust infrastructure for multithreaded programming. Clojure is a compiled language, yet remains completely dynamic – every feature supported by Clojure is supported at runtime.

## Prerequisites
To run this Clojure program, you need:
- Java Development Kit (JDK) 8 or higher installed
- Clojure installed on your system

### Installing Clojure

**On macOS/Linux:**
```bash
# Using Homebrew (macOS)
brew install clojure/tools/clojure

# Using apt (Linux)
curl -O https://download.clojure.org/install/linux-install-1.11.1.1413.sh
chmod +x linux-install-1.11.1.1413.sh
sudo ./linux-install-1.11.1.1413.sh
```

**On Windows:**
- Download and install from [Clojure official website](https://clojure.org/guides/getting_started)

## How to Run

### Method 1: Using Clojure CLI
```bash
clojure hello.clj
```

### Method 2: Using the REPL
```bash
clj
```
Then load the file:
```clojure
(load-file "hello.clj")
```

### Method 3: Direct execution
```bash
clj -M hello.clj
```

## Expected Output
```
Hello, World!
```

## File Information
- **Language**: Clojure
- **File**: hello.clj
- **Purpose**: Display "Hello, World!" message

## About the Code
The program uses Clojure's `println` function to print "Hello, World!" to the standard output. This is a simple demonstration of Clojure's concise syntax and functional programming approach.

## Learn More
- [Official Clojure Website](https://clojure.org/)
- [Clojure Documentation](https://clojure.org/guides/getting_started)
- [ClojureDocs](https://clojuredocs.org/)

---
*Contributed as part of the Hello World in Every Language project*
