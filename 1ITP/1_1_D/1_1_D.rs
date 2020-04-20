use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");
    let input: u32 = input.trim().parse()
        .expect("Failed to parse");

    let hour: u32 = input / (60 * 60);
    let minute: u32 = (input % (60 * 60)) / 60;
    let second: u32 = (input % (60 * 60)) % 60;
        
    println!("{}:{}:{}", hour, minute, second);
}

