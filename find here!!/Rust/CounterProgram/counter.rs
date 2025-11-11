use std::io::{self, Write};

fn main() {
    let mut counter = 0;
    
    println!("Welcome to the Rust Counter Program!");
    println!("Commands: [i]ncrement, [d]ecrement, [s]how, [e]xit");
    
    loop {
        print!("\nEnter command: ");
        io::stdout().flush().unwrap();
        
        let mut input = String::new();
        io::stdin().read_line(&mut input)
            .expect("Failed to read line");
        
        let command = input.trim().to_lowercase();
        
        match command.as_str() {
            "i" | "increment" => {
                counter += 1;
                println!("Counter incremented! Current value: {}", counter);
            }
            "d" | "decrement" => {
                counter -= 1;
                println!("Counter decremented! Current value: {}", counter);
            }
            "s" | "show" => {
                println!("Current counter value: {}", counter);
            }
            "e" | "exit" => {
                println!("Exiting... Final counter value: {}", counter);
                break;
            }
            _ => {
                println!("Invalid command! Use: [i]ncrement, [d]ecrement, [s]how, or [e]xit");
            }
        }
    }
}
